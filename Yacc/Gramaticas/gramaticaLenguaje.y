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

objectDeclaration: ID variableList
                 ;

variableList: variableList ';' ID { if (chequearVarReDec($3)) {
                                        string key = TablaDeSimbolos::changeKey($3);
                                        TablaDeSimbolos::setUso(key, "Var");
                                        $$=$1+"&"+key;
                                    }
                                  } 
            | ID {if (chequearVarReDec($1)){
                    string key = TablaDeSimbolos::changeKey($1);
                    TablaDeSimbolos::setUso(key, "Var");
                    $$=key;
                    }
                  }
            ;

assignment: nesting '=' expression {yymenssage("Asignacion");
                                    string nomEncontrada;
                                    $$ = EstructuraTercetos::nroActualTerceto();
                                    if (ChequearDeclaracion(partEndID($1), nomEncontrada)){
                                        string tipo;
                                        bool conversion = asignar(nomEncontrada,$3,tipo);
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

functionHeader: VOID ID'('formalParameter')'{   string key = TablaDeSimbolos::changeKey($2);
                                                TablaDeSimbolos::setUso(key, "Funcion");
                                                Ambito::add($2);
                                                string keyFormal = TablaDeSimbolos::changeKey($4);
                                                TablaDeSimbolos::setParametroFormal(key,keyFormal);
                                                EstructuraTercetos::setAmbito(Ambito::get());
                                            }
              | VOID ID'('')'   {   string key = TablaDeSimbolos::changeKey($2);
                                    TablaDeSimbolos::setUso(key, "Funcion");
                                    Ambito::add($2);
                                    EstructuraTercetos::setAmbito(Ambito::get());
                                }
              ;

functionBody: sentenceList return
            | return {yywarning("Funcion vacia");} 
            ;

formalParameter: type ID {$$ = $2; TablaDeSimbolos::setUso($2, "Parametro Formal"); setearTipos($1,$2);}
               ;

functionCall: nesting'('')' {EstructuraTercetos::addTerceto("Call",partEndID($1),"");}
            | nesting'('realParameter')' {EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(partEndID($1)),$3);EstructuraTercetos::addTerceto("Call",partEndID($1),"");}
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

class: CLASS ID '{'sentenceList'}' {yymenssage("Clase");TablaDeSimbolos::changeKey($2);TablaDeSimbolos::setUso($2,"Clase");}
    | CLASS ID '{'sentenceList heredity '}' {yymenssage("Clase");TablaDeSimbolos::changeKey($2);TablaDeSimbolos::setUso($2,"Clase");}
    ;

heredity: ID','
        ;

comparison: expression operatorsLogics expression {$$ = EstructuraTercetos::nroSigTerceto();EstructuraTercetos::addTerceto($2,$1,$3);}
         ;

expression: expression'+'termino {
                                    string op, tipo; //Aca se almacena el operando a convertir en caso de ser necesario
                                    bool conversion = operar($1,$3,"+",op,tipo);
                                    $$ = EstructuraTercetos::nroSigTerceto();
                                    if (!conversion){
                                        EstructuraTercetos::addTerceto("+",$1,$3,tipo);
                                    } else if (op == "op1") {
                                        EstructuraTercetos::addTerceto("+",EstructuraTercetos::nroActualTerceto(),$3,tipo);
                                    } else {
                                        EstructuraTercetos::addTerceto("+",$1,EstructuraTercetos::nroActualTerceto(),tipo);
                                    }
                                  }
          | expression'-'termino {
                                    string op, tipo; //Aca se almacena el operando a convertir en caso de ser necesario
                                    bool conversion = operar($1,$3,"-",op,tipo);
                                    $$ = EstructuraTercetos::nroSigTerceto();
                                    if (!conversion){
                                        EstructuraTercetos::addTerceto("-",$1,$3,tipo);
                                    } else if (op == "op1") {
                                        EstructuraTercetos::addTerceto("-",EstructuraTercetos::nroActualTerceto(),$3,tipo);
                                    } else {
                                        EstructuraTercetos::addTerceto("-",$1,EstructuraTercetos::nroActualTerceto(),tipo);
                                    }
                                  }
          | termino {$$ = $1;}
          | '(' expression ')' {yyerror("Expresion no puede ir entre parentesis");}
          ;

termino: termino'*'factor {
                            string op, tipo; //Aca se almacena el operando a convertir en caso de ser necesario
                            bool conversion = operar($1,$3,"*",op,tipo);
                            $$ = EstructuraTercetos::nroSigTerceto();
                            if (!conversion){
                                EstructuraTercetos::addTerceto("*",$1,$3,tipo);
                            } else if (op == "op1") {
                                EstructuraTercetos::addTerceto("*",EstructuraTercetos::nroActualTerceto(),$3,tipo);
                            } else {
                                EstructuraTercetos::addTerceto("*",$1,EstructuraTercetos::nroActualTerceto(),tipo);
                            }
                           }
       | termino'/'factor { 
                            string op, tipo; //Aca se almacena el operando a convertir en caso de ser necesario
                            bool conversion = operar($1,$3,"/",op,tipo);
                            $$ = EstructuraTercetos::nroSigTerceto();
                            if (!conversion){
                                EstructuraTercetos::addTerceto("/",$1,$3,tipo);
                            } else if (op == "op1") {
                                EstructuraTercetos::addTerceto("/",EstructuraTercetos::nroActualTerceto(),$3,tipo);
                            } else {
                                EstructuraTercetos::addTerceto("/",$1,EstructuraTercetos::nroActualTerceto(),tipo);
                            }
                            
                           }
       | factor {$$ = $1;}
       ;

factor: nesting          {  string varNombre = "<NoExiste>";
                            ChequearDeclaracion(partEndID($1),varNombre);
                            $$ = varNombre;}
      | constant         {$$ = $1;}
      | nesting LESSLESS {string varNombre = "<NoExiste>";
                          ChequearDeclaracion(partEndID($1),varNombre);
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

bool asignar(string izq, string der, string & tipo){
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

bool operar(string op1, string op2, string operador, string & opAConvertir, string & tipo){
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

void setearTipos(string tipo, string listVariable){
    string var;
    std::istringstream variableStream(listVariable);  // Asegúrate de inicializar el istringstream
    while (getline(variableStream, var, '&')) {
        TablaDeSimbolos::setTipo(var, tipo);
    }
}

bool ChequearDeclaracion(string var, string & nomEncontrada){
    string ambito=Ambito::get();
    bool final = false;
    bool encontrada = false;
    while(! final && ! encontrada){
        if (TablaDeSimbolos::tipoAsignado(var+ambito)){
            nomEncontrada = var+ambito;
            encontrada = true;
        }else{
            if (ambito.empty()){
                final = true;
                yyerror("Variable " + var + " NO declarada");
            }
            size_t pos = ambito.find_last_of(":");
            if (pos != string::npos) {
                ambito = ambito.substr(0, pos);
            }
        }
    }
    return encontrada;
}

bool chequearVarReDec(string var){
    string ambito=Ambito::get();
    if (TablaDeSimbolos::tipoAsignado(var+ambito)){
        yyerror("Variable " + var + " Re-declarada");
        return false;
    }
    return true;
}