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

#define RESET   "\x1B[0m"
#define YELLOW  "\x1B[33m"
#define RED "\x1B[31m"
#define BLUE "\x1B[34m"

%}

%token IF ELSE ENDIF PRINT CLASS VOID SHORT ULONG FLOAT WHILE DO LESSLESS EQUAL NOTEQUAL GREATEREQUAL LESSEQUAL CTESHORT CTEULONG CTEFLOAT CTESTRING ID RETURN
%start program

%%

program: '{'sentenceList'}'
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
              | declarative',' {yyerror("Sentencia declarativa en lugar de una ejecutable");}
              ;

executable: ifStatement
          | whileStatement 
          | print 
          | functionCall
          | assignment
          ;

declaration: variableDeclaration
           | objectDeclaration
           ;

variableDeclaration: type variableList {setearTipos($1,$2);}
                   ;

objectDeclaration: ID objectList {  
                                    string name;
                                    ChequearDeclaracion(partEndID($1), name, "Clase");
                                    setearTipos($1,$2);
                                    TablaDeSimbolos::del($1); //El ID al declarar un objeto se agrega automaticamente por error en el lexico
                                   }
                 ;

objectList: objectList ';' ID { if (noReDeclarada($3, "Objeto")) {
                                        string key = TablaDeSimbolos::changeKey($3);
                                        TablaDeSimbolos::setUso(key, "Obj");
                                        $$=$1+"&"+key;
                                        if (InsideClass::insideClass()){
                                            TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                        }
                                    }
                              } 
          | ID { if (noReDeclarada($1, "Objeto")) {
                    string key = TablaDeSimbolos::changeKey($1);
                    TablaDeSimbolos::setUso(key, "Obj");
                    $$=key;
                    if (InsideClass::insideClass()){
                        TablaDeSimbolos::setClass(key,InsideClass::getClass());
                    }
                }
                } 
          ;

variableList: variableList ';' ID { if (InsideClass::insideClass()){
                                        if (noReDeclarada($3+"-"+InsideClass::getClass(), "Atr")) {
                                            string key = TablaDeSimbolos::changeKeyClass($3,InsideClass::getClass());
                                            TablaDeSimbolos::setUso(key, "Atr");
                                            $$=$1+"&"+key;
                                            TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                        }
                                   }else{
                                    if (noReDeclarada($3, "Var")){
                                        string key = TablaDeSimbolos::changeKey($3);
                                        TablaDeSimbolos::setUso(key, "Var");
                                        $$=$1+"&"+key;
                                    }
                                  }
                                }

            | ID {if (InsideClass::insideClass()){
                        if (noReDeclarada($1+"-"+InsideClass::getClass(), "Atr")){
                            string key = TablaDeSimbolos::changeKeyClass($1,InsideClass::getClass());
                            TablaDeSimbolos::setUso(key, "Atr");
                            $$=key;
                            TablaDeSimbolos::setClass(key,InsideClass::getClass());
                        }
                    }else{
                        if (noReDeclarada($1, "Var")){
                            string key = TablaDeSimbolos::changeKey($1);
                            TablaDeSimbolos::setUso(key, "Var");
                            $$=key;
                        }
                    }
                }
                  
            ;

assignment: nesting '=' expression {yymenssage("Asignacion");
                                    string nomEncontrada;
                                    $$ = EstructuraTercetos::nroActualTerceto();
                                    if (ChequearDeclaracion(partEndID($1), nomEncontrada, "Var")){
                                        string tipo;
                                        bool conversion = converAsig(nomEncontrada,$3,tipo);
                                        if (!conversion){
                                            if ($3[0] == '['){
                                                EstructuraTercetos::addTerceto("=",nomEncontrada,$$);
                                            } else {
                                                EstructuraTercetos::addTerceto("=",nomEncontrada,$3,tipo);
                                            }
                                        }else{
                                            EstructuraTercetos::addTerceto("=",nomEncontrada,$$,tipo);
                                        }
                                    }
                                    
                                    }
          ;

nesting: nesting'.'ID {$$ = $1 + "." + $3;}
       | ID {$$ = $1;}
       ;

function: functionHeader '{'functionBody'}' {yymenssage("Funcion");Ambito::del();EstructuraTercetos::setAmbito(Ambito::get());}
        ;

