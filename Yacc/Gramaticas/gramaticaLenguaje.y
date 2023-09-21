%{
    #include <iostream>
    #include "../AnalisisLexico/AnalizadorLexico.h"
%}

%token IF ELSE ENDIF PRINT CLASS VOID SHORT ULONG FLOAT WHILE DO LESSLESS EQUAL NOTEQUAL GREATEREQUAL LESSEQUAL CTESHORT CTEULONG CTEFLOAT CTESTRING ID RETURN
%start program

%%

program: '{'sentenceList'}'
       ;

sentenceList: sentenceList sentence
            | sentence
            ;

sentence: declarative','
        | executable','
        ;

declarative: function
           | declaration
           | class
           ;

executableList: executableList executable','
              | executable','
              ;

executable: ifStatement
          | whileStatement 
          | print 
          | functionCall
          | assignment
          | RETURN
          ;

declaration: type variableList
           ;       

assignment: ID '=' expression {cout << "Asignacion Reconocida" << endl;}
          ;

function: VOID ID'('formalParameter')''{'sentenceList'}'
        | VOID ID'('')''{'sentenceList'}'
        ;

formalParameter: type ID 
               ;


functionCall: ID '(' realParameter ')' | ID '('')'

realParameter: factor
             ;

variableList: variableList ';' ID | ID 
            ;

ifStatement: IF'('condition')''{'executableList'}'ELSE'{'executableList'}'ENDIF
           | IF'('condition')''{'executableList'}'ENDIF
            ;

whileStatement: WHILE'(' condition ')'DO'{' executableList '}'
              ;

class: CLASS ID '{'sentenceList'}'
    ;

condition: factor operatorsLogics factor
         ;

expression: expression'+'termino
          | expression'-'termino
          | termino
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