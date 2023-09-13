%token ID CTE_ULON ASIGN
%start programa

%%

programa : asignacion
;

asignacion : ID ASIGN expresion ';'

expresion   : expresion '+' termino
            | expresion '-' termino
            | termino
;


termino : termino '*' factor
        | termino '/' factor
        | factor
;

factor  : ID 
        | CTE_ULON
;

%%