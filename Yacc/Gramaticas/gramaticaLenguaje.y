%{

#include <iostream>
#include <sstream>
#include "../AnalisisLexico/AnalizadorLexico.h"
#include "../AnalisisLexico/Headers/AccionesSemanticas.h"
#include "../TablaDeSimbolos/TablaDeSimbolos.h"
#include "../AnalisisSemantico/EstructuraTercetos.h"
#include "../AnalisisSemantico/Headers/Ambito.h"
#include "../ContErrWar/ContErrWar.h"
#include "../AnalisisSemantico/Headers/Conversion.h"
#include "../AnalisisSemantico/Headers/InsideClass.h"
#include "../AnalisisSemantico/Headers/VarSinInic.h"

#define RESET   "\x1B[0m"
#define YELLOW  "\x1B[33m"
#define RED "\x1B[31m"
#define BLUE "\x1B[34m"

%}

%token IF ELSE ENDIF PRINT CLASS VOID SHORT ULONG FLOAT WHILE DO LESSLESS EQUAL NOTEQUAL GREATEREQUAL LESSEQUAL CTESHORT CTEULONG CTEFLOAT CTESTRING ID RETURN
%start program

%%

program: '{'sentenceList'}' {ChequearForwardDeclarations();
                             list<string> varSinUsar = VarSinInic::listVarTop();
                             for (const string& var : varSinUsar){
                                yywarning("Variable/Objeto " + var + " Sin asignacion de un valor en el main");
                             }
                            }
        | '{''}' {yywarning("Programa vacio");}
        | sentenceList {yyerror("Falta llaves delimitadores de programa");}
        ;

sentenceList: sentenceList sentence
            | sentence
            ;

sentence: declarative','
        | executable','
        | ',' {yywarning("Sentencia vacia");}
        ;

declarative: function
           | declaration
           | class
           ;

executableList: executableList executable','
              | executable','
              | executableList declarative',' {yyerror("Sentencia declarativa en lugar de una ejecutable");}
              | declarative',' {yyerror("Sentencia declarativa en lugar de una ejecutable");}
              ;

executable: ifStatement
          | whileStatement 
          | print 
          | functionCall
          | assignment
          | lessless {
                        if (esObjeto($1)){
                            string atributo, objeto;
                            dividirStringPorArroba($1,objeto, atributo);
                            crearTerLessLessObjeto(obtenerUltimaParte(objeto, '#'),atributo);
                        }else{
                            crearTerLessLess(obtenerUltimaParte($1, '#'));
                        }
                    }
                        
declaration: variableDeclaration
           | objectDeclaration
           ;

variableDeclaration: type variableList {setearTipos($1,$2);}
                   ;

objectDeclaration: ID objectList {  
                                    if (InsideClass::insideClass() && $1 == InsideClass::getClassSinMain()){
                                        yyerror("No es posible declarar un atributo el cual su tipo sea la misma clase a la que pertenece");
                                    }else{
                                        string name;
                                        ChequearDeclaracion($1, name, "Clase");
                                        setearTipos($1,$2);
                                        TablaDeSimbolos::del($1); //El ID al declarar un objeto se agrega automaticamente por error en el lexico
                                    }
                                   }
                 ;

objectList: objectList ';' ID { $$ = stepsDeclVarAndObj($3, "Obj", $1);} 
          | ID {$$ = stepsDeclVarAndObj($1, "Obj");} 
          ;

variableList: variableList ';' ID {$$ = stepsDeclVarAndObj($3, "Var", $1);}
            | ID { $$ = stepsDeclVarAndObj($1, "Var");}
            ;

assignment: nesting '=' expression {yymenssage("Asignacion");
                                    string nomEncontrada, nomAtributo;
                                    if (esObjeto($1) && (ChequearDeclObjeto($1,nomEncontrada, nomAtributo)) || !esObjeto($1) && (ChequearDeclaracion($1,nomEncontrada, "Var",true))){
                                        string tipo;
                                        TablaDeSimbolos::del($1);
                                        bool conversion;
                                        string op = $3;
                                        bool lessLessOp1 = revisarLessLess(op);
                                        if (esObjeto($1) ){
                                            conversion = converAsig(nomAtributo,op,tipo);
                                            VarSinInic::delVar(sigID($1)+Ambito::get());
                                        } else {
                                            conversion = converAsig(nomEncontrada,op,tipo);
                                            VarSinInic::delVar(nomEncontrada);
                                        }
                                        if (!conversion){
                                            if ($3[0] == '['){
                                                EstructuraTercetos::addTerceto("=",nomEncontrada,op,tipo);
                                            } else {
                                                if (esObjeto($3)){
                                                    string atributo, objeto;
                                                    dividirStringPorArroba(op,objeto, atributo);
                                                    EstructuraTercetos::addTerceto("=",nomEncontrada,objeto,tipo);
                                                }else{
                                                    EstructuraTercetos::addTerceto("=",nomEncontrada,op,tipo);
                                                }
                                            }
                                        }else{
                                            EstructuraTercetos::addTerceto("=",nomEncontrada,EstructuraTercetos::nroActualTerceto(),tipo);
                                        }
                                        if (esObjeto($3)){
                                                    string atributo, objeto;
                                                    dividirStringPorArroba(op,objeto, atributo);
                                                    if (lessLessOp1) crearTerLessLessObjeto(objeto,atributo);
                                        }else{
                                            if (lessLessOp1) crearTerLessLess(op);
                                        }
                                    }
                                    }
          ;

