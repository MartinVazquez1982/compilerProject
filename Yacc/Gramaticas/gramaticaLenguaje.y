%{
    #include <iostream>
%}

%token IF ELSE ENDIF PRINT CLASS VOID SHORT ULONG FLOAT WHILE DO LESSLESS EQUAL NOTEQUAL GREATEREQUAL LESSEQUAL CTESHORT CTEULONG CTEFLOAT CTESTRING ID RETURN
%start program

%%

program: '{'sentenceList'}'
       ;

sentenceList: sentenceList sentence','
            | sentence','
            ;

sentence: assignment 
        | function
        | declaration 
        | ifStatement
        | whileStatement 
        | class 
        | print 
        | functionCall
        ;

declaration: type variableList
            ;       

assignment: ID '=' expression
          ;

function: VOID ID'('formalParameter')''{'functionBody'}'
        | VOID ID'('')''{'functionBody'}'
        ;

formalParameter:  type ID 
                ;
                
functionBody: sentenceList RETURN','
            | RETURN','
            // | ifStatementFunction
            // | whileStatementFunction
            ;

// ifStatementFunction: IF'('condition')''{'functionBody'}' ENDIF
//                    | IF'('condition')''{'functionBody'}'ELSE'{'sentenceList'}' ENDIF 
//                    | IF'('condition')''{'sentenceList'}'ELSE'{'functionBody'}' ENDIF 
//                    ;

// whileStatementFunction: WHILE '(' condition ')' DO '{' functionBody '}'
//                       ; 

functionCall: ID '(' realParameter ')' | ID '('')'

realParameter: factor
            ;

variableList: variableList ';' ID | ID 
            ;

ifStatement: IF'('condition')''{'sentenceList'}'ELSE'{'sentenceList'}' ENDIF
           | IF'('condition')''{'sentenceList'}' ENDIF
            ;

whileStatement: WHILE '(' condition ')' DO '{' sentenceList '}'
              ;

class: CLASS ID '{' sentenceList '}'
    ;

condition: factor operatorsLogics factor
         ;

expression:   expression'+'termino
            | expression'-'termino
            | termino
            ;

termino: termino'*'factor
       | termino'/'factor 
       | factor
       ;

factor:   ID
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