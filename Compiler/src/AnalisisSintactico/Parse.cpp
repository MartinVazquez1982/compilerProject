#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.8 (Berkeley) 01/20/90";
#endif
#define YYBYACC 1
#line 2 ".\Gramaticas\gramaticaLenguaje.y"

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

#line 25 "y.tab.c"
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
    7,    7,    7,    7,   32,   33,   31,   21,   21,   21,
   21,   35,   35,   35,   36,   36,   36,   14,   34,   34,
   34,   34,   34,   34,   37,   37,   37,   37,   37,   37,
   17,   17,   17,   11,   38,   25,
};
short yylen[] = {                                         2,
    3,    2,    1,    2,    1,    2,    2,    1,    1,    1,
    1,    3,    2,    3,    2,    1,    1,    1,    1,    1,
    1,    1,    1,    2,    2,    3,    1,    3,    1,    3,
    3,    1,    4,    5,    4,    2,    1,    1,    2,    3,
    4,    1,    6,    4,    3,    5,    5,    1,    4,    3,
    1,    3,    4,    2,    1,    2,    3,    2,    2,    1,
    4,    5,    1,    6,    2,    2,    3,    3,    3,    1,
    3,    3,    3,    1,    1,    1,    1,    2,    1,    1,
    1,    1,    1,    1,    1,    2,    1,    2,    1,    2,
    1,    1,    1,    2,    1,    2,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,   91,   92,   93,   51,    0,    0,
    8,    0,    0,    5,    0,    0,    9,   10,   11,   16,
   17,   18,   19,   20,   21,   22,   23,    0,    0,    0,
    0,    0,   85,   89,   87,   32,    0,    0,   77,    0,
    0,    0,    0,    0,   74,   76,   95,   94,   65,    0,
   27,    0,    2,    0,    4,    6,    7,   29,    0,   78,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   86,
   90,   88,   79,   80,   81,   82,    0,    0,   83,   84,
    0,   48,   45,    0,    0,    0,   55,    0,    0,   59,
    0,    0,    0,    0,    1,    0,    0,   31,   40,    0,
    0,    0,    0,   37,    0,    0,    0,   71,   57,    0,
    0,    0,   96,   56,    0,    0,    0,   54,   44,    0,
    0,   72,   73,   35,    0,    0,   26,   28,   41,   36,
   33,   49,    0,   61,    0,   15,   13,   52,    0,    0,
    0,   46,    0,   47,   39,   34,   66,   62,    0,   14,
   12,   53,   43,   64,
};
short yydgoto[] = {                                      12,
   13,   14,   15,   16,   17,   18,   19,  117,   20,   21,
   22,   23,   24,   25,   26,   27,   28,   59,   52,   29,
   41,   30,  103,  126,   87,  101,   42,   88,   89,   31,
   43,   32,  135,   81,   44,   45,   46,   48,
};
short yysindex[] = {                                     74,
   -9, -271, -265, -262,    0,    0,    0,    0, -250,   84,
    0,    0,  161,    0,  -14,   17,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -220,  -33,  -43,
   -9,  -42,    0,    0,    0,    0,   13, -196,    0,  -35,
   29, -105,   45,    9,    0,    0,    0,    0,    0,   54,
    0,   36,    0,  102,    0,    0,    0,    0,   37,    0,
   13, -172,  -31,   55, -159,  161,   13,  100,   68,    0,
    0,    0,    0,    0,    0,    0,   53,   53,    0,    0,
   13,    0,    0,   66,  217,   67,    0, -225,  -64,    0,
   53,   53,   14, -165,    0, -164,   19,    0,    0,   19,
   73,   55,  -10,    0,  -64,  120,   -3,    0,    0,    9,
    9,   19,    0,    0,   72,   75,  183,    0,    0,  -56,
 -142,    0,    0,    0, -156,   81,    0,    0,    0,    0,
    0,    0,  -28,    0,  130,    0,    0,    0,   80,   83,
    4,    0, -134,    0,    0,    0,    0,    0,  151,    0,
    0,    0,    0,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,  -11,    0,
    0,    0,  131,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   86,    0,    0,    0,    0,    0,    0,    0,  -41,
    0,    0,  -91,  -19,    0,    0,    0,    0,    0,    0,
    0,   88,    0,    0,    0,    0,    0,    0,   89,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -78,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   90,    0,    0,   95,
    0,   12,    0,    0,   96,    0,    0,    0,    0,    3,
   25,   47,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -11,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    7,   -5,  -65,   18,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  428,    0,    0,   46,    0,    0,  435,
   39,    0,    0,    0,  -27,    0,  116,  -66,   61,    0,
  113,    0,    0,    0,    6,    1,    0,    0,
};
#define YYTABLESIZE 527
short yytable[] = {                                      75,
   75,   75,   75,   75,   47,   75,   63,   55,   67,   99,
   62,   49,   62,   38,   50,  147,   54,   85,   75,  115,
   75,   70,  121,   70,   70,   70,   51,   61,   32,   56,
   37,   60,   82,  119,   32,   38,  104,  108,  132,   77,
   70,   78,   70,   68,   58,   68,   68,   68,   55,   32,
   91,  139,   67,  143,  124,   92,   58,   38,   85,   86,
   57,   77,   68,   78,   68,   69,   85,   69,   69,   69,
  102,   77,  106,   78,  130,   68,   70,   71,   72,   64,
   66,   75,  110,  111,   69,   90,   69,   67,   79,  141,
   80,  122,  123,   93,   94,   96,   55,   38,   11,   97,
   55,  100,  116,   70,   98,  107,   86,  105,  109,  113,
  118,  127,  128,  129,  131,  136,  144,   11,  137,  112,
  145,  146,   86,  150,  153,   68,  151,   11,  152,   63,
    3,   25,   24,   30,  140,   42,   38,   86,  125,   50,
  108,  149,   77,   55,   78,   11,   65,   69,  120,   69,
    0,    1,   82,   83,    2,    0,    0,    0,    0,   79,
    8,   80,    0,   11,    0,   60,   60,   60,   60,   67,
    0,   36,   84,   11,   60,   60,    0,    0,   58,   58,
   58,   58,    0,    0,    0,   60,   60,   58,   58,    0,
    0,    0,    1,    0,   11,    2,   10,    0,   58,   58,
    1,    8,  142,    2,   11,    0,    0,    0,   53,    8,
    0,    0,   36,   84,    0,   75,   75,   75,   75,    0,
   36,   84,    0,    0,   75,   75,   95,   75,   75,   75,
   75,    0,   60,    0,   60,   75,   75,   70,   70,   70,
   70,   33,   34,   35,  134,   36,   70,   70,   51,   70,
   70,   70,   70,    0,  148,    0,   32,   70,   70,   68,
   68,   68,   68,   33,   34,   35,    0,   36,   68,   68,
    0,   68,   68,   68,   68,  154,    5,    6,    7,   68,
   68,   69,   69,   69,   69,   33,   34,   35,    0,   36,
   69,   69,    0,   69,   69,   69,   69,   73,   74,   75,
   76,   69,   69,   67,   67,   67,   67,  138,    0,    0,
    0,    1,   67,   67,    2,    3,    4,    5,    6,    7,
    8,    0,    0,   67,   67,   33,   34,   35,    0,   36,
    1,    9,   84,    2,    3,    4,    5,    6,    7,    8,
    1,  114,    0,    2,    3,    4,    5,    6,    7,    8,
    9,    0,    0,    0,    0,    0,    0,    0,    1,    0,
    9,    2,    3,    4,    5,    6,    7,    8,   73,   74,
   75,   76,    0,    0,    0,    0,    1,    0,    9,    2,
    3,    4,    5,    6,    7,    8,    1,    0,    0,    2,
    3,    4,    5,    6,    7,    8,  133,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    9,    1,    0,    0,
    2,    3,    4,    5,    6,    7,    8,    1,    0,    0,
    2,    3,    4,    5,    6,    7,    8,    9,   39,    0,
    0,    0,    0,    0,    0,   40,    0,    9,    0,    1,
    0,    0,    2,    3,    4,    5,    6,    7,    8,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   39,    9,
   84,    0,    0,    0,   39,   40,    0,    0,    0,    0,
    0,   40,    0,    1,    0,    0,    2,    3,    4,    5,
    6,    7,    8,    0,    0,    0,    0,    0,   39,    0,
   39,    0,    0,    9,   39,   40,    0,   40,    0,    0,
    0,   40,    0,    0,   39,   39,    0,    0,   39,    0,
    0,   40,   40,    0,    0,   40,    0,    0,   39,   39,
    0,    0,    0,    0,    0,   40,   40,
};
short yycheck[] = {                                      41,
   42,   43,   44,   45,  276,   47,   40,   13,   40,   41,
   46,  277,   46,   45,  277,   44,   10,  123,   60,   85,
   62,   41,   89,   43,   44,   45,  277,   61,   40,   44,
   40,  123,  258,  259,   46,   45,   64,   41,  105,   43,
   60,   45,   62,   41,  123,   43,   44,   45,   54,   61,
   42,  117,   40,  120,   41,   47,  277,   45,  123,   42,
   44,   43,   60,   45,   62,   41,  123,   43,   44,   45,
   64,   43,   66,   45,  102,   37,  273,  274,  275,  123,
  123,  123,   77,   78,   60,   41,   62,   41,   60,  117,
   62,   91,   92,   40,   59,   59,  102,   45,   44,   61,
  106,   63,   85,  123,  277,   67,   89,  267,   41,   44,
   44,  277,  277,   41,  125,   44,  259,   44,   44,   81,
  277,   41,  105,   44,  259,  123,   44,   44,  125,   44,
    0,   44,   44,   44,  117,   41,  125,  120,   93,   44,
   41,  135,   43,  149,   45,   44,   31,  123,   88,   37,
   -1,  257,  258,  259,  260,   -1,   -1,   -1,   -1,   60,
  266,   62,   -1,   44,   -1,  257,  258,  259,  260,  123,
   -1,  277,  278,   44,  266,  267,   -1,   -1,  257,  258,
  259,  260,   -1,   -1,   -1,  277,  278,  266,  267,   -1,
   -1,   -1,  257,   -1,   44,  260,  123,   -1,  277,  278,
  257,  266,  259,  260,   44,   -1,   -1,   -1,  125,  266,
   -1,   -1,  277,  278,   -1,  257,  258,  259,  260,   -1,
  277,  278,   -1,   -1,  266,  267,  125,  269,  270,  271,
  272,   -1,  268,   -1,  268,  277,  278,  257,  258,  259,
  260,  273,  274,  275,  125,  277,  266,  267,  277,  269,
  270,  271,  272,   -1,  125,   -1,  268,  277,  278,  257,
  258,  259,  260,  273,  274,  275,   -1,  277,  266,  267,
   -1,  269,  270,  271,  272,  125,  263,  264,  265,  277,
  278,  257,  258,  259,  260,  273,  274,  275,   -1,  277,
  266,  267,   -1,  269,  270,  271,  272,  269,  270,  271,
  272,  277,  278,  257,  258,  259,  260,  125,   -1,   -1,
   -1,  257,  266,  267,  260,  261,  262,  263,  264,  265,
  266,   -1,   -1,  277,  278,  273,  274,  275,   -1,  277,
  257,  277,  278,  260,  261,  262,  263,  264,  265,  266,
  257,  125,   -1,  260,  261,  262,  263,  264,  265,  266,
  277,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,   -1,
  277,  260,  261,  262,  263,  264,  265,  266,  269,  270,
  271,  272,   -1,   -1,   -1,   -1,  257,   -1,  277,  260,
  261,  262,  263,  264,  265,  266,  257,   -1,   -1,  260,
  261,  262,  263,  264,  265,  266,  277,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  277,  257,   -1,   -1,
  260,  261,  262,  263,  264,  265,  266,  257,   -1,   -1,
  260,  261,  262,  263,  264,  265,  266,  277,    1,   -1,
   -1,   -1,   -1,   -1,   -1,    1,   -1,  277,   -1,  257,
   -1,   -1,  260,  261,  262,  263,  264,  265,  266,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   31,  277,
  278,   -1,   -1,   -1,   37,   31,   -1,   -1,   -1,   -1,
   -1,   37,   -1,  257,   -1,   -1,  260,  261,  262,  263,
  264,  265,  266,   -1,   -1,   -1,   -1,   -1,   61,   -1,
   63,   -1,   -1,  277,   67,   61,   -1,   63,   -1,   -1,
   -1,   67,   -1,   -1,   77,   78,   -1,   -1,   81,   -1,
   -1,   77,   78,   -1,   -1,   81,   -1,   -1,   91,   92,
   -1,   -1,   -1,   -1,   -1,   91,   92,
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
"class : classHeader",
"class : classHeader '{' sentenceList heredity sentenceList '}'",
"classHeader : CLASS ID",
"heredity : ID ','",
"comparison : expression operatorsLogics expression",
"expression : expression '+' termino",
"expression : expression '-' termino",
"expression : termino",
"expression : '(' expression ')'",
"termino : termino '*' factor",
"termino : termino '/' factor",
"termino : factor",
"factor : nesting",
"factor : constant",
"factor : lessless",
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
typedef string YYSTYPE;
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
#line 461 ".\Gramaticas\gramaticaLenguaje.y"

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
#line 916 "y.tab.c"
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
#line 27 ".\Gramaticas\gramaticaLenguaje.y"
{ChequearForwardDeclarations();
                             list<string> varSinUsar = VarSinInic::listVarTop();
                             for (const string& var : varSinUsar){
                                yywarning("Variable/Objeto " + var + " Sin asignacion de un valor en el main");
                             }
                            }
break;
case 2:
#line 33 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Programa vacio");}
break;
case 3:
#line 34 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta llaves delimitadores de programa");}
break;
case 8:
#line 43 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Sentencia vacia");}
break;
case 14:
#line 53 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Sentencia declarativa en lugar de una ejecutable");}
break;
case 15:
#line 54 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Sentencia declarativa en lugar de una ejecutable");}
break;
case 21:
#line 62 ".\Gramaticas\gramaticaLenguaje.y"
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
#line 76 ".\Gramaticas\gramaticaLenguaje.y"
{setearTipos(yyvsp[-1],yyvsp[0]);}
break;
case 25:
#line 79 ".\Gramaticas\gramaticaLenguaje.y"
{  
                                    if (InsideClass::insideClass() && yyvsp[-1] == InsideClass::getClassSinMain()){
                                        yyerror("No es posible declarar un atributo el cual su tipo sea la misma clase a la que pertenece");
                                    }else{
                                        string name;
                                        ChequearDeclaracion(yyvsp[-1], name, "Clase");
                                        setearTipos(yyvsp[-1],yyvsp[0]);
                                        TablaDeSimbolos::del(yyvsp[-1]); /*El ID al declarar un objeto se agrega automaticamente por error en el lexico*/
                                    }
                                   }
break;
case 26:
#line 91 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsDeclVarAndObj(yyvsp[0], "Obj", yyvsp[-2]);}
break;
case 27:
#line 92 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = stepsDeclVarAndObj(yyvsp[0], "Obj");}
break;
case 28:
#line 95 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = stepsDeclVarAndObj(yyvsp[0], "Var", yyvsp[-2]);}
break;
case 29:
#line 96 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsDeclVarAndObj(yyvsp[0], "Var");}
break;
case 30:
#line 99 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Asignacion");
                                    string nomEncontrada, nomAtributo;
                                    if (esObjeto(yyvsp[-2]) && (ChequearDeclObjeto(yyvsp[-2],nomEncontrada, nomAtributo)) || !esObjeto(yyvsp[-2]) && (ChequearDeclaracion(yyvsp[-2],nomEncontrada, "Var",true))){
                                        string tipo;
                                        TablaDeSimbolos::del(yyvsp[-2]);
                                        bool conversion;
                                        string op = yyvsp[0];
                                        bool lessLessOp1 = revisarLessLess(op);
                                        if (esObjeto(yyvsp[-2]) ){
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
#line 140 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[-2] + "." + yyvsp[0];}
break;
case 32:
#line 141 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 33:
#line 144 ".\Gramaticas\gramaticaLenguaje.y"
{stepsFunctionOrMethod();}
break;
case 34:
#line 147 ".\Gramaticas\gramaticaLenguaje.y"
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
                                                            }
                                                        }else{
                                                            yyerror("No es posible anidar otra funcion, excede los niveles permitidos");
                                                        }
                                                    }else{ /*Se trata de un metodo*/
                                                        if (yyvsp[-3] == InsideClass::getClassSinMain()){
                                                            yyerror("No es posible declarar un metodo con el mismo nombre al de la clase a la que pertenece");
                                                        }else{
                                                            if (noReDeclarada(yyvsp[-3]+"-"+InsideClass::getClassSinMain(), "Metodo") && chequearNomPF(yyvsp[-3],yyvsp[-1])) {
                                                                InsideClass::addMethod(yyvsp[-3]);
                                                                VarSinInic::addTop();
                                                                key = TablaDeSimbolos::changeKeyClass(yyvsp[-3],InsideClass::getClass());
                                                                TablaDeSimbolos::setUso(key, "Metodo");
                                                                Ambito::add(yyvsp[-3]+"-"+InsideClass::getClassSinMain());
                                                                InsideClass::insideMethod(true);
                                                        }
                                                        }
                                                    }
                                                    TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                                    string keyFormal = TablaDeSimbolos::changeKey(yyvsp[-1]);
                                                    TablaDeSimbolos::setParametroFormal(key,keyFormal);
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
#line 191 ".\Gramaticas\gramaticaLenguaje.y"
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
                                                }
                                            }else{
                                                yyerror("No es posible anidar otra funcion, excede los niveles permitidos");
                                            }
                                        }else{ /*Se trata de un metodo*/
                                            if (yyvsp[-2] == InsideClass::getClassSinMain()){
                                                yyerror("No es posible declarar un metodo con el mismo nombre al de la clase a la que pertenece");
                                            }else{
                                                if (noReDeclarada(yyvsp[-2]+"-"+InsideClass::getClassSinMain(), "Metodo")) {
                                                    InsideClass::addMethod(yyvsp[-2]);
                                                    VarSinInic::addTop(); 
                                                    key = TablaDeSimbolos::changeKeyClass(yyvsp[-2],InsideClass::getClass());
                                                    TablaDeSimbolos::setUso(key, "Metodo");
                                                    Ambito::add(yyvsp[-2]+"-"+InsideClass::getClassSinMain());
                                                    InsideClass::insideMethod(true);
                                            }
                                            }
                                        }
                                        TablaDeSimbolos::setClass(key,InsideClass::getClass());
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
#line 234 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Funcion vacia");}
break;
case 38:
#line 235 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Funcion sin RETURN obligatorio al final");}
break;
case 39:
#line 238 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0]; TablaDeSimbolos::setUso(yyvsp[0], "PF"); setearTipos(yyvsp[-1],yyvsp[0]);}
break;
case 40:
#line 241 ".\Gramaticas\gramaticaLenguaje.y"
{
                            string name;
                            string tipo;
                            if (esObjeto(yyvsp[-2])){
                                if (ChequearDeclObjeto(yyvsp[-2],name,tipo,false)){
                                    if (ChequearRecursion(yyvsp[-2],true)){
                                        if (!TablaDeSimbolos::tieneParametros(name)){
                                            EstructuraTercetos::addTerceto("Call",name,"");
                                        } else {
                                            yyerror("El metodo " + name + " requiere parametro");
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
                                    }else{
                                        yyerror("Se esta haciendo un llamado recursivo a la funcion: "+yyvsp[-2]);
                                    }
                                }
                            }
                            TablaDeSimbolos::del(yyvsp[-2]);
                            }
break;
case 41:
#line 271 ".\Gramaticas\gramaticaLenguaje.y"
{
                                            string name;
                                            string tipo;
                                            if (esObjeto(yyvsp[-3])){
                                                if (ChequearDeclObjeto(yyvsp[-3],name,tipo,false)){
                                                    if (ChequearRecursion(yyvsp[-3],true)){
                                                        string tipo;
                                                        if (TablaDeSimbolos::tieneParametros(name)){
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
#line 331 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");jumpEndIf();}
break;
case 44:
#line 332 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");jumpEndIf();}
break;
case 45:
#line 333 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");jumpEndIf();}
break;
case 46:
#line 334 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Else vacio");yymenssage("IF");jumpEndIf();}
break;
case 47:
#line 335 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");jumpEndIf();}
break;
case 48:
#line 338 ".\Gramaticas\gramaticaLenguaje.y"
{jumpEndThen();}
break;
case 49:
#line 341 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("While");jumpEndWhile();}
break;
case 50:
#line 342 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("While vacio");yymenssage("While");jumpEndWhile();}
break;
case 51:
#line 345 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::apilar();EstructuraTercetos::addLabel();}
break;
case 56:
#line 352 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Bloque vacio");}
break;
case 57:
#line 355 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",yyvsp[-1],"");}
break;
case 58:
#line 356 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta segundo parentesis en la condicion");EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",yyvsp[0],"");}
break;
case 59:
#line 357 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta primer parentesis en la condicion");EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",yyvsp[-1],"");}
break;
case 60:
#line 358 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Faltan  parentesis en la condicion");EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",yyvsp[0],"");}
break;
case 61:
#line 361 ".\Gramaticas\gramaticaLenguaje.y"
{ yymenssage("Clase");
                                        TablaDeSimbolos::forwDeclComp(InsideClass::getClass());
                                        InsideClass::unstackMethods();
                                        InsideClass::outClass();
                                      }
break;
case 62:
#line 366 ".\Gramaticas\gramaticaLenguaje.y"
{
                                                 yymenssage("Clase");
                                                 TablaDeSimbolos::setHerencia(InsideClass::getClass(),yyvsp[-1]);
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
break;
case 63:
#line 379 ".\Gramaticas\gramaticaLenguaje.y"
{claseSinimplementar(InsideClass::getClass());InsideClass::outClass();}
break;
case 64:
#line 380 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("La herencia debe ir al final de la declaracion de la clase");}
break;
case 65:
#line 383 ".\Gramaticas\gramaticaLenguaje.y"
{ if ((!classInFunction(yyvsp[0])) && !classInClass(yyvsp[0])){
                            if (noReDeclarada(yyvsp[0], "Clase")){
                                string name =  TablaDeSimbolos::changeKey(yyvsp[0]);
                                TablaDeSimbolos::setUso(name,"Clase");
                                TablaDeSimbolos::inicNivelHer(name);
                                InsideClass::inClass(name);
                            } else {
                                InsideClass::inClass(yyvsp[0]+Ambito::get());
                                TablaDeSimbolos::del(yyvsp[0]);
                            }
                        }
                      }
break;
case 66:
#line 397 ".\Gramaticas\gramaticaLenguaje.y"
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
case 67:
#line 408 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = stepsOperation(yyvsp[-2], yyvsp[0], yyvsp[-1]);}
break;
case 68:
#line 411 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "+"); }
break;
case 69:
#line 412 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "-"); }
break;
case 70:
#line 413 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 71:
#line 414 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Expresion no puede ir entre parentesis");yyval=yyvsp[-1];}
break;
case 72:
#line 417 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "*"); }
break;
case 73:
#line 418 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "/"); }
break;
case 74:
#line 419 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 75:
#line 422 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = stepsFactor(yyvsp[0]);}
break;
case 76:
#line 423 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 77:
#line 424 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 78:
#line 427 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = stepsFactor(yyvsp[-1], true);}
break;
case 79:
#line 430 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "==";}
break;
case 80:
#line 431 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "!!";}
break;
case 81:
#line 432 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = ">=";}
break;
case 82:
#line 433 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "<=";}
break;
case 83:
#line 434 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "<";}
break;
case 84:
#line 435 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = ">";}
break;
case 85:
#line 438 ".\Gramaticas\gramaticaLenguaje.y"
{chequearRangoSHORT(yyvsp[0]); yyval = yyvsp[0];}
break;
case 86:
#line 439 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = "-"+yyvsp[0];}
break;
case 87:
#line 440 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearPositivos(yyvsp[0]); yyval = yyvsp[0];}
break;
case 88:
#line 441 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = "-"+yyvsp[0];}
break;
case 89:
#line 442 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 90:
#line 443 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Una constante ULONG no puede ser negativa");}
break;
case 91:
#line 446 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="SHORT";}
break;
case 92:
#line 447 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="ULONG";}
break;
case 93:
#line 448 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="FLOAT";}
break;
case 94:
#line 451 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::addTerceto("Print",yyvsp[0],"");}
break;
case 96:
#line 457 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::addTerceto("Return","","");}
break;
#line 1608 "y.tab.c"
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