nesting: nesting'.'ID {$$ = $1 + "." + $3;}
       | ID {$$ = $1;}
       ;

function: functionHeader '{'functionBody'}' {stepsFunctionOrMethod();}
        ;

functionHeader: VOID ID'('formalParameter')'{ if (InsideClass::insideClass()){
                                                    string key; 
                                                    if ((InsideClass::insideMethod())){ //Se trata de una funcion dentro de un metodo
                                                        if (!(InsideClass::insideFuncionMethod())){
                                                            if (noReDeclarada($2, "Funcion") && chequearNomPF($2,$4)) {
                                                                VarSinInic::addTop(); 
                                                                key = TablaDeSimbolos::changeKey($2);
                                                                TablaDeSimbolos::setUso(key, "Funcion");
                                                                Ambito::add($2);
                                                                InsideClass::insideFuncionMethod(true);
                                                            }
                                                        }else{
                                                            yyerror("No es posible anidar otra funcion, excede los niveles permitidos");
                                                        }
                                                    }else{ //Se trata de un metodo
                                                        if ($2 == InsideClass::getClassSinMain()){
                                                            yyerror("No es posible declarar un metodo con el mismo nombre al de la clase a la que pertenece");
                                                        }else{
                                                            if (noReDeclarada($2+"-"+InsideClass::getClassSinMain(), "Metodo") && chequearNomPF($2,$4)) {
                                                                InsideClass::addMethod($2);
                                                                VarSinInic::addTop();
                                                                key = TablaDeSimbolos::changeKeyClass($2,InsideClass::getClass());
                                                                TablaDeSimbolos::setUso(key, "Metodo");
                                                                Ambito::add($2+"-"+InsideClass::getClassSinMain());
                                                                InsideClass::insideMethod(true);
                                                        }
                                                        }
                                                    }
                                                    TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                                    string keyFormal = TablaDeSimbolos::changeKey($4);
                                                    TablaDeSimbolos::setParametroFormal(key,keyFormal);
                                                    EstructuraTercetos::setAmbito(Ambito::getTercetos()); 
                                            }else{
                                                if (noReDeclarada($2, "Funcion") && chequearNomPF($2,$4)) {
                                                    string key = TablaDeSimbolos::changeKey($2);
                                                    TablaDeSimbolos::setUso(key, "Funcion");
                                                    VarSinInic::addTop();
                                                    Ambito::add($2);
                                                    string keyFormal = TablaDeSimbolos::changeKey($4);
                                                    TablaDeSimbolos::setParametroFormal(key,keyFormal);
                                                    EstructuraTercetos::setAmbito(Ambito::getTercetos());
                                                }
                                              }
                                            }
              | VOID ID'('')'   {if (InsideClass::insideClass()){
                                        string key; 
                                        if ((InsideClass::insideMethod())){ //Se trata de una funcion dentro de un metodo
                                            if (!(InsideClass::insideFuncionMethod())){
                                                if (noReDeclarada($2, "Funcion")) { 
                                                    key = TablaDeSimbolos::changeKey($2);
                                                    VarSinInic::addTop();
                                                    TablaDeSimbolos::setUso(key, "Funcion");
                                                    Ambito::add($2);
                                                    InsideClass::insideFuncionMethod(true);
                                                }
                                            }else{
                                                yyerror("No es posible anidar otra funcion, excede los niveles permitidos");
                                            }
                                        }else{ //Se trata de un metodo
                                            if ($2 == InsideClass::getClassSinMain()){
                                                yyerror("No es posible declarar un metodo con el mismo nombre al de la clase a la que pertenece");
                                            }else{
                                                if (noReDeclarada($2+"-"+InsideClass::getClassSinMain(), "Metodo")) {
                                                    InsideClass::addMethod($2);
                                                    VarSinInic::addTop(); 
                                                    key = TablaDeSimbolos::changeKeyClass($2,InsideClass::getClass());
                                                    TablaDeSimbolos::setUso(key, "Metodo");
                                                    Ambito::add($2+"-"+InsideClass::getClassSinMain());
                                                    InsideClass::insideMethod(true);
                                            }
                                            }
                                        }
                                        TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                        EstructuraTercetos::setAmbito(Ambito::getTercetos());
                                }else{ 
                                        if (noReDeclarada($2, "Funcion")) {
                                            string key = TablaDeSimbolos::changeKey($2);
                                            VarSinInic::addTop();
                                            TablaDeSimbolos::setUso(key, "Funcion");
                                            Ambito::add($2);
                                            EstructuraTercetos::setAmbito(Ambito::getTercetos());
                                        }
                                    }
                                }
              ;

