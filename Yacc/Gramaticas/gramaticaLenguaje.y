%{
    #include <iostream>
    #include "../AnalisisLexico/AnalizadorLexico.h"
%}

%token IF ELSE ENDIF PRINT CLASS VOID SHORT ULONG FLOAT WHILE DO LESSLESS EQUAL NOTEQUAL GREATEREQUAL LESSEQUAL CTESHORT CTEULONG CTEFLOAT CTESTRING ID RETURN
%start program

%%

program: '{'sentenceList'}'
        | '{''}' {yywarning("Programa vacio");}
        | '{''}' error {yywarning("Programa vacio"); yyerror("Sentencias fuera del rango del programa");}
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
              | declarative {yyerror("Sentencia declarativa en lugar de una ejecutable");}
              ;

executable: ifStatement
          | whileStatement 
          | print 
          | functionCall
          | assignment
          | RETURN
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

assignment: ID '=' expression 
          | nesting '=' expression
          | nesting '=' ID'.'ID
          ;

nesting: nesting'.'ID
       | ID'.'ID
       ;

function: VOID ID'('formalParameter')''{'sentenceList'}'
        | VOID ID'('')''{'sentenceList'}'
        | ID'('formalParameter')''{'sentenceList'}' {yyerror("Falta palabra reservada void");}
        | ID'('')''{'sentenceList'}' {yyerror("Falta palabra reservada void");}
        ;

formalParameter: type ID 
               ;

functionCall: ID'(' realParameter ')' 
            | ID'('')'
            | nesting'('')'  
            ;

realParameter: expression
             ;

ifStatement: IF'('condition')''{'executableList'}'ELSE'{'executableList'}'ENDIF
           | IF'('condition')''{'executableList'}'ENDIF
           | IF'('condition'{'executableList'}'ENDIF {yyerror("Falta segundo parentesis en la condicion");}
           | IF condition')''{'executableList'}'ENDIF {yyerror("Falta primer parentesis en la condicion");}
           | IF condition '{'executableList'}'ENDIF {yyerror("Faltan  parentesis en la condicion");}
           | IF'('condition')' '{''}'ENDIF {yywarning("If vacio");}
            ;

whileStatement: WHILE'(' condition ')'DO'{' executableList '}'
              | WHILE'(' condition  DO'{' executableList '}' {yyerror("Falta segundo parentesis en la condicion");}
              | WHILE condition ')'DO'{' executableList '}' {yyerror("Falta primer parentesis en la condicion");}
              | WHILE condition DO'{' executableList '}' {yyerror("Falta parentesis en la condicion");}
              | WHILE'(' condition ')' DO'{''}' {yywarning("While vacio");}
              ;

class: CLASS ID '{'sentenceList'}'
    ;

condition: factor operatorsLogics factor
         ;

expression: expression'+'termino
          | expression'-'termino
          | termino
          | '(' expression ')' {yyerror("Expression no puede ir entre parentesis");}
          ;

termino: termino'*'factor
       | termino'/'factor 
       | factor
       ;

factor: ID
      | constant
      | ID LESSLESS
      ;

operatorsLogics: EQUAL 
               | NOTEQUAL 
               | GREATEREQUAL 
               | LESSEQUAL 
               | '<' 
               | '>'
               ;

constant: CTESHORT
        | '-'CTESHORT
        | CTEFLOAT
        | '-'CTEFLOAT
        | CTEULONG 
        ;

type: SHORT
    | ULONG
    | FLOAT
    ;

print: PRINT cadena
    ;

cadena: CTESTRING
    ;

%%

void yyerror(string menssage){
	cout << "Error Sintactico: " << menssage << endl;
}

void yywarning(string menssage){
    cout << "Warning: " << menssage << endl;
}