functionHeader: VOID ID'('formalParameter')'{   if (noReDeclarada($2, "Funcion")) {
                                                    string key = TablaDeSimbolos::changeKey($2);
                                                    TablaDeSimbolos::setUso(key, "Funcion");
                                                    Ambito::add($2);
                                                    if (InsideClass::insideClass()){
                                                        TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                                    }
                                                    string keyFormal = TablaDeSimbolos::changeKey($4);
                                                    TablaDeSimbolos::setParametroFormal(key,keyFormal);
                                                    EstructuraTercetos::setAmbito(Ambito::get());
                                                }
                                            }
              | VOID ID'('')'   {   if (noReDeclarada($2, "Funcion")) {
                                        string key = TablaDeSimbolos::changeKey($2);
                                        TablaDeSimbolos::setUso(key, "Funcion");
                                        Ambito::add($2);
                                        if (InsideClass::insideClass()){
                                            TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                        }
                                        EstructuraTercetos::setAmbito(Ambito::get());
                                    }
                                }
              ;

functionBody: sentenceList return
            | return {yywarning("Funcion vacia");} 
            ;

formalParameter: type ID {$$ = $2; TablaDeSimbolos::setUso($2, "Parametro Formal"); setearTipos($1,$2);}
               ;

functionCall: nesting'('')' {
                            string name;
                            if (ChequearDeclaracion(partEndID($1),name,"Funcion")){
                                EstructuraTercetos::addTerceto("Call",partEndID($1),"");
                            }
                            }
            | nesting'('realParameter')' {
                                            string name;
                                            if (ChequearDeclaracion(partEndID($1),name,"Funcion")){
                                                EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(partEndID($1)),$3);
                                                EstructuraTercetos::addTerceto("Call",partEndID($1),"");
                                            }
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
         | '('comparison  {yyerror("Falta segundo parentesis en la condicion");}
         | comparison')'  {yyerror("Falta primer parentesis en la condicion");}
         | comparison     {yyerror("Faltan  parentesis en la condicion");}
         ;

class: classHeader '{'sentenceList'}' {yymenssage("Clase");TablaDeSimbolos::forwDeclComp(InsideClass::getClass());InsideClass::outClass();}
     | classHeader '{'sentenceList heredity '}' {
                                                 yymenssage("Clase");
                                                 TablaDeSimbolos::setHerencia(InsideClass::getClass(),$4);
                                                 if (TablaDeSimbolos::nivelHerencia(InsideClass::getClass()) > 3){
                                                    yyerror("La clase ha excedido el nivel de herencia (maximo nivel = 3)");
                                                 }
                                                 TablaDeSimbolos::forwDeclComp(InsideClass::getClass());
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
                                InsideClass::inClass($2);
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

comparison: expression operatorsLogics expression {$$ = EstructuraTercetos::nroSigTerceto();EstructuraTercetos::addTerceto($2,$1,$3);}
         ;

expression: expression'+'termino { $$ = stepsOperation($1, $3, "+"); }
          | expression'-'termino { $$ = stepsOperation($1, $3, "-"); }
          | termino {$$ = $1;}
          | '(' expression ')' {yyerror("Expresion no puede ir entre parentesis");}
          ;

termino: termino'*'factor { $$ = stepsOperation($1, $3, "*"); }
       | termino'/'factor { $$ = stepsOperation($1, $3, "/"); }
       | factor {$$ = $1;}
       ;

factor: nesting          {  string varNombre = "<NoExiste>";
                            ChequearDeclaracion(partEndID($1),varNombre,"Var");
                            $$ = varNombre;}
      | constant         {$$ = $1;}
      | nesting LESSLESS {string varNombre = "<NoExiste>";
                          ChequearDeclaracion(partEndID($1),varNombre,"Var");
                          $$ = EstructuraTercetos::nroSigTerceto();
                          // Si se usa el valor viejo, reemplazar nroSigTerceto por varNombre
                          EstructuraTercetos::addTerceto("-",varNombre,TablaDeSimbolos::getUno(varNombre),TablaDeSimbolos::getTipo(varNombre));
                          EstructuraTercetos::addTerceto("=",varNombre,EstructuraTercetos::nroActualTerceto());
                         }
      ;

operatorsLogics: EQUAL {$$ = "==";}
               | NOTEQUAL {$$ = "!!";}
               | GREATEREQUAL {$$ = ">=";}
               | LESSEQUAL {$$ = "<=";}
               | '<' {$$ = "<";}
               | '>' {$$ = ">";}
               ;

constant: CTESHORT {chequearRangoSHORT($1); $$ = $1;}
        | '-'CTESHORT {TablaDeSimbolos::chequearNegativos($2);$$ = $2;}
        | CTEFLOAT {TablaDeSimbolos::chequearPositivos($1); $$ = $1;}
        | '-'CTEFLOAT {TablaDeSimbolos::chequearNegativos($2);$$ = $2;}
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
	cout << endl  << RED << "Linea " << AccionesSemanticas::lineaInicioToken <<": " << menssage << RESET << endl;
    ContErrWar::sumErr();
}