functionBody: sentenceList return
            | return {yywarning("Funcion vacia");}
            | sentenceList {yyerror("Funcion sin RETURN obligatorio al final");}
            ;

formalParameter: type ID {$$ = $2; TablaDeSimbolos::setUso($2, "PF"); setearTipos($1,$2);}
               ;

functionCall: nesting'('')' {
                            string name;
                            string tipo;
                            if (esObjeto($1)){
                                if (ChequearDeclObjeto($1,name,tipo,false)){
                                    if (ChequearRecursion($1,true)){
                                        if (!TablaDeSimbolos::tieneParametros(name)){
                                            EstructuraTercetos::addTerceto("Call",name,"");
                                        } else {
                                            yyerror("El metodo " + name + " requiere parametro");
                                        }
                                    }else{
                                        yyerror("Se esta haciendo un llamado recursivo del metodo: "+$1);
                                    }
                                }
                            } else {
                                if (ChequearDeclaracion($1,name,"Funcion")){
                                    if (ChequearRecursion($1,false)){
                                        if (!TablaDeSimbolos::tieneParametros(name)){
                                            EstructuraTercetos::addTerceto("Call",name,"");
                                        } else {
                                            yyerror("La funcion " + name + " requiere parametro");
                                        }
                                    }else{
                                        yyerror("Se esta haciendo un llamado recursivo a la funcion: "+$1);
                                    }
                                }
                            }
                            TablaDeSimbolos::del($1);
                            }
            | nesting'('realParameter')' {
                                            string name;
                                            string tipo;
                                            if (esObjeto($1)){
                                                if (ChequearDeclObjeto($1,name,tipo,false)){
                                                    if (ChequearRecursion($1,true)){
                                                        string tipo;
                                                        if (TablaDeSimbolos::tieneParametros(name)){
                                                            if (converAsig(TablaDeSimbolos::getParametroFormal(name), $3, tipo)){
                                                                EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),EstructuraTercetos::nroActualTerceto(),tipo);
                                                            } else {
                                                                if (esObjeto($3)){
                                                                        string atributo, objeto;
                                                                        dividirStringPorArroba($3,objeto, atributo);
                                                                        EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),objeto,tipo);
                                                                }else{
                                                                    EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),$3,tipo);
                                                                }
                                                            }
                                                            EstructuraTercetos::addTerceto("Call",name,"");
                                                        }
                                                    }else{
                                                        yyerror("Se esta haciendo un llamado recursivo del metodo: "+$1);
                                                    }
                                                } else {
                                                    yyerror("El metodo " + name + " NO requiere parametro");
                                                }
                                            }else{
                                                if (ChequearDeclaracion($1,name,"Funcion")){
                                                    if (ChequearRecursion($1,false)){
                                                        TablaDeSimbolos::del($1);
                                                        string tipo;
                                                        if (TablaDeSimbolos::tieneParametros(name)){
                                                            if (converAsig(TablaDeSimbolos::getParametroFormal(name), $3, tipo)) {
                                                                EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),EstructuraTercetos::nroActualTerceto(),tipo);
                                                            } else {
                                                                if (esObjeto($3)){
                                                                        string atributo, objeto;
                                                                        dividirStringPorArroba($3,objeto, atributo);
                                                                        EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),objeto,tipo);
                                                                }else{
                                                                    EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),$3,tipo);
                                                                }
                                                            }
                                                            EstructuraTercetos::addTerceto("Call",name,"");
                                                        }
                                                    }else{
                                                        yyerror("Se esta haciendo un llamado recursivo a la funcion: "+$1);
                                                    }
                                                } else {
                                                    yyerror("La funcion " + name + " NO requiere parametro");
                                                }
                                                }
                                            TablaDeSimbolos::del($1);
                                         }
            ;

realParameter: expression
             ;

ifStatement: IF condition iterativeBody else iterativeBody ENDIF {yymenssage("IF");jumpEndIf();}
           | IF condition iterativeBody ENDIF {yymenssage("IF");jumpEndIf();}
           | IF condition ENDIF {yywarning("If vacio");yymenssage("IF");jumpEndIf();} 
           | IF condition iterativeBody else ENDIF {yywarning("Else vacio");yymenssage("IF");jumpEndIf();}
           | IF condition else iterativeBody ENDIF {yywarning("If vacio");yymenssage("IF");jumpEndIf();}
           ;

else: ELSE {jumpEndThen();}
    ;

whileStatement: while condition DO iterativeBody {yymenssage("While");jumpEndWhile();} 
              | while condition DO  {yywarning("While vacio");yymenssage("While");jumpEndWhile();}
              ;
              
