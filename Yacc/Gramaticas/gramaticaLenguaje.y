%{

#include <iostream>
#include "../AnalisisLexico/AnalizadorLexico.h"
#include "../AnalisisLexico/Headers/AccionesSemanticas.h"
#include "../TablaDeSimbolos/TablaDeSimbolos.h"
#include "../AnalisisSemantico/EstructuraTercetos.h"

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

variableDeclaration: type variableList
                   ;

objectDeclaration: ID variableList
                 ;

variableList: variableList ';' ID 
            | ID 
            ;

assignment: nesting '=' expression {yymenssage("Asignacion"); EstructuraTercetos::addTerceto("=",$1,$3);}
          ;

nesting: nesting'.'ID {$$ = $1 + "." + $3;}
       | ID {$$ = $1;}
       ;

function: VOID ID'('formalParameter')''{'functionBody '}' {yymenssage("Funcion");}
        | VOID ID'('')''{'functionBody '}' {yymenssage("Funcion");}
        ;

functionBody: sentenceList return
            | return {yywarning("Funcion vacia");} 
            ;

formalParameter: type ID 
               ;

functionCall: nesting'('')' 
            | nesting'('realParameter')' 
            ;

realParameter: expression
             ;

ifStatement: IF condition iterativeBody ELSE iterativeBody ENDIF {yymenssage("IF");}
           | IF condition iterativeBody ENDIF {yymenssage("IF");}
           | IF condition ENDIF {yywarning("If vacio");yymenssage("IF");} 
           | IF condition iterativeBody ELSE ENDIF {yywarning("Else vacio");yymenssage("IF");}
           | IF condition ELSE iterativeBody ENDIF {yywarning("If vacio");yymenssage("IF");}
           ;

whileStatement: WHILE condition DO iterativeBody {yymenssage("While");}
              | WHILE condition DO  {yywarning("While vacio");yymenssage("While");}
              ;

iterativeBody: '{' executableList '}'
            | '{' executableList return '}'
            | executable','
            | return
            | '{' '}' {yywarning("Bloque vacio");}
            ;


condition: '('comparison')'
         | '('comparison  {yyerror("Falta segundo parentesis en la condicion");}
         | comparison')'  {yyerror("Falta primer parentesis en la condicion");}
         | comparison     {yyerror("Faltan  parentesis en la condicion");}
         ;

class: CLASS ID '{'sentenceList'}' {yymenssage("Clase");}
    | CLASS ID '{'sentenceList heredity '}' {yymenssage("Clase");}
    ;

heredity: ID','
        ;

comparison: factor operatorsLogics factor {EstructuraTercetos::addTerceto($2,$1,$3);}
         ;

expression: expression'+'termino {$$ = EstructuraTercetos::nroSigTerceto(); EstructuraTercetos::addTerceto("+",$1,$3);}
          | expression'-'termino {$$ = EstructuraTercetos::nroSigTerceto(); EstructuraTercetos::addTerceto("-",$1,$3);}
          | termino {$$ = $1;}
          | '(' expression ')' {yyerror("Expresion no puede ir entre parentesis");}
          ;

termino: termino'*'factor {$$ = EstructuraTercetos::nroSigTerceto(); EstructuraTercetos::addTerceto("*",$1,$3);}
       | termino'/'factor {$$ = EstructuraTercetos::nroSigTerceto(); EstructuraTercetos::addTerceto("/",$1,$3);}
       | factor {$$ = $1;}
       ;

factor: nesting          {$$ = $1;}
      | constant         {$$ = $1;}
      | nesting LESSLESS {$$ = $1;}
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

type: SHORT
    | ULONG
    | FLOAT
    ;

print: PRINT cadena
    ;

cadena: CTESTRING
    ;

return: RETURN ','
      ;

%%

void yymenssage(string menssage){
    cout  << endl  << BLUE << "Estructura detectada: " << menssage  << RESET << endl;
}

void yyerror(string menssage){
	cout << endl  << RED << "Linea " << AccionesSemanticas::lineaInicioToken <<": " << menssage << RESET << endl;
}

void yywarning(string menssage){
    cout << endl << YELLOW << "Warning - Linea " << AccionesSemanticas::lineaInicioToken <<": " << menssage << RESET << endl;
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