void yywarning(string menssage){
    cout << endl << YELLOW << "Warning - Linea " << AccionesSemanticas::lineaInicioToken <<": " << menssage << RESET << endl;
    ContErrWar::sumWar();
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
    cout << TablaDeSimbolos::imprimir();
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

bool converAsig(string izq, string der, string & tipo){
    string tipoIzq = TablaDeSimbolos::getTipo(izq);
    string tipoDer;
    string tercetoDer = der; //Se hace una copia para el caso de tener que sacarle los corchetes
    if (der[0] != '['){
        tipoDer = TablaDeSimbolos::getTipo(der);
    } else {
        der.erase(0, 1);
	    der.erase(der.size() - 1, 1);
        tipoDer = EstructuraTercetos::getTipo(der);
    }
    if (tipoIzq == " " || tipoDer == " "){
    		tipo = " ";
    		return false;
    }
    string valido = Conversion::asignacion(tipoIzq,tipoDer);
    tipo = tipoIzq;
    if (valido == "ERROR"){
        yyerror("No es posible asignarle un "+tipoDer+" a un "+tipoIzq);
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

string tipoOperando(string operando){
    if (operando[0] != '['){
        return TablaDeSimbolos::getTipo(partEndID(operando));
    } else {
        operando.erase(0, 1);
        operando.erase(operando.size() - 1, 1);
        return EstructuraTercetos::getTipo(operando);
    }
}

bool converOp(string op1, string op2, string & opAConvertir, string & tipo){
    string tipoOp1, tipoOp2;
    if (tipoOp1 == " " || tipoOp2 == " "){
		tipo = " ";
		return false;
    }
    int terceto;
    if (op1[0] != '['){
        tipoOp1 = TablaDeSimbolos::getTipo(partEndID(op1));
    } else {
        op1.erase(0, 1);
	    op1.erase(op1.size() - 1, 1);
        tipoOp1 = EstructuraTercetos::getTipo(op1);
    }
    if (op2[0] != '['){
        tipoOp2 = TablaDeSimbolos::getTipo(partEndID(op2));
    } else {
        op2.erase(0, 1);
	    op2.erase(op2.size() - 1, 1);
        tipoOp2 = EstructuraTercetos::getTipo(op2);
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
        string var = var.substr(indicePunto + 1);

        return primeraParte;
    } else {
        string aux=var;
        var.clear();
        return aux;
    }
}

bool ChequearDeclaracion(string var, string & nomEncontrada, string tipo){
    string ambito=Ambito::get();
    bool final = false;
    bool encontrada = false;
    while(! final && ! encontrada){
        if (TablaDeSimbolos::usoAsignado(var+ambito) == tipo){
            nomEncontrada = var+ambito;
            encontrada = true;
        }else{
            if (ambito.empty()){
                final = true;
                yyerror(tipo + " " + var + " NO declarada");
            }
            size_t pos = ambito.find_last_of(":");
            if (pos != string::npos) {
                ambito = ambito.substr(0, pos);
            }
        }
    }
    return encontrada;
}

// ============================== Chequeo Re declaradas ==============================

bool noReDeclarada(string decl, string usoOriginal){
    string ambito=Ambito::get();
    string uso = TablaDeSimbolos::usoAsignado(decl+ambito);
    if (uso == "Var" || uso == "Funcion" || uso == "Obj" || uso == "Clase" && usoOriginal != "Clase"){
    	yyerror(uso + " " + decl + " se encuentra re-declarada como " + usoOriginal);
    	return false;
    } else if (uso == "Clase" && usoOriginal == "Clase"){
        return false;
    }
    return true;
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

// ============================== Pasos a seguir al detectar una operacion ==============================

string stepsOperation(string op1, string op2, string operador){
    string op, tipo, salida; //Aca se almacena el operando a convertir en caso de ser necesario
    bool conversion = converOp(op1,op2,op,tipo);
    salida = EstructuraTercetos::nroSigTerceto();
    if (!conversion){
        EstructuraTercetos::addTerceto(operador,op1,op2,tipo);
    } else if (op == "op1") {
        EstructuraTercetos::addTerceto(operador,EstructuraTercetos::nroActualTerceto(),op2,tipo);
    } else {
        EstructuraTercetos::addTerceto(operador,op1,EstructuraTercetos::nroActualTerceto(),tipo);
    }
    return salida;
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

string obtenerUltimaParte(string cadena, char separador) {
    size_t ultimaPosicion = cadena.find_last_of(separador);
    if (ultimaPosicion != std::string::npos) {
        return cadena.substr(ultimaPosicion + 1);
    }
    // Si no se encuentra el separador, devolver toda la cadena
    return cadena;
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