while: WHILE {EstructuraTercetos::apilar();EstructuraTercetos::addLabel();}
     ;

iterativeBody: '{' executableList '}' 
            | '{' executableList return '}'
            | executable','
            | return
            | '{' '}' {yywarning("Bloque vacio");}
            ;

condition: '('comparison')' {EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",$2,"");}
         | '('comparison  {yyerror("Falta segundo parentesis en la condicion");EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",$2,"");}
         | comparison')'  {yyerror("Falta primer parentesis en la condicion");EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",$1,"");}
         | comparison     {yyerror("Faltan  parentesis en la condicion");EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",$1,"");}
         ;

class: classHeader '{'sentenceList'}' { yymenssage("Clase");
                                        TablaDeSimbolos::forwDeclComp(InsideClass::getClass());
                                        InsideClass::unstackMethods();
                                        InsideClass::outClass();
                                      }
     | classHeader '{'sentenceList heredity '}' {
                                                 yymenssage("Clase");
                                                 TablaDeSimbolos::setHerencia(InsideClass::getClass(),$4);
                                                 if (TablaDeSimbolos::nivelHerencia(InsideClass::getClass()) > 3){
                                                    yyerror("La clase ha excedido el nivel de herencia (maximo nivel = 3)");
                                                 }
                                                 TablaDeSimbolos::forwDeclComp(InsideClass::getClass());
                                                 string clase = InsideClass::getClass();
                                                 string herencia = TablaDeSimbolos::getHerencia(clase);
                                                 int foward = TablaDeSimbolos::getForwDecl(herencia);
                                                 ChequearSobrescritura(clase,herencia);
                                                 InsideClass::outClass();
                                                 }
     | classHeader {claseSinimplementar(InsideClass::getClass());InsideClass::outClass();}
     | classHeader '{'sentenceList heredity sentenceList'}'  {yyerror("La herencia debe ir al final de la declaracion de la clase");}
     ;

classHeader: CLASS ID { if ((!classInFunction($2)) && !classInClass($2)){
                            if (noReDeclarada($2, "Clase")){
                                string name =  TablaDeSimbolos::changeKey($2);
                                TablaDeSimbolos::setUso(name,"Clase");
                                TablaDeSimbolos::inicNivelHer(name);
                                InsideClass::inClass(name);
                            } else {
                                InsideClass::inClass($2+Ambito::get());
                                TablaDeSimbolos::del($2);
                            }
                        }
                      }
            ;

heredity: ID',' { string name = "<NoExiste>";
                ChequearDeclaracion($1,name,"Clase");
                TablaDeSimbolos::del($1);
                if (name == InsideClass::getClass()){
                    yyerror("La clase hereda de ella misma.");
                } else {
                    $$ = name;
                }
                }
        ;

comparison: expression operatorsLogics expression {$$ = stepsOperation($1, $3, $2);}
         ;

expression: expression'+'termino { $$ = stepsOperation($1, $3, "+"); }
          | expression'-'termino { $$ = stepsOperation($1, $3, "-"); }
          | termino {$$ = $1;}
          ;

termino: termino'*'factor { $$ = stepsOperation($1, $3, "*"); }
       | termino'/'factor { $$ = stepsOperation($1, $3, "/"); }
       | factor {$$ = $1;}
       ;

factor: nesting          {$$ = stepsFactor($1);}
      | constant         {$$ = $1;}
      | lessless         {$$ = $1;}
      | '(' expression ')' {yyerror("Expresion no puede ir entre parentesis");$$=$2;}
      ;

lessless: nesting LESSLESS {$$ = stepsFactor($1, true);}
        ;

operatorsLogics: EQUAL {$$ = "==";}
               | NOTEQUAL {$$ = "!!";}
               | GREATEREQUAL {$$ = ">=";}
               | LESSEQUAL {$$ = "<=";}
               | '<' {$$ = "<";}
               | '>' {$$ = ">";}
               ;

constant: CTESHORT {chequearRangoSHORT($1); $$ = $1;}
        | '-'CTESHORT {TablaDeSimbolos::chequearNegativos($2);$$ = "-"+$2;}
        | CTEFLOAT {TablaDeSimbolos::chequearPositivos($1); $$ = $1;}
        | '-'CTEFLOAT {TablaDeSimbolos::chequearNegativos($2);$$ = "-"+$2;}
        | CTEULONG {$$ = $1;}
        | '-'CTEULONG {yyerror("Una constante ULONG no puede ser negativa");}
        ;

type: SHORT {$$="SHORT";}
    | ULONG {$$="ULONG";}
    | FLOAT {$$="FLOAT";}
    ;

print: PRINT cadena {EstructuraTercetos::addTerceto("Print",$2,"");}
    ;

cadena: CTESTRING
    ;

return: RETURN ',' {EstructuraTercetos::addTerceto("Return","","");}
      ;

%%

// ============================== Mensajes ==============================

void yymenssage(string menssage){
    cout  << endl  << BLUE << "Estructura detectada: " << menssage  << RESET << endl;
}

void yyerror(string menssage){
	ContErrWar::addMensaje("Linea " + to_string(AccionesSemanticas::lineaInicioToken) +" - ERROR: " + menssage,"ERROR");
}

void yywarning(string menssage){
    ContErrWar::addMensaje("Linea " + to_string(AccionesSemanticas::lineaInicioToken) +" - WARNING: " + menssage,"WARNING");
}

// ============================== Chequeo Rango ==============================

void chequearRangoSHORT(string valor){
    int chequear = stoi(TablaDeSimbolos::getValor(valor));
    if (chequear >= 128){
        yyerror("Constante SHORT fuera de rango");
        TablaDeSimbolos::del(valor);
    } else {
        TablaDeSimbolos::chequearPositivos(valor);
    }
}

// ============================== Tercetos Sentencias de Control ==============================

void jumpEndWhile(){
    int tercetoFalse = EstructuraTercetos::desapilar();
    EstructuraTercetos::addTerceto("BI","["+to_string(EstructuraTercetos::desapilar())+"]","");
    EstructuraTercetos::updateTerceto(tercetoFalse,EstructuraTercetos::nroSigTerceto());
    EstructuraTercetos::addLabel();
}

void jumpEndThen(){
    int tercetoFalse = EstructuraTercetos::desapilar();
    EstructuraTercetos::apilar();
    EstructuraTercetos::addTerceto("BI","","");
    EstructuraTercetos::updateTerceto(tercetoFalse,EstructuraTercetos::nroSigTerceto());
    EstructuraTercetos::addLabel();
}

void jumpEndIf(){
    EstructuraTercetos::updateTerceto(EstructuraTercetos::desapilar(),EstructuraTercetos::nroSigTerceto());
    EstructuraTercetos::addLabel();
}

string partEndID(string nesting){

    // Encuentra la posición del último punto
    size_t dot_index = nesting.find_last_of('.');

    // Si no hay punto, devuelve cadena vacía
    if (dot_index == string::npos)
        return nesting;

    // Devuelve la cadena desde el punto hasta el final
    return nesting.substr(dot_index + 1);
}

// ============================== Conversiones Implicitas ==============================

void dividirStringPorArroba(const string &input, string &nombreLlamado, string &nombraAtri) {
    size_t posicionArroba = input.find('@');
    if (posicionArroba != std::string::npos) {
        string comNom = input;
        nombreLlamado = input.substr(0, posicionArroba);
        nombraAtri = comNom.substr(posicionArroba + 1);
    } else {
        nombreLlamado = input;
        nombraAtri = input;
    }
}

string tipoOperando(string operando){
    if (operando[0] != '['){
        return TablaDeSimbolos::getTipo(operando);
    } else {
        operando.erase(0, 1);
        operando.erase(operando.size() - 1, 1);
        return EstructuraTercetos::getTipo(operando);
    }
}

bool converAsig(string izq, string der, string & tipo){
    string atrIzq, atrDer;
    dividirStringPorArroba(izq, izq, atrIzq);
    dividirStringPorArroba(der, der, atrDer);
    string tipoIzq = TablaDeSimbolos::getTipo(atrIzq);
    string tercetoDer = der; //Se hace una copia para el caso de tener que sacarle los corchetes
    string tipoDer = tipoOperando(atrDer);
    if (tipoIzq == " " || tipoDer == " "){
    		tipo = " ";
    		return false;
    }
    string valido = Conversion::asignacion(tipoIzq,tipoDer);
    tipo = tipoIzq;
    if (valido == "ERROR"){
        yyerror("No es posible asignarle un tipo "+tipoDer+" a un tipo "+tipoIzq);
    }else if (tipoIzq != tipoDer){
            string conversion = string(1,tipoDer[0])+"to"+string(1,tipoIzq[0]); 
            EstructuraTercetos::addTerceto(conversion,tercetoDer,"",tipoIzq);
            return true;
    }
    return false;
}

bool cambiarTipoOp1(string op1, string op2){
    if ((op1 == "SHORT") || (op1 == "ULONG")) {
        return true;
    } else {
        return false;
    }
}

bool converOp(string op1, string op2, string & opAConvertir, string & tipo){
    string tipoOp1, tipoOp2, atrOp1, atrOp2;
    dividirStringPorArroba(op1, op1, atrOp1);
    dividirStringPorArroba(op2, op2, atrOp2);
    tipoOp1 = tipoOperando(atrOp1);
    tipoOp2 = tipoOperando(atrOp2);
    if (tipoOp1 == " " || tipoOp2 == " "){
		tipo = " ";
		return false;
    }
    string valido = Conversion::operacion(tipoOp1,tipoOp2);
    if (valido == "ERROR"){
        yyerror("No es posible operar entre un "+tipoOp1+" y un "+tipoOp2);
    }else if (tipoOp1 != tipoOp2){
            if (cambiarTipoOp1(tipoOp1, tipoOp2)){
                opAConvertir = "op1";
                tipo = tipoOp2;
                string conversion = string(1,tipoOp1[0])+"to"+string(1,tipoOp2[0]);
                EstructuraTercetos::addTerceto(conversion,op1,"",tipoOp2);
            }else{
                opAConvertir = "op2";
                tipo = tipoOp1;
                string conversion = string(1,tipoOp2[0])+"to"+string(1,tipoOp1[0]);
                EstructuraTercetos::addTerceto(conversion,op2,"",tipoOp1);
            }
            return true;
    } 
    tipo = tipoOp1;
    return false;
}

// ============================== Cargar tipos Lista de variables ==============================

void setearTipos(string tipo, string listVariable){
    string var;
    std::istringstream variableStream(listVariable);  // Asegúrate de inicializar el istringstream
    while (getline(variableStream, var, '&')) {
        TablaDeSimbolos::setTipo(var, tipo);
    }
}

// ============================== Chequeo Variable NO declarada ==============================

string sigID(string & var){
    size_t indicePunto = var.find('.');       
    if (indicePunto != std::string::npos) {
        string primeraParte = var.substr(0, indicePunto);
        string segundaParte = var.substr(indicePunto + static_cast<size_t>(1));
        var=segundaParte;
        return primeraParte;
    } else {
        string aux=var;
        var.clear();
        return aux;
    }
}

bool ChequearDeclaracion(string var, string & nomEncontrada, string uso, bool chequeoFormal = false){
    string ambito=Ambito::get();
    bool final = false;
    bool encontrada = false;
    if (chequeoFormal){
        if (TablaDeSimbolos::usoAsignado(var+ambito) == "PF"){
            nomEncontrada = var+ambito;
            encontrada = true;
        }
    }
    while(! final && ! encontrada){
        if ((TablaDeSimbolos::usoAsignado(var+ambito) == uso) || (TablaDeSimbolos::usoAsignado(var+ambito) == "PF")){
            nomEncontrada = var+ambito;
            encontrada = true;
        }else{
            if (ambito.empty()){
                final = true;
                yyerror(uso + " " + var + " NO declarada");
            }
            size_t pos = ambito.find_last_of(":");
            if (pos != string::npos) {
                ambito = ambito.substr(0, pos);
            }
        }
    }
    return encontrada;
}
int contarCaracter(string cadena, char caracter) {
    int contador = 0;
    for (char c : cadena) {
        if (c == caracter) {
            contador++;
        }
    }
    return contador;
}

bool esObjeto(string nesting){
    return contarCaracter(nesting,'.') > 0;
}

bool ChequearDeclObjeto(string obj, string & nomEncontrada, string & nomAtributo, bool esAtributo = true){
    string check = sigID(obj);
    TablaDeSimbolos::del(check);
    bool encontrada = false;
    bool final = ! ChequearDeclaracion(check, nomEncontrada, "Obj");
    string antCheck = TablaDeSimbolos::getTipo(nomEncontrada)+":main";
    while (! final && ! encontrada){
        check = sigID(obj);
        TablaDeSimbolos::del(check);
        if (TablaDeSimbolos::usoAsignado(check+":main") == "Clase"){
        	if (TablaDeSimbolos::getHerencia(antCheck) != check+":main"){
                if (check+":main" == antCheck){
                    yyerror("Invocacion incorrecta de la clase " + check);
                } else {
                    yyerror("Clase " + antCheck + " No hereda de " + check);
                }
        		final = true;
        	} else {
				antCheck = check+":main";
				nomEncontrada = check + "." + nomEncontrada;
				if (obj.length() == 0){
					yyerror("Objeto esta intentando utilizar una clase "+ check +" en lugar de un atributo");
					final = true;
				}
        	}
        } else if (TablaDeSimbolos::usoAsignado(check+"-"+antCheck) == "Atr"){
            string tipo = TablaDeSimbolos::getTipo(check+"-"+antCheck);
        	nomEncontrada = check + "." + nomEncontrada;
            if (tipo != "SHORT" && tipo != "ULONG" && tipo != "FLOAT"){
                antCheck = tipo+":main";
                if (obj.length() == 0){
                    yyerror("Uso no valido de atributo");
                    final = true;
                }
            } else {
                if (esAtributo){
                    if (obj.length() == 0){
                        nomAtributo = check+"-"+antCheck;
                        encontrada = true;
                    }
                } else {
                    yyerror("Uso no valido de atributo en el llamado a metodo");
                    final = true;
                }
            }
        }else if (TablaDeSimbolos::usoAsignado(check+"-"+antCheck) == "Metodo"){
            if (esAtributo){
                yyerror("Uso no valido de atributo en la invocacion a metodo");
                final = true;
            } else {
                if (obj.length() == 0){
                    nomEncontrada = check+"-"+antCheck;
                    encontrada = true;
                } else {
                    yyerror("Uso no valido de invocacion a metodo");
                    final = true;
                }
            }
        } else {
            yyerror("Clase/atributo no existente");
            final = true;
        }
        
    }
    return encontrada;
}

// ============================== Chequeo Re declaradas ==============================

bool noReDeclarada(string decl, string usoOriginal){
    string ambito=Ambito::get();
    string uso = TablaDeSimbolos::usoAsignado(decl+ambito);
    if (uso == "Var" || uso == "Funcion" || uso == "Obj" || uso == "Clase" && usoOriginal != "Clase" || uso == "Atr" || uso == "Metodo"){
    	yyerror(uso + " " + decl + " se encuentra re-declarada como " + usoOriginal);
    	return false;
    } else if (uso == "Clase" && usoOriginal == "Clase" ){
        if (TablaDeSimbolos::getForwDecl(decl+ambito) == 1){
            yyerror(uso + " " + decl + " se encuentra re-declarada como " + usoOriginal);
        }   
        return false;
    }
    return true;
}

// ============================== Sobrescritura de metodos ==============================

void ChequearSobrescritura(string clase, string herencia){
    string metodoActual, uso;
    if (!(herencia == " ")){
        while (InsideClass::moreMethods()){
        metodoActual = InsideClass::getMethod();
        uso = TablaDeSimbolos::usoAsignado(metodoActual+"-"+herencia);
        if (uso == "Metodo"){
            yyerror("No es posible en la clase "+clase+" sobreescribir el metodo "+metodoActual+" de la clase "+herencia+" de la cual hereda");
        }
        InsideClass::outMethod();
        }
    }
    InsideClass::unstackMethods(); //En el caso de no haber herencia se vacia la pila llena de metodos
}

// ============================== Forward Declaration ==============================

void claseSinimplementar(string clase){
    string name = clase;
    if (TablaDeSimbolos::getForwDecl(name) != -1){
        yyerror("Clase " + clase + " se encuentra re-declarada");
    } else {
        TablaDeSimbolos::inicForwDecl(name);
    }
}

void ChequearForwardDeclarations(){
    if(!(TablaDeSimbolos::forwDeclAll())){
        string forwDecl = "";
        while (!(TablaDeSimbolos::forwDeclAll())){
            forwDecl = forwDecl + TablaDeSimbolos::nextForwDecl() + ", ";
        }
        forwDecl.pop_back();
        forwDecl.pop_back();
        yyerror("No se completo la declaracion de las siguientes clases: "+forwDecl);
    }
}

// ============================== Pasos a seguir al detectar una operacion ==============================

string obtenerUltimaParte(string cadena, char separador) {
    size_t ultimaPosicion = cadena.find_last_of(separador);
    if (ultimaPosicion != std::string::npos) {
        return cadena.substr(ultimaPosicion + 1);
    }
    // Si no se encuentra el separador, devolver toda la cadena
    return cadena;
}

bool revisarLessLess(string & op){
    if (op[0] == '#'){
        op = obtenerUltimaParte(op,'#');
        
        return true;
    } else {
        return false;
    }
}

void crearTerLessLess(string op){
    EstructuraTercetos::addTerceto("-",op,TablaDeSimbolos::getUno(op),TablaDeSimbolos::getTipo(op));
    EstructuraTercetos::addTerceto("=",op,EstructuraTercetos::nroActualTerceto(),TablaDeSimbolos::getTipo(op));
}

void crearTerLessLessObjeto(string objeto, string atributo){
    EstructuraTercetos::addTerceto("-",objeto,TablaDeSimbolos::getUno(atributo),TablaDeSimbolos::getTipo(atributo));
    EstructuraTercetos::addTerceto("=",objeto,EstructuraTercetos::nroActualTerceto(),TablaDeSimbolos::getTipo(atributo));
}

string stepsOperation(string op1, string op2, string operador){
    string op, tipo, salida; //Aca se almacena el operando a convertir en caso de ser necesario
    
    bool lessLessOp1 = revisarLessLess(op1);
    bool lessLessOp2 = revisarLessLess(op2);
    bool conversion = converOp(op1,op2,op,tipo);
    salida = EstructuraTercetos::nroSigTerceto();
    string nom1, nom2, tip1, tip2;
    dividirStringPorArroba(op1, nom1, tip1);
    dividirStringPorArroba(op2, nom2, tip2);
    if (!conversion){
        EstructuraTercetos::addTerceto(operador,nom1,nom2,tipo);
    } else if (op == "op1") {
        EstructuraTercetos::addTerceto(operador,EstructuraTercetos::nroActualTerceto(),nom2,tipo);
    } else {
        EstructuraTercetos::addTerceto(operador,nom1,EstructuraTercetos::nroActualTerceto(),tipo);
    }
    if (esObjeto(op1)){
        if (lessLessOp1) crearTerLessLessObjeto(nom1,tip1);
    }else{
        if (lessLessOp1) crearTerLessLess(nom1);
    }
    if (esObjeto(op2)){
        if (lessLessOp2) crearTerLessLessObjeto(nom2,tip2);
    }else{
        if (lessLessOp2) crearTerLessLess(nom2);
    }
    return salida;
}

bool classInFunction(string nombre){
    string ambito = Ambito::get();
    char caracterBuscado = ':';
    int cantidad = contarCaracter(ambito, caracterBuscado);
    if ( cantidad >= 2 ){
        yyerror("No es posible declarar una clase dentro de una funcion - Clase " + nombre + " dentro de funcion " + obtenerUltimaParte(ambito,caracterBuscado));
        return true;
    }else{
        return false;
    }
}

bool classInClass(string nombre){
    if (InsideClass::insideClass()){
        yyerror("No es posible declarar una clase dentro de otra - Clase " + nombre + " dentro de clase " + InsideClass::getClass());
        return true;
    } else{
        return false;
    }
}

// ======================== Pasos en declaracion de objetos y variables ========================

string stepsDeclVarAndObj(string declarado, string uso ,string declaraciones = ""){
    string key;
    if ((InsideClass::insideClass()) && (!InsideClass::insideMethod())){
        if (declarado == InsideClass::getClassSinMain()){
            yyerror("El nombre del atributo "+declarado+" es igual al nombre de la clase");
        }else{
            if (noReDeclarada(declarado+"-"+InsideClass::getClassSinMain(), "Atr")){
                key = TablaDeSimbolos::changeKeyClass(declarado,InsideClass::getClass());
                TablaDeSimbolos::setUso(key, "Atr");
                TablaDeSimbolos::setClass(key,InsideClass::getClass());
            }
        }
    } else {
        if (noReDeclarada(declarado, uso)) {
            key = TablaDeSimbolos::changeKey(declarado);
            VarSinInic::addVar(key);
            TablaDeSimbolos::setUso(key, uso);
        }
    }
    string salida;
    if (declaraciones != ""){
        salida = declaraciones+"&"+key;
    } else {
        salida = key;
    }
    return salida;
}

// ======================== Pasos cuando se reconoce un factor ========================

string stepsFactor(string fact, bool lessLess = false){
    string nomEncontrada, nomAtributo = "<NoExiste>";
    bool chequeoOK;
    string salida;
    if (esObjeto(fact)){
        chequeoOK = ChequearDeclObjeto(fact,nomEncontrada, nomAtributo);
        if (chequeoOK)  salida = nomEncontrada+"@"+nomAtributo;
    } else if (Ambito::insideMethod()){
        chequeoOK = ChequearDeclaracion(fact, nomEncontrada, "Var", true);
        if (chequeoOK) salida = nomEncontrada;
    }else{
        chequeoOK = ChequearDeclaracion(fact,nomEncontrada,"Var");
        if (chequeoOK) salida = nomEncontrada;
    }
    TablaDeSimbolos::del(fact);
    if (chequeoOK && lessLess) salida = "#"+salida;
    return salida;
}

// ======================== Recursion ========================

bool ChequearRecursion(string funcion, bool esMetodo){
    string ambito = obtenerUltimaParte(Ambito::get(),':');
    if(esMetodo){
        funcion = obtenerUltimaParte(funcion,'.');
        size_t indicePunto = ambito.find('-');       
        if (indicePunto != std::string::npos) {
            ambito = ambito.substr(0, indicePunto);
        }
    }
    return !(ambito == funcion);
}

// ======================== Chequeo parametro Formal mismo nombre que la funcion ========================

bool chequearNomPF(string function, string pf){
    if (function == pf){
        yyerror("Mismo funcion " + function + " tiene el mismo nombre que el parametro formal");
        return false;
    }
    return true;
}

// ======================== Pasos cuadno se reconoce una funcion o un metodo ========================

void stepsFunctionOrMethod(){
    Ambito::del();
    EstructuraTercetos::setAmbito(Ambito::getTercetos());
    if (!(InsideClass::insideClass())){
        yymenssage("Funcion");
    }
    if ((InsideClass::insideClass()) && (InsideClass::insideMethod()) && (InsideClass::insideFuncionMethod())){
        InsideClass::insideFuncionMethod(false);
        yymenssage("Funcion");
    }else{
        if ((InsideClass::insideClass()) && (InsideClass::insideMethod()) && !(InsideClass::insideFuncionMethod())){
            InsideClass::insideMethod(false);
            yymenssage("Metodo");
        }
    }
    list<string> varSinUsar = VarSinInic::listVarTop();
    for (const string& var : varSinUsar){
        yywarning("Variable/Objeto " + var + " Sin asignacion de un valor dentro de la funcion donde se declaro");
    }
    VarSinInic::delTop();
}