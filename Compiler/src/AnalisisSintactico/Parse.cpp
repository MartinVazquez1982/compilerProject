#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.8 (Berkeley) 01/20/90";
#endif
#define YYBYACC 1
#line 2 "./Gramaticas/gramaticaLenguaje.y"

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
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

#line 27 "y.tab.c"
#define IF 257
#define ELSE 258
#define ENDIF 259
#define PRINT 260
#define CLASS 261
#define VOID 262
#define SHORT 263
#define ULONG 264
#define FLOAT 265
#define WHILE 266
#define DO 267
#define LESSLESS 268
#define EQUAL 269
#define NOTEQUAL 270
#define GREATEREQUAL 271
#define LESSEQUAL 272
#define CTESHORT 273
#define CTEULONG 274
#define CTEFLOAT 275
#define CTESTRING 276
#define ID 277
#define RETURN 278
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    0,    0,    1,    1,    2,    2,    2,    3,    3,
    3,    8,    8,    8,    8,    4,    4,    4,    4,    4,
    4,    6,    6,   15,   16,   19,   19,   18,   18,   13,
   20,   20,    5,   22,   22,   23,   23,   23,   24,   12,
   12,   26,    9,    9,    9,    9,    9,   29,   10,   10,
   30,   28,   28,   28,   28,   28,   27,   27,   27,   27,
    7,    7,    7,    7,    7,   32,   33,   31,   21,   21,
   21,   35,   35,   35,   36,   36,   36,   36,   14,   34,
   34,   34,   34,   34,   34,   37,   37,   37,   37,   37,
   37,   17,   17,   17,   11,   38,   25,
};
short yylen[] = {                                         2,
    3,    2,    1,    2,    1,    2,    2,    1,    1,    1,
    1,    3,    2,    3,    2,    1,    1,    1,    1,    1,
    1,    1,    1,    2,    2,    3,    1,    3,    1,    3,
    3,    1,    4,    5,    4,    2,    1,    1,    2,    3,
    4,    1,    6,    4,    3,    5,    5,    1,    4,    3,
    1,    3,    4,    2,    1,    2,    3,    2,    2,    1,
    4,    5,    5,    1,    6,    2,    2,    3,    3,    3,
    1,    3,    3,    1,    1,    1,    1,    3,    2,    1,
    1,    1,    1,    1,    1,    1,    2,    1,    2,    1,
    2,    1,    1,    1,    2,    1,    2,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,   92,   93,   94,   51,    0,    0,
    8,    0,    0,    5,    0,    0,    9,   10,   11,   16,
   17,   18,   19,   20,   21,   22,   23,    0,    0,    0,
    0,    0,   86,   90,   88,   32,    0,    0,   77,    0,
    0,    0,    0,    0,   74,   76,   96,   95,   66,    0,
   27,    0,    2,    0,    4,    6,    7,   29,    0,   79,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   87,
   91,   89,   80,   81,   82,   83,    0,    0,   84,   85,
    0,   48,   45,    0,    0,    0,   55,    0,    0,   59,
    0,    0,    0,    0,    1,    0,    0,   31,   40,    0,
    0,    0,    0,   37,    0,    0,    0,    0,    0,   78,
   57,    0,    0,    0,   97,   56,    0,    0,    0,   54,
   44,    0,    0,   72,   73,   35,    0,    0,   26,   28,
   41,   36,   33,   49,   67,   61,    0,    0,   15,   13,
   52,    0,    0,    0,   46,    0,   47,   39,   34,   62,
    0,   63,   14,   12,   53,   43,   65,
};
short yydgoto[] = {                                      12,
   13,   14,   15,   16,   17,   18,   19,  119,   20,   21,
   22,   23,   24,   25,   26,   27,   28,   59,   52,   29,
   41,   30,  103,  128,   87,  101,   42,   88,   89,   31,
   43,   32,  108,   81,   44,   45,   46,   48,
};
short yysindex[] = {                                     74,
   -9, -261, -257, -250,    0,    0,    0,    0, -243,   84,
    0,    0,  205,    0,   -7,    8,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -205,  -33,  -47,
   -9,  -45,    0,    0,    0,    0,   13, -179,    0,  -35,
  100, -105,   39,  -30,    0,    0,    0,    0,    0,   41,
    0,   27,    0,  102,    0,    0,    0,    0,   30,    0,
   13, -187,  -31,   55, -175,  223,   13,   57,   56,    0,
    0,    0,    0,    0,    0,    0,   13,   13,    0,    0,
   13,    0,    0,   67,  233,   68,    0, -202,  -64,    0,
   13,   13,   14, -176,    0, -164,    6,    0,    0,    6,
   73,   55,  -10,    0,  -64,  -21,  120,  205,   -3,    0,
    0,  -30,  -30,    6,    0,    0,   72,   76,  186,    0,
    0,  -56, -138,    0,    0,    0, -153,   88,    0,    0,
    0,    0,    0,    0,    0,    0,  130,  151,    0,    0,
    0,   81,   86,    7,    0, -128,    0,    0,    0,    0,
  176,    0,    0,    0,    0,    0,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,  -11,    0,
    0,    0,  133,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   90,    0,    0,    0,    0,    0,    0,    0,  -41,
    0,    0,  -91,  -19,    0,    0,    0,    0,    0,    0,
    0,   92,    0,    0,    0,    0,    0,    0,   93,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -78,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   94,    0,    0,   98,
    0,   15,    0,    0,   97,  -11,    0,    0,    0,    0,
    0,    3,   25,   47,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
   -2,   20,  -80,  -12,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  444,    0,    0,   49,    0,    0,  471,
   42,    0,    0,    0,  -48,    0,  113,  -14,   59,    0,
  112,    0,   43,    0,  -17,   -8,    0,    0,
};
#define YYTABLESIZE 563
short yytable[] = {                                      75,
   75,   75,   75,   75,  117,   75,   63,   54,   67,   99,
   62,   91,   62,   38,   47,  104,   92,   85,   75,   49,
   75,   71,  135,   71,   71,   71,   50,   61,   32,   86,
   37,   60,   55,   51,   32,   38,   56,  110,  142,   77,
   71,   78,   71,   69,   58,   69,   69,   69,   77,   32,
   78,   57,   67,  132,  126,   82,  121,   38,   85,  112,
  113,  102,   69,  107,   69,   70,   85,   70,   70,   70,
  144,   58,  118,   55,  123,   64,   86,   66,   68,   90,
   93,   75,  124,  125,   70,   94,   70,   68,   96,   98,
  134,  105,   86,   70,   71,   72,  111,  110,   11,   77,
  129,   78,   97,   71,  100,  138,  143,  146,  109,   86,
  115,  120,  130,  131,  133,  139,   79,   11,   80,  140,
  147,   55,  114,  148,  153,   69,   55,   11,  149,  154,
  156,  155,    3,   64,  151,   25,   24,   30,   42,   38,
   50,  127,   77,   65,   78,   11,  122,   70,   69,  137,
    0,    1,   82,   83,    2,    0,    0,   55,    0,   79,
    8,   80,    0,   11,    0,   60,   60,   60,   60,   68,
   55,   36,   84,   11,   60,   60,    0,    0,   58,   58,
   58,   58,    0,    0,    0,   60,   60,   58,   58,    0,
    0,    0,    1,    0,   11,    2,   10,    0,   58,   58,
    1,    8,  145,    2,    0,    0,    0,    0,   53,    8,
    0,    0,   36,   84,    0,   75,   75,   75,   75,   11,
   36,   84,    0,    0,   75,   75,   95,   75,   75,   75,
   75,    0,   60,    0,   60,   75,   75,   71,   71,   71,
   71,   33,   34,   35,  136,   36,   71,   71,   11,   71,
   71,   71,   71,    0,  150,   51,   32,   71,   71,   69,
   69,   69,   69,   33,   34,   35,   11,   36,   69,   69,
    0,   69,   69,   69,   69,  152,    5,    6,    7,   69,
   69,   70,   70,   70,   70,   33,   34,   35,    0,   36,
   70,   70,    0,   70,   70,   70,   70,    0,    0,    0,
  157,   70,   70,   68,   68,   68,   68,    0,    0,    0,
  141,    1,   68,   68,    2,    3,    4,    5,    6,    7,
    8,    0,    0,   68,   68,   73,   74,   75,   76,    0,
    1,    9,   84,    2,    3,    4,    5,    6,    7,    8,
    1,    0,    0,    2,    3,    4,    5,    6,    7,    8,
    9,    0,    0,    0,    0,    0,    0,  116,    1,    0,
    9,    2,    3,    4,    5,    6,    7,    8,   73,   74,
   75,   76,    0,    0,    0,    0,    1,    0,    9,    2,
    3,    4,    5,    6,    7,    8,    1,    0,    0,    2,
    3,    4,    5,    6,    7,    8,  106,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    9,    1,    0,    0,
    2,    3,    4,    5,    6,    7,    8,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    9,    0,    0,
    0,    0,    1,    0,    0,    2,    3,    4,    5,    6,
    7,    8,    1,    0,   39,    2,    3,    4,    5,    6,
    7,    8,    9,    0,    0,    0,    0,    0,    0,    0,
    0,    1,    9,   84,    2,    3,    4,    5,    6,    7,
    8,   40,    0,    0,   39,    0,    0,    0,    0,    1,
   39,    9,    2,    3,    4,    5,    6,    7,    8,    1,
    0,    0,    2,    3,    4,    5,    6,    7,    8,  106,
    0,   40,    0,    0,   39,    0,   39,   40,    0,    9,
   39,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   39,   39,    0,    0,   39,    0,    0,    0,    0,    0,
    0,   40,    0,   40,   39,   39,    0,   40,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   40,   40,    0,
    0,   40,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   40,   40,
};
short yycheck[] = {                                      41,
   42,   43,   44,   45,   85,   47,   40,   10,   40,   41,
   46,   42,   46,   45,  276,   64,   47,  123,   60,  277,
   62,   41,   44,   43,   44,   45,  277,   61,   40,   42,
   40,  123,   13,  277,   46,   45,   44,   41,  119,   43,
   60,   45,   62,   41,  123,   43,   44,   45,   43,   61,
   45,   44,   40,  102,   41,  258,  259,   45,  123,   77,
   78,   64,   60,   66,   62,   41,  123,   43,   44,   45,
  119,  277,   85,   54,   89,  123,   89,  123,   37,   41,
   40,  123,   91,   92,   60,   59,   62,   41,   59,  277,
  105,  267,  105,  273,  274,  275,   41,   41,   44,   43,
  277,   45,   61,  123,   63,  108,  119,  122,   67,  122,
   44,   44,  277,   41,  125,   44,   60,   44,   62,   44,
  259,  102,   81,  277,   44,  123,  107,   44,   41,   44,
  259,  125,    0,   44,  137,   44,   44,   44,   41,  125,
   44,   93,   43,   31,   45,   44,   88,  123,   37,  107,
   -1,  257,  258,  259,  260,   -1,   -1,  138,   -1,   60,
  266,   62,   -1,   44,   -1,  257,  258,  259,  260,  123,
  151,  277,  278,   44,  266,  267,   -1,   -1,  257,  258,
  259,  260,   -1,   -1,   -1,  277,  278,  266,  267,   -1,
   -1,   -1,  257,   -1,   44,  260,  123,   -1,  277,  278,
  257,  266,  259,  260,   -1,   -1,   -1,   -1,  125,  266,
   -1,   -1,  277,  278,   -1,  257,  258,  259,  260,   44,
  277,  278,   -1,   -1,  266,  267,  125,  269,  270,  271,
  272,   -1,  268,   -1,  268,  277,  278,  257,  258,  259,
  260,  273,  274,  275,  125,  277,  266,  267,   44,  269,
  270,  271,  272,   -1,  125,  277,  268,  277,  278,  257,
  258,  259,  260,  273,  274,  275,   44,  277,  266,  267,
   -1,  269,  270,  271,  272,  125,  263,  264,  265,  277,
  278,  257,  258,  259,  260,  273,  274,  275,   -1,  277,
  266,  267,   -1,  269,  270,  271,  272,   -1,   -1,   -1,
  125,  277,  278,  257,  258,  259,  260,   -1,   -1,   -1,
  125,  257,  266,  267,  260,  261,  262,  263,  264,  265,
  266,   -1,   -1,  277,  278,  269,  270,  271,  272,   -1,
  257,  277,  278,  260,  261,  262,  263,  264,  265,  266,
  257,   -1,   -1,  260,  261,  262,  263,  264,  265,  266,
  277,   -1,   -1,   -1,   -1,   -1,   -1,  125,  257,   -1,
  277,  260,  261,  262,  263,  264,  265,  266,  269,  270,
  271,  272,   -1,   -1,   -1,   -1,  257,   -1,  277,  260,
  261,  262,  263,  264,  265,  266,  257,   -1,   -1,  260,
  261,  262,  263,  264,  265,  266,  277,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  277,  257,   -1,   -1,
  260,  261,  262,  263,  264,  265,  266,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  277,   -1,   -1,
   -1,   -1,  257,   -1,   -1,  260,  261,  262,  263,  264,
  265,  266,  257,   -1,    1,  260,  261,  262,  263,  264,
  265,  266,  277,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  257,  277,  278,  260,  261,  262,  263,  264,  265,
  266,    1,   -1,   -1,   31,   -1,   -1,   -1,   -1,  257,
   37,  277,  260,  261,  262,  263,  264,  265,  266,  257,
   -1,   -1,  260,  261,  262,  263,  264,  265,  266,  277,
   -1,   31,   -1,   -1,   61,   -1,   63,   37,   -1,  277,
   67,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   77,   78,   -1,   -1,   81,   -1,   -1,   -1,   -1,   -1,
   -1,   61,   -1,   63,   91,   92,   -1,   67,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   77,   78,   -1,
   -1,   81,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   91,   92,
};
#define YYFINAL 12
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 278
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'","'.'","'/'",0,0,0,0,0,0,0,0,0,0,
0,"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,"IF","ELSE","ENDIF","PRINT","CLASS","VOID","SHORT",
"ULONG","FLOAT","WHILE","DO","LESSLESS","EQUAL","NOTEQUAL","GREATEREQUAL",
"LESSEQUAL","CTESHORT","CTEULONG","CTEFLOAT","CTESTRING","ID","RETURN",
};
char *yyrule[] = {
"$accept : program",
"program : '{' sentenceList '}'",
"program : '{' '}'",
"program : sentenceList",
"sentenceList : sentenceList sentence",
"sentenceList : sentence",
"sentence : declarative ','",
"sentence : executable ','",
"sentence : ','",
"declarative : function",
"declarative : declaration",
"declarative : class",
"executableList : executableList executable ','",
"executableList : executable ','",
"executableList : executableList declarative ','",
"executableList : declarative ','",
"executable : ifStatement",
"executable : whileStatement",
"executable : print",
"executable : functionCall",
"executable : assignment",
"executable : lessless",
"declaration : variableDeclaration",
"declaration : objectDeclaration",
"variableDeclaration : type variableList",
"objectDeclaration : ID objectList",
"objectList : objectList ';' ID",
"objectList : ID",
"variableList : variableList ';' ID",
"variableList : ID",
"assignment : nesting '=' expression",
"nesting : nesting '.' ID",
"nesting : ID",
"function : functionHeader '{' functionBody '}'",
"functionHeader : VOID ID '(' formalParameter ')'",
"functionHeader : VOID ID '(' ')'",
"functionBody : sentenceList return",
"functionBody : return",
"functionBody : sentenceList",
"formalParameter : type ID",
"functionCall : nesting '(' ')'",
"functionCall : nesting '(' realParameter ')'",
"realParameter : expression",
"ifStatement : IF condition iterativeBody else iterativeBody ENDIF",
"ifStatement : IF condition iterativeBody ENDIF",
"ifStatement : IF condition ENDIF",
"ifStatement : IF condition iterativeBody else ENDIF",
"ifStatement : IF condition else iterativeBody ENDIF",
"else : ELSE",
"whileStatement : while condition DO iterativeBody",
"whileStatement : while condition DO",
"while : WHILE",
"iterativeBody : '{' executableList '}'",
"iterativeBody : '{' executableList return '}'",
"iterativeBody : executable ','",
"iterativeBody : return",
"iterativeBody : '{' '}'",
"condition : '(' comparison ')'",
"condition : '(' comparison",
"condition : comparison ')'",
"condition : comparison",
"class : classHeader '{' sentenceList '}'",
"class : classHeader '{' sentenceList heredity '}'",
"class : classHeader '{' heredity sentenceList '}'",
"class : classHeader",
"class : classHeader '{' sentenceList heredity sentenceList '}'",
"classHeader : CLASS ID",
"heredity : ID ','",
"comparison : expression operatorsLogics expression",
"expression : expression '+' termino",
"expression : expression '-' termino",
"expression : termino",
"termino : termino '*' factor",
"termino : termino '/' factor",
"termino : factor",
"factor : nesting",
"factor : constant",
"factor : lessless",
"factor : '(' expression ')'",
"lessless : nesting LESSLESS",
"operatorsLogics : EQUAL",
"operatorsLogics : NOTEQUAL",
"operatorsLogics : GREATEREQUAL",
"operatorsLogics : LESSEQUAL",
"operatorsLogics : '<'",
"operatorsLogics : '>'",
"constant : CTESHORT",
"constant : '-' CTESHORT",
"constant : CTEFLOAT",
"constant : '-' CTEFLOAT",
"constant : CTEULONG",
"constant : '-' CTEULONG",
"type : SHORT",
"type : ULONG",
"type : FLOAT",
"print : PRINT cadena",
"cadena : CTESTRING",
"return : RETURN ','",
};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#define yyclearin (yychar=(-1))
#define yyerrok (yyerrflag=0)
#ifdef YYSTACKSIZE
#ifndef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#endif
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH 500
#endif
#endif
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
short yyss[YYSTACKSIZE];
YYSTYPE yyvs[YYSTACKSIZE];
#define yystacksize YYSTACKSIZE
#line 558 "./Gramaticas/gramaticaLenguaje.y"

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
    if (tipoIzq != "REVISAR"){
        string valido = Conversion::asignacion(tipoIzq,tipoDer);
        tipo = tipoIzq;
        if (valido == "ERROR" ){
            if (tipoDer == "REVISAR"){
                yyerror("No es posible asignarle un atributo predeclarado sin tipo a una variable");          
            }else{
                yyerror("No es posible asignarle a un "+tipoIzq+" un "+tipoDer);
        }
        }else if (tipoIzq != tipoDer){
                string conversion = string(1,tipoDer[0])+"to"+string(1,tipoIzq[0]); 
                EstructuraTercetos::addTerceto(conversion,tercetoDer,"",tipoIzq);
                return true;
        }
    } else {
        TablaDeSimbolos::setTipo(atrIzq,tipoDer);
        tipo = tipoDer;
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
    if (valido == "ERROR" ){
        if (tipoOp1 == "REVISAR" || tipoOp2 == "REVISAR"){
            yyerror("No es posible realizar operaciones con atributos predeclarados sin tipo");          
        }else{
            yyerror("No es posible operar entre un "+tipoOp1+" y un "+tipoOp2);
        }
        tipo = " ";
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
    } else {
        tipo = tipoOp1;
    }
    return false;
}

// ============================== Cargar tipos Lista de variables ==============================

void setearTipos(string tipo, string listVariable){
    string var;
    std::istringstream variableStream(listVariable);  // Asegúrate de inicializar el istringstream
    while (getline(variableStream, var, '&')) {
        if (TablaDeSimbolos::getTipo(var) == " " || TablaDeSimbolos::getTipo(var) == "REVISAR"){
            TablaDeSimbolos::setTipo(var, tipo);
        } else if(TablaDeSimbolos::getTipo(var) != tipo){
            yyerror("Tipo detectado en inferencia no coincide con su declaracion Atributo" + var);
        }
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

void listaHerencia(string clase, vector<string> & lista){
    TablaDeSimbolos::inic();
    while (! TablaDeSimbolos::fin()){
        string clave = TablaDeSimbolos::getClave();
        string hereda=TablaDeSimbolos::getHerencia(clave);
        if (hereda==clase){
            lista.push_back(clave);
        }
        TablaDeSimbolos::avanzar();
    }
    if (!lista.empty()){
        TablaDeSimbolos::inic();
        while (! TablaDeSimbolos::fin()){
            string clave = TablaDeSimbolos::getClave();
            string hereda=TablaDeSimbolos::getHerencia(clave);
            auto it = find(lista.begin(), lista.end(), hereda);
            if (it!=lista.end()){
                lista.push_back(clave);
            }
            TablaDeSimbolos::avanzar();
        }
    }
}

void cheqRedecMetForward(string clasePadre,vector<string> clases, string metodo){
    for (string clase:clases){
        string uso = TablaDeSimbolos::usoAsignado(metodo+"-"+clase);
        if (uso == "Metodo"){
            yyerror("No es posible en la clase "+clase+" sobreescribir el metodo "+metodo+" de la clase "+clasePadre+" de la cual hereda");
        }
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

void ChequeoForwDecl(string atrMet, string clase, bool esAtributo, string & nomEncontrada, bool & encontrada, string & nombAtributo){
    string atr = sigID(atrMet);
    if (atrMet.empty()){ //Si no esta vacio entonces: error
        string uso = TablaDeSimbolos::usoAsignado(atr+"-"+clase);
		if (esAtributo){
			if(uso != "Metodo"){
				TablaDeSimbolos::add(atr+"-"+clase, "", "REVISAR", "Atr"); //REVISAR TIPO DE ATRIBUTOS
				TablaDeSimbolos::setClass(atr+"-"+clase,clase);
                nomEncontrada = atr+"."+nomEncontrada;
                nombAtributo = atr+"-"+clase;
                encontrada = true;
				TablaDeSimbolos::del(atr);
				TablaDeSimbolos::inicForwDecl(atr+"-"+clase);
			}else{
				yyerror("La clase no puede tener atributos y metodos con el mismo nombre");
			}
		}else{
			if(uso != "Atr"){
				TablaDeSimbolos::add(atr+"-"+clase, " ", " ", "Metodo");
				TablaDeSimbolos::setClass(atr+"-"+clase,clase);
                nomEncontrada = atr+"-"+clase;
                encontrada = true;
				TablaDeSimbolos::del(atr);
				TablaDeSimbolos::inicForwDecl(atr+"-"+clase);
			}else{
				yyerror("La clase no puede tener atributos y metodos con el mismo nombre");
			}
		}
    }else{
        yyerror("No es posible que una clase incompleta herede de otra clase o tenga un atributo de tipo objeto previo a su declaracion completa");
    }
}

bool ChequearDeclObjeto(string obj, string & nomEncontrada, string & nomAtributo, bool esAtributo = true){
    string check = sigID(obj);
    TablaDeSimbolos::del(check);
    bool encontrada = false;
    bool final = ! ChequearDeclaracion(check, nomEncontrada, "Obj");
    string antCheck = TablaDeSimbolos::getTipo(nomEncontrada)+":main"; // Ya es una clase con forwad declaration
    bool hayForward = TablaDeSimbolos::getForwDecl(antCheck) == 0;
    while (! final && ! encontrada && ! hayForward){
        check = sigID(obj);
        TablaDeSimbolos::del(check);
        if (TablaDeSimbolos::usoAsignado(check+":main") == "Clase"){
            if (TablaDeSimbolos::getForwDecl(check+":main") == 0) {
                nomEncontrada = check + "." + nomEncontrada;
                antCheck = check;
                hayForward = true;
            } else {
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
            }
        } else if (TablaDeSimbolos::usoAsignado(check+"-"+antCheck) == "Atr"){
            string tipo = TablaDeSimbolos::getTipo(check+"-"+antCheck);
        	nomEncontrada = check + "." + nomEncontrada;
            if (tipo != "SHORT" && tipo != "ULONG" && tipo != "FLOAT"){
                antCheck = tipo+":main";
                if (obj.length() == 0){
                    yyerror("Se debe operar con tipos primitivos | SHORT - ULONG - FLOAT"); // Intentar usar un objeto al final de la cadena (Debe encontrar un primitivo)
                    final = true;
                }
            } else {
                if (esAtributo){
                    if (obj.length() == 0){
                        nomAtributo = check+"-"+antCheck;
                        encontrada = true;
                    }
                } else {
                    yyerror("Uso no valido de atributo en el llamado a metodo"); //Se quiere llamar ATR de tipo primitivo como metodo
                    final = true;
                }
            }
        }else if (TablaDeSimbolos::usoAsignado(check+"-"+antCheck) == "Metodo"){
            if (esAtributo){
                yyerror("Uso no valido de atributo en la invocacion a metodo"); //Se quiere utilizar un metodo como si fuera un atributo
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
    if (hayForward) {
        ChequeoForwDecl(obj, antCheck, esAtributo, nomEncontrada, encontrada, nomAtributo);
    }
    return encontrada;
}

// ============================== Chequeo Re declaradas ==============================

bool noReDeclarada(string decl, string usoOriginal){
    string ambito=Ambito::get();
    string uso = TablaDeSimbolos::usoAsignado(decl+ambito);
    if (TablaDeSimbolos::getForwDecl(decl+ambito) != 0){
        if (uso == "Var" || uso == "Funcion" || uso == "Obj" || uso == "Clase" && usoOriginal != "Clase" || uso == "Atr" || uso == "Metodo"){
                yyerror(uso + " " + decl + " se encuentra re-declarada como " + usoOriginal);
                return false;
        } else if (uso == "Clase" && usoOriginal == "Clase" ){
            if (TablaDeSimbolos::getForwDecl(decl+ambito) == 1){
                yyerror(uso + " " + decl + " se encuentra re-declarada como " + usoOriginal);
            }   
            return false;
        }
    }
    return true;
}

// ============================== Sobrescritura de metodos ==============================

void ChequearSobrescritura(string clase, string herencia, bool forward, vector<string> clasesForward){
    string metodoActual, uso;
    if (!(herencia == " ")){
        string herAbuelo = TablaDeSimbolos::getHerencia(herencia);
        while (InsideClass::moreMethods()){
            metodoActual = InsideClass::getMethod();
            uso = TablaDeSimbolos::usoAsignado(metodoActual+"-"+herencia);
            if (uso == "Metodo"){
                yyerror("No es posible en la clase "+clase+" sobreescribir el metodo "+metodoActual+" de la clase "+herencia+" de la cual hereda");
            }
            if (herAbuelo != " "){
                uso = TablaDeSimbolos::usoAsignado(metodoActual+"-"+herAbuelo);
                if (uso == "Metodo"){
                    yyerror("No es posible en la clase "+clase+" sobreescribir el metodo "+metodoActual+" de la clase "+herAbuelo+" de la cual hereda");
                }
            }
            if (forward){
                cheqRedecMetForward(clase, clasesForward, metodoActual);
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
    TablaDeSimbolos::inic();
    while (! TablaDeSimbolos::fin()){
        string clave = TablaDeSimbolos::getClave();
        if (TablaDeSimbolos::getForwDecl(clave)==0){
            string uso=TablaDeSimbolos::usoAsignado(clave);
            if (uso=="Atr"){
                yyerror("Atributo "+clave+" no finalizada su declaracion");
            }else{
                if (uso=="Metodo"){
                    yyerror("Metodo "+clave+" no finalizado su declaracion");
                }else if (uso=="Clase"){
                    yyerror("Clase "+clave+" no finalizada su declaracion");
                }
            }
        }
        TablaDeSimbolos::avanzar();
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
    if ((InsideClass::insideClass()) && (!InsideClass::insideMethod())){ //Dentro de una clase pero no dentro de un metodo
        if (declarado == InsideClass::getClassSinMain()){
            yyerror("El nombre del atributo "+declarado+" es igual al nombre de la clase");
        }else{ //El atributo a declarar no tiene el nombre de la clase
            bool hayForward = TablaDeSimbolos::getForwDecl(InsideClass::getClass()) == 0;
            if (! hayForward || ! TablaDeSimbolos::existeClave(declarado+"-"+InsideClass::getClass())){
                if (noReDeclarada(declarado+"-"+InsideClass::getClassSinMain(), "Atr")){
                    key = TablaDeSimbolos::changeKeyClass(declarado,InsideClass::getClass());
                    TablaDeSimbolos::setUso(key, "Atr");
                    TablaDeSimbolos::setClass(key,InsideClass::getClass());
                    TablaDeSimbolos::forwDeclComp(key);
                }
            }else{
                if (noReDeclarada(declarado+"-"+InsideClass::getClassSinMain(), "Atr")){
                    TablaDeSimbolos::forwDeclComp(declarado+"-"+InsideClass::getClass());
                    TablaDeSimbolos::del(declarado);
                    key=declarado+"-"+InsideClass::getClass();
                }
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
        yyerror("Funcion " + function + " tiene el mismo nombre que el parametro formal");
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

// =========================== Carga de PF en Tercetos ===========================

void revisarConversion(string pila, int nroTer, string pf){
    string op = EstructuraTercetos::getPrimerOperando(pila, nroTer);
    string tipoPF = TablaDeSimbolos::getTipo(pf);
    string tipoPR;
    if (esObjeto(op)){
        tipoPR = TablaDeSimbolos::getTipo(EstructuraTercetos::getSegundoOperando(pila, nroTer));
    } else {
        tipoPR = TablaDeSimbolos::getTipo(op);
    }
    string valido = Conversion::asignacion(tipoPF,tipoPR);
    if (valido == "ERROR" ){
        if (tipoPR == "REVISAR"){
            yyerror("No es posible asignarle un atributos predeclarado sin tipo a una variable");          
        }else{
            yyerror("No es posible asignarle a un "+tipoPF+" un "+tipoPR);
        }
    } else if (tipoPF != tipoPR){
        string conversion = string(1,tipoPR[0])+"to"+string(1,tipoPF[0]);
        EstructuraTercetos::setOperador(pila, nroTer, conversion);
        EstructuraTercetos::setOperando2(pila, nroTer+1,"["+to_string(nroTer)+"]");
    }
}

void cargarTercetosPF(string metodo, string pf){
    InsideClass::inicTerVacios();
    while(! InsideClass::finTerVacios()){
        if (InsideClass::getTerVacio().metodo == metodo){
            string nroTerceto = InsideClass::getTerVacio().nroTerceto;
            string pilaTerceto = InsideClass::getTerVacio().pilaTerceto;
            nroTerceto.erase(0, 1);
            nroTerceto.erase(nroTerceto.size() - 1, 1);
            revisarConversion(pilaTerceto, stoi(nroTerceto), pf);
            EstructuraTercetos::cargarPF(pilaTerceto, stoi(nroTerceto)+1, pf, TablaDeSimbolos::getTipo(pf));
            InsideClass::delTerVacios();
        } else {
            InsideClass::avanzarTerVacios();
        }
    }
}
#line 1094 "y.tab.c"
#define YYABORT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse()
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register char *yys;
    extern char *getenv();

    if (yys = getenv("YYDEBUG"))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if (yyn = yydefred[yystate]) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("yydebug: state %d, reading %d (%s)\n", yystate,
                    yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("yydebug: state %d, shifting to state %d (%s)\n",
                    yystate, yytable[yyn],yyrule[yyn]);
#endif
        if (yyssp >= yyss + yystacksize - 1)
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
#ifdef lint
    goto yynewerror;
#endif
yynewerror:
    yyerror("syntax error");
#ifdef lint
    goto yyerrlab;
#endif
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("yydebug: state %d, error recovery shifting\
 to state %d\n", *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yyss + yystacksize - 1)
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("yydebug: error recovery discarding state %d\n",
                            *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("yydebug: state %d, error recovery discards token %d (%s)\n",
                    yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("yydebug: state %d, reducing by rule %d (%s)\n",
                yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 1:
#line 29 "./Gramaticas/gramaticaLenguaje.y"
{ChequearForwardDeclarations();
                             list<string> varSinUsar = VarSinInic::listVarTop();
                             for (const string& var : varSinUsar){
                                yywarning("Variable/Objeto " + var + " Sin asignacion de un valor en el main");
                             }
                            }
break;
case 2:
#line 35 "./Gramaticas/gramaticaLenguaje.y"
{yywarning("Programa vacio");}
break;
case 3:
#line 36 "./Gramaticas/gramaticaLenguaje.y"
{yyerror("Falta llaves delimitadores de programa");}
break;
case 8:
#line 45 "./Gramaticas/gramaticaLenguaje.y"
{yywarning("Sentencia vacia");}
break;
case 14:
#line 55 "./Gramaticas/gramaticaLenguaje.y"
{yyerror("Sentencia declarativa en lugar de una ejecutable");}
break;
case 15:
#line 56 "./Gramaticas/gramaticaLenguaje.y"
{yyerror("Sentencia declarativa en lugar de una ejecutable");}
break;
case 21:
#line 64 "./Gramaticas/gramaticaLenguaje.y"
{
                        if (esObjeto(yyvsp[0])){
                            string atributo, objeto;
                            dividirStringPorArroba(yyvsp[0],objeto, atributo);
                            crearTerLessLessObjeto(obtenerUltimaParte(objeto, '#'),atributo);
                        }else{
                            crearTerLessLess(obtenerUltimaParte(yyvsp[0], '#'));
                        }
                    }
break;
case 24:
#line 78 "./Gramaticas/gramaticaLenguaje.y"
{setearTipos(yyvsp[-1],yyvsp[0]);}
break;
case 25:
#line 81 "./Gramaticas/gramaticaLenguaje.y"
{  
                                    string name;
                                    ChequearDeclaracion(yyvsp[-1], name, "Clase");
                                    setearTipos(yyvsp[-1],yyvsp[0]);
                                    TablaDeSimbolos::del(yyvsp[-1]); /*El ID al declarar un objeto se agrega automaticamente por error en el lexico*/
                                   }
break;
case 26:
#line 89 "./Gramaticas/gramaticaLenguaje.y"
{ yyval = stepsDeclVarAndObj(yyvsp[0], "Obj", yyvsp[-2]);}
break;
case 27:
#line 90 "./Gramaticas/gramaticaLenguaje.y"
{yyval = stepsDeclVarAndObj(yyvsp[0], "Obj");}
break;
case 28:
#line 93 "./Gramaticas/gramaticaLenguaje.y"
{yyval = stepsDeclVarAndObj(yyvsp[0], "Var", yyvsp[-2]);}
break;
case 29:
#line 94 "./Gramaticas/gramaticaLenguaje.y"
{ yyval = stepsDeclVarAndObj(yyvsp[0], "Var");}
break;
case 30:
#line 97 "./Gramaticas/gramaticaLenguaje.y"
{yymenssage("Asignacion");
                                    string nomEncontrada, nomAtributo;
                                    if (esObjeto(yyvsp[-2]) && (ChequearDeclObjeto(yyvsp[-2],nomEncontrada, nomAtributo)) || !esObjeto(yyvsp[-2]) && (ChequearDeclaracion(yyvsp[-2],nomEncontrada, "Var",true))){
                                        string tipo;
                                        TablaDeSimbolos::del(yyvsp[-2]);
                                        bool conversion;
                                        string op = yyvsp[0];
                                        bool lessLessOp1 = revisarLessLess(op);
                                        if (esObjeto(yyvsp[-2])){
                                            conversion = converAsig(nomAtributo,op,tipo);
                                            VarSinInic::delVar(sigID(yyvsp[-2])+Ambito::get());
                                        } else {
                                            conversion = converAsig(nomEncontrada,op,tipo);
                                            VarSinInic::delVar(nomEncontrada);
                                        }
                                        if (!conversion){
                                            if (yyvsp[0][0] == '['){
                                                EstructuraTercetos::addTerceto("=",nomEncontrada,op,tipo);
                                            } else {
                                                if (esObjeto(yyvsp[0])){
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
                                        if (esObjeto(yyvsp[0])){
                                                    string atributo, objeto;
                                                    dividirStringPorArroba(op,objeto, atributo);
                                                    if (lessLessOp1) crearTerLessLessObjeto(objeto,atributo);
                                        }else{
                                            if (lessLessOp1) crearTerLessLess(op);
                                        }
                                    }
                                    }
break;
case 31:
#line 138 "./Gramaticas/gramaticaLenguaje.y"
{yyval = yyvsp[-2] + "." + yyvsp[0];}
break;
case 32:
#line 139 "./Gramaticas/gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 33:
#line 142 "./Gramaticas/gramaticaLenguaje.y"
{stepsFunctionOrMethod();}
break;
case 34:
#line 145 "./Gramaticas/gramaticaLenguaje.y"
{ if (InsideClass::insideClass()){
                                                    string key; 
                                                    if ((InsideClass::insideMethod())){ /*Se trata de una funcion dentro de un metodo*/
                                                        if (!(InsideClass::insideFuncionMethod())){
                                                            if (noReDeclarada(yyvsp[-3], "Funcion") && chequearNomPF(yyvsp[-3],yyvsp[-1])) {
                                                                VarSinInic::addTop(); 
                                                                key = TablaDeSimbolos::changeKey(yyvsp[-3]);
                                                                TablaDeSimbolos::setUso(key, "Funcion");
                                                                Ambito::add(yyvsp[-3]);
                                                                InsideClass::insideFuncionMethod(true);
                                                                TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                                                string keyFormal = TablaDeSimbolos::changeKey(yyvsp[-1]);
                                                                TablaDeSimbolos::setParametroFormal(key,keyFormal);
                                                            }
                                                        }else{
                                                            yyerror("No es posible anidar otra funcion, excede los niveles permitidos");
                                                        }
                                                    }else{ /*Se trata de un metodo*/
                                                        if (yyvsp[-3] == InsideClass::getClassSinMain()){
                                                            yyerror("No es posible declarar un metodo con el mismo nombre que el de la clase a la que pertenece");
                                                        }else{
                                                            bool hayForward = TablaDeSimbolos::getForwDecl(InsideClass::getClass()) == 0;
                                                            if (! hayForward || ! TablaDeSimbolos::existeClave(yyvsp[-3]+"-"+InsideClass::getClass())){
                                                                if (noReDeclarada(yyvsp[-3]+"-"+InsideClass::getClassSinMain(), "Metodo") && chequearNomPF(yyvsp[-3],yyvsp[-1])) {
                                                                    InsideClass::addMethod(yyvsp[-3]);
                                                                    VarSinInic::addTop();
                                                                    key = TablaDeSimbolos::changeKeyClass(yyvsp[-3],InsideClass::getClass());
                                                                    TablaDeSimbolos::setUso(key, "Metodo");
                                                                    TablaDeSimbolos::forwDeclComp(key);
                                                                    Ambito::add(yyvsp[-3]+"-"+InsideClass::getClassSinMain());
                                                                    InsideClass::insideMethod(true);
                                                                    TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                                                    string keyFormal = TablaDeSimbolos::changeKey(yyvsp[-1]);
                                                                    TablaDeSimbolos::setParametroFormal(key,keyFormal);
                                                                }
                                                            }else{ /*Si no esta redeclarada se marca en 1 la columna de forward para ese metodo*/
                                                               if (noReDeclarada(yyvsp[-3]+"-"+InsideClass::getClassSinMain(), "Metodo") && chequearNomPF(yyvsp[-3],yyvsp[-1])){
                                                                    if (TablaDeSimbolos::getTieneParamDF(yyvsp[-3]+"-"+InsideClass::getClass()) != 2) {
                                                                        yyerror("Metodo " + yyvsp[-3] + " se ha indicado que NO tiene parametro en su primer invocacion.");
                                                                    }
                                                                    InsideClass::addMethod(yyvsp[-3]);
                                                                    VarSinInic::addTop();
                                                                    TablaDeSimbolos::del(yyvsp[-3]);
                                                                    InsideClass::insideMethod(true);
                                                                    Ambito::add(yyvsp[-3]+"-"+InsideClass::getClassSinMain());
                                                                    TablaDeSimbolos::forwDeclComp(yyvsp[-3]+"-"+InsideClass::getClass());
                                                                    string keyFormal = TablaDeSimbolos::changeKey(yyvsp[-1]);
                                                                    TablaDeSimbolos::setParametroFormal(yyvsp[-3]+"-"+InsideClass::getClass(),keyFormal);
                                                                    cargarTercetosPF(yyvsp[-3]+"-"+InsideClass::getClass(),keyFormal);
                                                                } 
                                                            }     
                                                        }
                                                    }
                                                    EstructuraTercetos::setAmbito(Ambito::getTercetos()); 
                                            }else{
                                                if (noReDeclarada(yyvsp[-3], "Funcion") && chequearNomPF(yyvsp[-3],yyvsp[-1])) {
                                                    string key = TablaDeSimbolos::changeKey(yyvsp[-3]);
                                                    TablaDeSimbolos::setUso(key, "Funcion");
                                                    VarSinInic::addTop();
                                                    Ambito::add(yyvsp[-3]);
                                                    string keyFormal = TablaDeSimbolos::changeKey(yyvsp[-1]);
                                                    TablaDeSimbolos::setParametroFormal(key,keyFormal);
                                                    EstructuraTercetos::setAmbito(Ambito::getTercetos());
                                                }
                                              }
                                            }
break;
case 35:
#line 211 "./Gramaticas/gramaticaLenguaje.y"
{if (InsideClass::insideClass()){
                                        string key; 
                                        if ((InsideClass::insideMethod())){ /*Se trata de una funcion dentro de un metodo*/
                                            if (!(InsideClass::insideFuncionMethod())){
                                                if (noReDeclarada(yyvsp[-2], "Funcion")) { 
                                                    key = TablaDeSimbolos::changeKey(yyvsp[-2]);
                                                    VarSinInic::addTop();
                                                    TablaDeSimbolos::setUso(key, "Funcion");
                                                    Ambito::add(yyvsp[-2]);
                                                    InsideClass::insideFuncionMethod(true);
                                                    TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                                }
                                            }else{
                                                yyerror("No es posible anidar otra funcion, excede los niveles permitidos");
                                            }
                                        }else{ /*Se trata de un metodo*/
                                            if (yyvsp[-2] == InsideClass::getClassSinMain()){
                                                yyerror("No es posible declarar un metodo con el mismo nombre que el de la clase a la que pertenece");
                                            }else{
                                                bool hayForward = TablaDeSimbolos::getForwDecl(InsideClass::getClass()) == 0;

                                                if (! hayForward || ! TablaDeSimbolos::existeClave(yyvsp[-2]+"-"+InsideClass::getClass())){
                                                    if (noReDeclarada(yyvsp[-2]+"-"+InsideClass::getClassSinMain(), "Metodo")) {
                                                        InsideClass::addMethod(yyvsp[-2]);
                                                        VarSinInic::addTop();
                                                        key = TablaDeSimbolos::changeKeyClass(yyvsp[-2],InsideClass::getClass());
                                                        TablaDeSimbolos::setUso(key, "Metodo");
                                                        TablaDeSimbolos::forwDeclComp(key);
                                                        Ambito::add(yyvsp[-2]+"-"+InsideClass::getClassSinMain());
                                                        InsideClass::insideMethod(true);
                                                        TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                                    }
                                                }else{ /*Si no esta redeclarada se marca en 1 la columna de forward para ese metodo*/
                                                    if (noReDeclarada(yyvsp[-2]+"-"+InsideClass::getClassSinMain(), "Metodo")){
                                                        if (TablaDeSimbolos::getTieneParamDF(yyvsp[-2]+"-"+InsideClass::getClass()) !=1) {
                                                            yyerror("Metodo " + yyvsp[-2] + " se ha indicado que tiene parametro en su primer invocacion.");
                                                        }
                                                        TablaDeSimbolos::del(yyvsp[-2]);
                                                        TablaDeSimbolos::forwDeclComp(yyvsp[-2]+"-"+InsideClass::getClass());
                                                        Ambito::add(yyvsp[-2]+"-"+InsideClass::getClassSinMain());
                                                        InsideClass::insideMethod(true);
                                                        InsideClass::addMethod(yyvsp[-2]);
                                                        VarSinInic::addTop();
                                                    } 
                                                }  
                                            }
                                        }

                                        EstructuraTercetos::setAmbito(Ambito::getTercetos());
                                }else{ 
                                        if (noReDeclarada(yyvsp[-2], "Funcion")) {
                                            string key = TablaDeSimbolos::changeKey(yyvsp[-2]);
                                            VarSinInic::addTop();
                                            TablaDeSimbolos::setUso(key, "Funcion");
                                            Ambito::add(yyvsp[-2]);
                                            EstructuraTercetos::setAmbito(Ambito::getTercetos());
                                        }
                                    }
                                }
break;
case 37:
#line 273 "./Gramaticas/gramaticaLenguaje.y"
{yywarning("Funcion vacia");}
break;
case 38:
#line 274 "./Gramaticas/gramaticaLenguaje.y"
{yyerror("Funcion sin RETURN obligatorio al final");}
break;
case 39:
#line 277 "./Gramaticas/gramaticaLenguaje.y"
{yyval = yyvsp[0]; TablaDeSimbolos::setUso(yyvsp[0], "PF"); setearTipos(yyvsp[-1],yyvsp[0]);}
break;
case 40:
#line 280 "./Gramaticas/gramaticaLenguaje.y"
{
                            string name;
                            string tipo;
                            if (esObjeto(yyvsp[-2])){
                                if (ChequearDeclObjeto(yyvsp[-2],name,tipo,false)){
                                    if (ChequearRecursion(yyvsp[-2],true) && TablaDeSimbolos::getForwDecl(name) != 0){
                                        if (!TablaDeSimbolos::tieneParametros(name)){
                                            EstructuraTercetos::addTerceto("Call",name,"");
                                        } else {
                                            yyerror("El metodo " + name + " requiere parametro");
                                        }
                                    }else if(TablaDeSimbolos::getForwDecl(name) == 0){
                                        if (TablaDeSimbolos::getTieneParamDF(name) == 2){
                                            yyerror("Funcion " + name + " primera vez utilizada con parametro");
                                        }else{
                                            if (TablaDeSimbolos::getTieneParamDF(name) == 0){
                                                TablaDeSimbolos::setTiene_parametro(name,1);
                                            }
                                            EstructuraTercetos::addTerceto("Call",name,"");
                                        }
                                    }else{
                                        yyerror("Se esta haciendo un llamado recursivo del metodo: "+yyvsp[-2]);
                                    }
                                }
                            } else {
                                if (ChequearDeclaracion(yyvsp[-2],name,"Funcion")){
                                    if (ChequearRecursion(yyvsp[-2],false)){
                                        if (!TablaDeSimbolos::tieneParametros(name)){
                                            EstructuraTercetos::addTerceto("Call",name,"");
                                        } else {
                                            yyerror("La funcion " + name + " requiere parametro");
                                        }
                                    } else{
                                        yyerror("Se esta haciendo un llamado recursivo a la funcion: "+yyvsp[-2]);
                                    }
                                }
                            }
                            TablaDeSimbolos::del(yyvsp[-2]);
                            }
break;
case 41:
#line 319 "./Gramaticas/gramaticaLenguaje.y"
{
                                            string name;
                                            string tipo;
                                            if (esObjeto(yyvsp[-3])){
                                                if (ChequearDeclObjeto(yyvsp[-3],name,tipo,false)){
                                                    if (ChequearRecursion(yyvsp[-3],true)){
                                                        string tipo;
                                                        if (TablaDeSimbolos::tieneParametros(name) && TablaDeSimbolos::getForwDecl(name) != 0){
                                                            if (converAsig(TablaDeSimbolos::getParametroFormal(name), yyvsp[-1], tipo)){
                                                                EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),EstructuraTercetos::nroActualTerceto(),tipo);
                                                            } else {
                                                                if (esObjeto(yyvsp[-1])){
                                                                        string atributo, objeto;
                                                                        dividirStringPorArroba(yyvsp[-1],objeto, atributo);
                                                                        EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),objeto,tipo);
                                                                }else{
                                                                    EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),yyvsp[-1],tipo);
                                                                }
                                                            }
                                                            EstructuraTercetos::addTerceto("Call",name,"");
                                                        }else if(TablaDeSimbolos::getForwDecl(name) == 0 ){
                                                            int nroPF = TablaDeSimbolos::getTieneParamDF(name);
                                                            if (nroPF == 1){
                                                                yyerror("Funcion " + name + " primera vez utilizada sin parametro");
                                                            } else {
                                                                if (nroPF == 0){
                                                                    TablaDeSimbolos::setTiene_parametro(name,2);
                                                                }
                                                                /* Guardar Numero*/
                                                                InsideClass::addTerVacios(name,EstructuraTercetos::nroSigTerceto(),Ambito::get());
                                                                if (esObjeto(yyvsp[-1])){
                                                                        string atributo, objeto;
                                                                        dividirStringPorArroba(yyvsp[-1],objeto, atributo);
                                                                        EstructuraTercetos::addTerceto(" ",objeto,atributo,"FLOAT");
                                                                        EstructuraTercetos::addTerceto("="," ",objeto," ");
                                                                }else{
                                                                    EstructuraTercetos::addTerceto(" ",yyvsp[-1]," ","FLOAT");
                                                                    EstructuraTercetos::addTerceto("="," ",yyvsp[-1]," ");
                                                                }
                                                                 EstructuraTercetos::addTerceto("Call",name,"");
                                                            }
                                                        }else{
                                                            yyerror("Esta funcion no acepta parametros");
                                                        }
                                                    }else{
                                                        yyerror("Se esta haciendo un llamado recursivo del metodo: "+yyvsp[-3]);
                                                    }
                                                } else {
                                                    yyerror("El metodo " + name + " NO requiere parametro");
                                                }
                                            }else{
                                                if (ChequearDeclaracion(yyvsp[-3],name,"Funcion")){
                                                    if (ChequearRecursion(yyvsp[-3],false)){
                                                        TablaDeSimbolos::del(yyvsp[-3]);
                                                        string tipo;
                                                        if (TablaDeSimbolos::tieneParametros(name)){
                                                            if (converAsig(TablaDeSimbolos::getParametroFormal(name), yyvsp[-1], tipo)) {
                                                                EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),EstructuraTercetos::nroActualTerceto(),tipo);
                                                            } else {
                                                                if (esObjeto(yyvsp[-1])){
                                                                        string atributo, objeto;
                                                                        dividirStringPorArroba(yyvsp[-1],objeto, atributo);
                                                                        EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),objeto,tipo);
                                                                }else{
                                                                    EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),yyvsp[-1],tipo);
                                                                }
                                                            }
                                                            EstructuraTercetos::addTerceto("Call",name,"");
                                                        }else{
                                                            yyerror("Esta funcion no acepta parametros");
                                                        }
                                                    }else{
                                                        yyerror("Se esta haciendo un llamado recursivo a la funcion: "+yyvsp[-3]);
                                                    }
                                                } else {
                                                    yyerror("La funcion " + name + " NO requiere parametro");
                                                }
                                                }
                                            TablaDeSimbolos::del(yyvsp[-3]);
                                         }
break;
case 43:
#line 404 "./Gramaticas/gramaticaLenguaje.y"
{yymenssage("IF");jumpEndIf();}
break;
case 44:
#line 405 "./Gramaticas/gramaticaLenguaje.y"
{yymenssage("IF");jumpEndIf();}
break;
case 45:
#line 406 "./Gramaticas/gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");jumpEndIf();}
break;
case 46:
#line 407 "./Gramaticas/gramaticaLenguaje.y"
{yywarning("Else vacio");yymenssage("IF");jumpEndIf();}
break;
case 47:
#line 408 "./Gramaticas/gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");jumpEndIf();}
break;
case 48:
#line 411 "./Gramaticas/gramaticaLenguaje.y"
{jumpEndThen();}
break;
case 49:
#line 414 "./Gramaticas/gramaticaLenguaje.y"
{yymenssage("While");jumpEndWhile();}
break;
case 50:
#line 415 "./Gramaticas/gramaticaLenguaje.y"
{yywarning("While vacio");yymenssage("While");jumpEndWhile();}
break;
case 51:
#line 418 "./Gramaticas/gramaticaLenguaje.y"
{EstructuraTercetos::apilar();EstructuraTercetos::addLabel();}
break;
case 56:
#line 425 "./Gramaticas/gramaticaLenguaje.y"
{yywarning("Bloque vacio");}
break;
case 57:
#line 428 "./Gramaticas/gramaticaLenguaje.y"
{EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",yyvsp[-1],"");}
break;
case 58:
#line 429 "./Gramaticas/gramaticaLenguaje.y"
{yyerror("Falta segundo parentesis en la condicion");EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",yyvsp[0],"");}
break;
case 59:
#line 430 "./Gramaticas/gramaticaLenguaje.y"
{yyerror("Falta primer parentesis en la condicion");EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",yyvsp[-1],"");}
break;
case 60:
#line 431 "./Gramaticas/gramaticaLenguaje.y"
{yyerror("Faltan  parentesis en la condicion");EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",yyvsp[0],"");}
break;
case 61:
#line 434 "./Gramaticas/gramaticaLenguaje.y"
{ yymenssage("Clase");
                                        string clase = InsideClass::getClass();
                                        int foward = TablaDeSimbolos::getForwDecl(clase);
										vector<string> lista;
										if (foward==0){
											listaHerencia(clase,lista);
                                            if (!lista.empty()){
                                                while (InsideClass::moreMethods()){
                                                    cheqRedecMetForward(InsideClass::getClass(), lista, InsideClass::getMethod());
                                                    InsideClass::outMethod();
                                                }
										    }
										} else {
                                            InsideClass::unstackMethods();
                                        }
                                        TablaDeSimbolos::forwDeclComp(InsideClass::getClass());
                                        InsideClass::outClass();
                                      }
break;
case 62:
#line 452 "./Gramaticas/gramaticaLenguaje.y"
{
                                                 yymenssage("Clase");
                                                 TablaDeSimbolos::setHerencia(InsideClass::getClass(),yyvsp[-1]);
                                                 if (TablaDeSimbolos::nivelHerencia(InsideClass::getClass()) > 3){
                                                    yyerror("La clase ha excedido el nivel de herencia (maximo nivel = 3)");
                                                 }
                                                 string clase = InsideClass::getClass();
                                                 int foward = TablaDeSimbolos::getForwDecl(clase);
                                                 vector<string> lista;
                                                 if (foward==0){
                                                    listaHerencia(clase,lista);
                                                 }
                                                 TablaDeSimbolos::forwDeclComp(InsideClass::getClass());
                                                 string herencia = TablaDeSimbolos::getHerencia(clase);
                                                 ChequearSobrescritura(clase,herencia,foward==0,lista);
                                                 InsideClass::outClass();
                                                 
                                                 }
break;
case 63:
#line 470 "./Gramaticas/gramaticaLenguaje.y"
{yyerror("La herencia debe ir al final de la declaracion de la clase no al principio");}
break;
case 64:
#line 471 "./Gramaticas/gramaticaLenguaje.y"
{claseSinimplementar(InsideClass::getClass());InsideClass::outClass();}
break;
case 65:
#line 472 "./Gramaticas/gramaticaLenguaje.y"
{yyerror("La herencia debe ir al final de la declaracion de la clase no entre medio");}
break;
case 66:
#line 475 "./Gramaticas/gramaticaLenguaje.y"
{ if ((!classInFunction(yyvsp[0])) && !classInClass(yyvsp[0])){
                            if (noReDeclarada(yyvsp[0], "Clase")){
                                string name = yyvsp[0]+":main";
                                if (TablaDeSimbolos::getForwDecl(name) != 0){
                                    name =  TablaDeSimbolos::changeKey(yyvsp[0]);
                                    TablaDeSimbolos::setUso(name,"Clase");
                                    TablaDeSimbolos::inicNivelHer(name);
                                } else {
                                    TablaDeSimbolos::del(yyvsp[0]);
                                }
                                InsideClass::inClass(name);
                            } else {
                                InsideClass::inClass(yyvsp[0]+Ambito::get());
                                TablaDeSimbolos::del(yyvsp[0]);
                            }
                        }
                      }
break;
case 67:
#line 494 "./Gramaticas/gramaticaLenguaje.y"
{ string name = "<NoExiste>";
                ChequearDeclaracion(yyvsp[-1],name,"Clase");
                TablaDeSimbolos::del(yyvsp[-1]);
                if (name == InsideClass::getClass()){
                    yyerror("La clase hereda de ella misma.");
                } else {
                    yyval = name;
                }
                }
break;
case 68:
#line 505 "./Gramaticas/gramaticaLenguaje.y"
{yyval = stepsOperation(yyvsp[-2], yyvsp[0], yyvsp[-1]);}
break;
case 69:
#line 508 "./Gramaticas/gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "+"); }
break;
case 70:
#line 509 "./Gramaticas/gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "-"); }
break;
case 71:
#line 510 "./Gramaticas/gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 72:
#line 513 "./Gramaticas/gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "*"); }
break;
case 73:
#line 514 "./Gramaticas/gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "/"); }
break;
case 74:
#line 515 "./Gramaticas/gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 75:
#line 518 "./Gramaticas/gramaticaLenguaje.y"
{yyval = stepsFactor(yyvsp[0]);}
break;
case 76:
#line 519 "./Gramaticas/gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 77:
#line 520 "./Gramaticas/gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 78:
#line 521 "./Gramaticas/gramaticaLenguaje.y"
{yyerror("Expresion no puede ir entre parentesis");yyval=yyvsp[-1];}
break;
case 79:
#line 524 "./Gramaticas/gramaticaLenguaje.y"
{yyval = stepsFactor(yyvsp[-1], true);}
break;
case 80:
#line 527 "./Gramaticas/gramaticaLenguaje.y"
{yyval = "==";}
break;
case 81:
#line 528 "./Gramaticas/gramaticaLenguaje.y"
{yyval = "!!";}
break;
case 82:
#line 529 "./Gramaticas/gramaticaLenguaje.y"
{yyval = ">=";}
break;
case 83:
#line 530 "./Gramaticas/gramaticaLenguaje.y"
{yyval = "<=";}
break;
case 84:
#line 531 "./Gramaticas/gramaticaLenguaje.y"
{yyval = "<";}
break;
case 85:
#line 532 "./Gramaticas/gramaticaLenguaje.y"
{yyval = ">";}
break;
case 86:
#line 535 "./Gramaticas/gramaticaLenguaje.y"
{chequearRangoSHORT(yyvsp[0]); yyval = yyvsp[0];}
break;
case 87:
#line 536 "./Gramaticas/gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = "-"+yyvsp[0];}
break;
case 88:
#line 537 "./Gramaticas/gramaticaLenguaje.y"
{TablaDeSimbolos::chequearPositivos(yyvsp[0]); yyval = yyvsp[0];}
break;
case 89:
#line 538 "./Gramaticas/gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = "-"+yyvsp[0];}
break;
case 90:
#line 539 "./Gramaticas/gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 91:
#line 540 "./Gramaticas/gramaticaLenguaje.y"
{yyerror("Una constante ULONG no puede ser negativa");}
break;
case 92:
#line 543 "./Gramaticas/gramaticaLenguaje.y"
{yyval="SHORT";}
break;
case 93:
#line 544 "./Gramaticas/gramaticaLenguaje.y"
{yyval="ULONG";}
break;
case 94:
#line 545 "./Gramaticas/gramaticaLenguaje.y"
{yyval="FLOAT";}
break;
case 95:
#line 548 "./Gramaticas/gramaticaLenguaje.y"
{EstructuraTercetos::addTerceto("Print",yyvsp[0],"");}
break;
case 97:
#line 554 "./Gramaticas/gramaticaLenguaje.y"
{EstructuraTercetos::addTerceto("Return","","");}
break;
#line 1884 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("yydebug: after reduction, shifting from state 0 to\
 state %d\n", YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("yydebug: state %d, reading %d (%s)\n",
                        YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("yydebug: after reduction, shifting from state %d \
to state %d\n", *yyssp, yystate);
#endif
    if (yyssp >= yyss + yystacksize - 1)
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
