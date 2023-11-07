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

#define RESET   "\x1B[0m"
#define YELLOW  "\x1B[33m"
#define RED "\x1B[31m"
#define BLUE "\x1B[34m"

#line 24 "y.tab.c"
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
    3,    8,    8,    8,    4,    4,    4,    4,    4,    6,
    6,   14,   15,   18,   18,   17,   17,   13,   19,   19,
    5,   21,   21,   22,   22,   23,   12,   12,   25,    9,
    9,    9,    9,    9,   28,   10,   10,   29,   27,   27,
   27,   27,   27,   26,   26,   26,   26,    7,    7,    7,
    7,   31,   32,   30,   20,   20,   20,   20,   34,   34,
   34,   35,   35,   35,   33,   33,   33,   33,   33,   33,
   36,   36,   36,   36,   36,   36,   16,   16,   16,   11,
   37,   24,
};
short yylen[] = {                                         2,
    3,    2,    1,    2,    1,    2,    2,    1,    1,    1,
    1,    3,    2,    2,    1,    1,    1,    1,    1,    1,
    1,    2,    2,    3,    1,    3,    1,    3,    3,    1,
    4,    5,    4,    2,    1,    2,    3,    4,    1,    6,
    4,    3,    5,    5,    1,    4,    3,    1,    3,    4,
    2,    1,    2,    3,    2,    2,    1,    4,    5,    1,
    6,    2,    2,    3,    3,    3,    1,    3,    3,    3,
    1,    1,    1,    2,    1,    1,    1,    1,    1,    1,
    1,    2,    1,    2,    1,    2,    1,    1,    1,    2,
    1,    2,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,   87,   88,   89,   48,    0,    0,
    8,    0,    0,    5,    0,    0,    9,   10,   11,   15,
   16,   17,   18,   19,   20,   21,    0,    0,    0,    0,
    0,   81,   85,   83,   30,    0,    0,    0,    0,    0,
    0,    0,   71,   73,   91,   90,   62,    0,   25,    0,
    2,    0,    4,    6,    7,   27,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   82,   86,   84,   74,
   75,   76,   77,   78,    0,    0,   79,   80,    0,   45,
   42,    0,    0,    0,   52,    0,    0,   56,    0,    0,
    0,    0,    1,    0,    0,   29,   37,    0,    0,    0,
    0,   35,    0,    0,    0,   68,   54,    0,    0,    0,
   92,   53,    0,    0,    0,   51,   41,    0,    0,   69,
   70,   33,    0,    0,   24,   26,   38,   34,   31,   46,
    0,   58,    0,   14,   13,   49,    0,    0,   43,    0,
   44,   36,   32,   63,   59,    0,   12,   50,   40,   61,
};
short yydgoto[] = {                                      12,
   13,   14,   15,   16,   17,   18,   19,  115,   20,   21,
   22,   23,   24,   25,   26,   27,   57,   50,   28,   39,
   29,  101,  124,   85,   99,   40,   86,   87,   30,   41,
   31,  133,   79,   42,   43,   44,   46,
};
short yysindex[] = {                                     74,
   -9, -271, -265, -243,    0,    0,    0,    0, -240,   84,
    0,    0,  161,    0,   23,   37,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -235,  -11,  -66,   -9,
  -40,    0,    0,    0,    0,   13, -167,  -14,   29, -105,
   52,  -27,    0,    0,    0,    0,    0,   56,    0,   41,
    0,  102,    0,    0,    0,    0,   44,   13, -166,  -31,
   55, -155,  161,   13,  100,   72,    0,    0,    0,    0,
    0,    0,    0,    0,   53,   53,    0,    0,   13,    0,
    0,   70,  204,   76,    0, -207,  185,    0,   53,   53,
  -30, -154,    0, -153,  -15,    0,    0,  -15,   81,   55,
    2,    0,  185,  120,   30,    0,    0,  -27,  -27,  -15,
    0,    0,   85,   86,  -70,    0,    0, -110, -127,    0,
    0,    0, -144,   93,    0,    0,    0,    0,    0,    0,
  -28,    0,  130,    0,    0,    0,   91,   11,    0, -122,
    0,    0,    0,    0,    0,  151,    0,    0,    0,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,   -7,    0,
    0,    0,  138,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   95,    0,    0,    0,    0,    0,    0,  -41,    0,    0,
  -78,  -19,    0,    0,    0,    0,    0,    0,    0,   98,
    0,    0,    0,    0,    0,    0,  107,    0,    0,    0,
    0,    0,    0,    0,    0,  -74,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  113,    0,    0,  103,    0,    0,
    0,    0,  114,    0,    0,    0,    0,    3,   25,   47,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   -7,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
   -2,   65,   80,  -23,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   68,    0,    0,   26,   61,
    0,    0,    0,  -21,    0,  136,  -80,   89,    0,  135,
    0,    0,    0,    1,   20,    0,    0,
};
#define YYTABLESIZE 481
short yytable[] = {                                      72,
   72,   72,   72,   72,   45,   72,  119,   52,   64,   97,
  122,   47,   83,   37,   89,  144,   84,   83,   72,   90,
   72,   67,  130,   67,   67,   67,   38,   75,   60,   76,
   36,   59,   30,   48,   59,   37,   49,  140,   30,  102,
   67,   56,   67,   65,   57,   65,   65,   65,   55,   58,
   80,  117,   64,   30,  136,   38,   61,   37,  100,  114,
  104,   38,   65,   84,   65,   66,   54,   66,   66,   66,
  106,   75,   75,   76,   76,  108,  109,   53,  128,   84,
   55,   72,   63,   38,   66,   38,   66,   64,   77,   38,
   78,  137,   88,  138,   84,   91,   65,   37,   11,   92,
   38,   38,   94,   67,   38,   67,   68,   69,  120,  121,
   96,  103,  107,  111,   38,   38,   53,   11,   95,  116,
   98,  127,  125,  126,  105,   65,  129,   11,  134,  135,
  146,  141,  142,  143,  147,  148,  149,    3,   60,  110,
  106,   23,   75,   39,   76,   11,    1,   66,  139,    2,
   22,    1,   80,   81,    2,    8,   28,   47,  123,   77,
    8,   78,  113,   11,   53,   62,   35,   82,   53,   64,
   66,   35,   82,   11,  118,    0,    0,    0,   57,   57,
   57,   57,   55,   55,   55,   55,    1,   57,   57,    2,
    0,   55,   55,    0,   11,    8,   10,    0,   57,   57,
    0,    0,   55,   55,   11,    0,   35,   82,   51,    0,
   53,    0,    0,    0,    0,   72,   72,   72,   72,    0,
    0,    0,    0,    0,   72,   72,   93,   72,   72,   72,
   72,    0,    5,    6,    7,   72,   72,   67,   67,   67,
   67,   32,   33,   34,  132,   35,   67,   67,   49,   67,
   67,   67,   67,   70,  145,    0,    0,   67,   67,   65,
   65,   65,   65,   32,   33,   34,    0,   35,   65,   65,
    0,   65,   65,   65,   65,  150,    0,    0,    0,   65,
   65,   66,   66,   66,   66,   32,   33,   34,    0,   35,
   66,   66,    0,   66,   66,   66,   66,   71,   72,   73,
   74,   66,   66,   64,   64,   64,   64,   83,    0,    0,
    0,    1,   64,   64,    2,    3,    4,    5,    6,    7,
    8,    0,    0,   64,   64,   32,   33,   34,  112,   35,
    1,    9,   82,    2,    3,    4,    5,    6,    7,    8,
    1,    0,    0,    2,    3,    4,    5,    6,    7,    8,
    9,    0,    0,    0,    0,    0,    0,    0,    1,    0,
    9,    2,    3,    4,    5,    6,    7,    8,   71,   72,
   73,   74,    0,    0,    0,    0,    1,    0,    9,    2,
    3,    4,    5,    6,    7,    8,    1,    0,    0,    2,
    3,    4,    5,    6,    7,    8,  131,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    9,    1,    0,    0,
    2,    3,    4,    5,    6,    7,    8,    1,    0,    0,
    2,    3,    4,    5,    6,    7,    8,    9,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    9,    0,    0,
    0,    1,    0,    0,    2,    0,    0,    0,    0,    0,
    8,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    1,   35,   82,    2,    3,    4,    5,    6,    7,    8,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    9,
};
short yycheck[] = {                                      41,
   42,   43,   44,   45,  276,   47,   87,   10,   40,   41,
   41,  277,  123,   45,   42,   44,   40,  123,   60,   47,
   62,   41,  103,   43,   44,   45,    1,   43,   40,   45,
   40,   46,   40,  277,   46,   45,  277,  118,   46,   61,
   60,  277,   62,   41,  123,   43,   44,   45,  123,   61,
  258,  259,   40,   61,  125,   30,  123,   45,   61,   83,
   63,   36,   60,   87,   62,   41,   44,   43,   44,   45,
   41,   43,   43,   45,   45,   75,   76,   13,  100,  103,
   44,  123,  123,   58,   60,   60,   62,   41,   60,   64,
   62,  115,   41,  115,  118,   40,   36,   45,   44,   59,
   75,   76,   59,  123,   79,  273,  274,  275,   89,   90,
  277,  267,   41,   44,   89,   90,   52,   44,   58,   44,
   60,   41,  277,  277,   64,  123,  125,   44,   44,   44,
  133,  259,  277,   41,   44,  125,  259,    0,   44,   79,
   41,   44,   43,   41,   45,   44,  257,  123,  259,  260,
   44,  257,  258,  259,  260,  266,   44,   44,   91,   60,
  266,   62,   83,   44,  100,   30,  277,  278,  104,  123,
   36,  277,  278,   44,   86,   -1,   -1,   -1,  257,  258,
  259,  260,  257,  258,  259,  260,  257,  266,  267,  260,
   -1,  266,  267,   -1,   44,  266,  123,   -1,  277,  278,
   -1,   -1,  277,  278,   44,   -1,  277,  278,  125,   -1,
  146,   -1,   -1,   -1,   -1,  257,  258,  259,  260,   -1,
   -1,   -1,   -1,   -1,  266,  267,  125,  269,  270,  271,
  272,   -1,  263,  264,  265,  277,  278,  257,  258,  259,
  260,  273,  274,  275,  125,  277,  266,  267,  277,  269,
  270,  271,  272,  268,  125,   -1,   -1,  277,  278,  257,
  258,  259,  260,  273,  274,  275,   -1,  277,  266,  267,
   -1,  269,  270,  271,  272,  125,   -1,   -1,   -1,  277,
  278,  257,  258,  259,  260,  273,  274,  275,   -1,  277,
  266,  267,   -1,  269,  270,  271,  272,  269,  270,  271,
  272,  277,  278,  257,  258,  259,  260,  123,   -1,   -1,
   -1,  257,  266,  267,  260,  261,  262,  263,  264,  265,
  266,   -1,   -1,  277,  278,  273,  274,  275,  125,  277,
  257,  277,  278,  260,  261,  262,  263,  264,  265,  266,
  257,   -1,   -1,  260,  261,  262,  263,  264,  265,  266,
  277,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,   -1,
  277,  260,  261,  262,  263,  264,  265,  266,  269,  270,
  271,  272,   -1,   -1,   -1,   -1,  257,   -1,  277,  260,
  261,  262,  263,  264,  265,  266,  257,   -1,   -1,  260,
  261,  262,  263,  264,  265,  266,  277,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  277,  257,   -1,   -1,
  260,  261,  262,  263,  264,  265,  266,  257,   -1,   -1,
  260,  261,  262,  263,  264,  265,  266,  277,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  277,   -1,   -1,
   -1,  257,   -1,   -1,  260,   -1,   -1,   -1,   -1,   -1,
  266,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  257,  277,  278,  260,  261,  262,  263,  264,  265,  266,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  277,
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
"executableList : declarative ','",
"executable : ifStatement",
"executable : whileStatement",
"executable : print",
"executable : functionCall",
"executable : assignment",
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
"factor : nesting LESSLESS",
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
#line 382 ".\Gramaticas\gramaticaLenguaje.y"

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

bool ChequearDeclaracion(string var, string & nomEncontrada, string uso){
    string ambito=Ambito::get();
    bool final = false;
    bool encontrada = false;
    while(! final && ! encontrada){
        if (TablaDeSimbolos::usoAsignado(var+ambito) == uso){
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
        		yyerror("Clase " + antCheck + " No hereda de " + check);
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
    } else if (uso == "Clase" && usoOriginal == "Clase"){
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
    if (op[0] == '-'){
        op = obtenerUltimaParte(op,'-');
        
        return true;
    } else {
        return false;
    }
}

void crearTerLessLess(string op){
    EstructuraTercetos::addTerceto("-",op,TablaDeSimbolos::getUno(op),TablaDeSimbolos::getTipo(op));
    EstructuraTercetos::addTerceto("=",op,EstructuraTercetos::nroActualTerceto());
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
    if (lessLessOp1) crearTerLessLess(nom1);
    if (lessLessOp2) crearTerLessLess(nom2);
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
        chequeoOK = ChequearDeclaracion(fact, nomEncontrada, "PF");
        if (chequeoOK) salida = nomEncontrada;
    }else{
        chequeoOK = ChequearDeclaracion(fact,nomEncontrada,"Var");
        if (chequeoOK) salida = nomEncontrada;
    }
    TablaDeSimbolos::del(fact);
    if (chequeoOK && lessLess) salida = "-"+salida;
    return salida;
}
#line 815 "y.tab.c"
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
case 2:
#line 27 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Programa vacio");}
break;
case 3:
#line 28 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta llaves delimitadores de programa");}
break;
case 8:
#line 37 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Sentencia vacia");}
break;
case 14:
#line 47 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Sentencia declarativa en lugar de una ejecutable");}
break;
case 22:
#line 61 ".\Gramaticas\gramaticaLenguaje.y"
{setearTipos(yyvsp[-1],yyvsp[0]);}
break;
case 23:
#line 64 ".\Gramaticas\gramaticaLenguaje.y"
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
case 24:
#line 76 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsDeclVarAndObj(yyvsp[0], "Obj", yyvsp[-2]);}
break;
case 25:
#line 77 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = stepsDeclVarAndObj(yyvsp[0], "Obj");}
break;
case 26:
#line 80 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = stepsDeclVarAndObj(yyvsp[0], "Var", yyvsp[-2]);}
break;
case 27:
#line 81 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsDeclVarAndObj(yyvsp[0], "Var");}
break;
case 28:
#line 84 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Asignacion");
                                    string nomEncontrada, nomAtributo;
                                    /*$$ = EstructuraTercetos::nroActualTerceto();*/
                                    if (esObjeto(yyvsp[-2]) && (ChequearDeclObjeto(yyvsp[-2],nomEncontrada, nomAtributo)) || !esObjeto(yyvsp[-2]) && (ChequearDeclaracion(yyvsp[-2],nomEncontrada, "Var"))){
                                        string tipo;
                                        TablaDeSimbolos::del(yyvsp[-2]);
                                        bool conversion;
                                        if (esObjeto(yyvsp[-2]) ){
                                            conversion = converAsig(nomAtributo,yyvsp[0],tipo);
                                        } else {
                                            conversion = converAsig(nomEncontrada,yyvsp[0],tipo);
                                        } 
                                        if (!conversion){
                                            if (yyvsp[0][0] == '['){
                                                EstructuraTercetos::addTerceto("=",nomEncontrada,yyvsp[0]);
                                            } else {
                                                EstructuraTercetos::addTerceto("=",nomEncontrada,yyvsp[0],tipo);
                                            }
                                        }else{
                                            EstructuraTercetos::addTerceto("=",nomEncontrada,EstructuraTercetos::nroActualTerceto(),tipo);
                                        }
                                    }
                                    }
break;
case 29:
#line 109 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[-2] + "." + yyvsp[0];}
break;
case 30:
#line 110 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 31:
#line 113 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Funcion");Ambito::del();
                                            EstructuraTercetos::setAmbito(Ambito::get());
                                            if ((InsideClass::insideClass()) && (InsideClass::insideMethod()) && (InsideClass::insideFuncionMethod())){
                                                InsideClass::insideFuncionMethod(false);
                                            }else{
                                                if ((InsideClass::insideClass()) && (InsideClass::insideMethod()) && !(InsideClass::insideFuncionMethod())){
                                                    InsideClass::insideMethod(false);
                                                }
                                            }
                                        ;}
break;
case 32:
#line 125 ".\Gramaticas\gramaticaLenguaje.y"
{ if (InsideClass::insideClass()){
                                                    string key; 
                                                    if ((InsideClass::insideMethod())){ /*Se trata de una funcion dentro de un metodo*/
                                                        if (!(InsideClass::insideFuncionMethod())){
                                                            if (noReDeclarada(yyvsp[-3], "Funcion")) { 
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
                                                            if (noReDeclarada(yyvsp[-3]+"-"+InsideClass::getClassSinMain(), "Metodo")) {
                                                                InsideClass::addMethod(yyvsp[-3]);
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
                                                    EstructuraTercetos::setAmbito(Ambito::get()); 
                                            }else{
                                                if (noReDeclarada(yyvsp[-3], "Funcion")) {
                                                    string key = TablaDeSimbolos::changeKey(yyvsp[-3]);
                                                    TablaDeSimbolos::setUso(key, "Funcion");
                                                    Ambito::add(yyvsp[-3]);
                                                    string keyFormal = TablaDeSimbolos::changeKey(yyvsp[-1]);
                                                    TablaDeSimbolos::setParametroFormal(key,keyFormal);
                                                    EstructuraTercetos::setAmbito(Ambito::get());
                                                }
                                              }
                                            }
break;
case 33:
#line 166 ".\Gramaticas\gramaticaLenguaje.y"
{if (InsideClass::insideClass()){
                                        string key; 
                                        if ((InsideClass::insideMethod())){ /*Se trata de una funcion dentro de un metodo*/
                                            if (!(InsideClass::insideFuncionMethod())){
                                                if (noReDeclarada(yyvsp[-2], "Funcion")) { 
                                                    key = TablaDeSimbolos::changeKey(yyvsp[-2]);
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
                                                    key = TablaDeSimbolos::changeKeyClass(yyvsp[-2],InsideClass::getClass());
                                                    TablaDeSimbolos::setUso(key, "Metodo");
                                                    Ambito::add(yyvsp[-2]+"-"+InsideClass::getClassSinMain());
                                                    InsideClass::insideMethod(true);
                                            }
                                            }
                                        }
                                        TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                        EstructuraTercetos::setAmbito(Ambito::get());
                                }else{ 
                                        if (noReDeclarada(yyvsp[-2], "Funcion")) {
                                            string key = TablaDeSimbolos::changeKey(yyvsp[-2]);
                                            TablaDeSimbolos::setUso(key, "Funcion");
                                            Ambito::add(yyvsp[-2]);
                                            EstructuraTercetos::setAmbito(Ambito::get());
                                        }
                                    }
                                }
break;
case 35:
#line 206 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Funcion vacia");}
break;
case 36:
#line 209 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0]; TablaDeSimbolos::setUso(yyvsp[0], "PF"); setearTipos(yyvsp[-1],yyvsp[0]);}
break;
case 37:
#line 212 ".\Gramaticas\gramaticaLenguaje.y"
{
                            string name;
                            string tipo;
                            if (esObjeto(yyvsp[-2])){
                                if (ChequearDeclObjeto(yyvsp[-2],name,tipo,false)){
                                    EstructuraTercetos::addTerceto("Call",name,"");
                                }
                            } else {
                                if (ChequearDeclaracion(yyvsp[-2],name,"Funcion")){
                                    EstructuraTercetos::addTerceto("Call",name,"");
                                }
                            }
                            TablaDeSimbolos::del(yyvsp[-2]);
                            }
break;
case 38:
#line 226 ".\Gramaticas\gramaticaLenguaje.y"
{
                                            string name;
                                            string tipo;
                                            if (esObjeto(yyvsp[-3])){
                                                if (ChequearDeclObjeto(yyvsp[-3],name,tipo,false)){
                                                    string tipo;
                                                    if (converAsig(TablaDeSimbolos::getParametroFormal(name), yyvsp[-1], tipo)){
                                                        EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),yyvsp[-1]);
                                                        EstructuraTercetos::addTerceto("Call",name,"");
                                                    }
                                                }
                                            }else{
                                                if (ChequearDeclaracion(yyvsp[-3],name,"Funcion")){
                                                    TablaDeSimbolos::del(yyvsp[-3]);
                                                    string tipo;
                                                    if (converAsig(TablaDeSimbolos::getParametroFormal(name), yyvsp[-1], tipo)) {
                                                        EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),EstructuraTercetos::nroActualTerceto());
                                                    } else {
                                                        EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),yyvsp[-1]);
                                                    }
                                                    EstructuraTercetos::addTerceto("Call",name,"");
                                                }
                                            }
                                            TablaDeSimbolos::del(yyvsp[-3]);
                                         }
break;
case 40:
#line 256 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");jumpEndIf();}
break;
case 41:
#line 257 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");jumpEndIf();}
break;
case 42:
#line 258 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");jumpEndIf();}
break;
case 43:
#line 259 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Else vacio");yymenssage("IF");jumpEndIf();}
break;
case 44:
#line 260 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");jumpEndIf();}
break;
case 45:
#line 263 ".\Gramaticas\gramaticaLenguaje.y"
{jumpEndThen();}
break;
case 46:
#line 266 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("While");jumpEndWhile();}
break;
case 47:
#line 267 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("While vacio");yymenssage("While");jumpEndWhile();}
break;
case 48:
#line 270 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::apilar();EstructuraTercetos::addLabel();}
break;
case 53:
#line 277 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Bloque vacio");}
break;
case 54:
#line 280 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",yyvsp[-1],"");}
break;
case 55:
#line 281 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta segundo parentesis en la condicion");}
break;
case 56:
#line 282 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta primer parentesis en la condicion");}
break;
case 57:
#line 283 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Faltan  parentesis en la condicion");}
break;
case 58:
#line 286 ".\Gramaticas\gramaticaLenguaje.y"
{ yymenssage("Clase");
                                        TablaDeSimbolos::forwDeclComp(InsideClass::getClass());
                                        InsideClass::unstackMethods();
                                        InsideClass::outClass();
                                      }
break;
case 59:
#line 291 ".\Gramaticas\gramaticaLenguaje.y"
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
case 60:
#line 304 ".\Gramaticas\gramaticaLenguaje.y"
{claseSinimplementar(InsideClass::getClass());InsideClass::outClass();}
break;
case 61:
#line 305 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("La herencia debe ir al final de la declaracion de la clase");}
break;
case 62:
#line 308 ".\Gramaticas\gramaticaLenguaje.y"
{ if ((!classInFunction(yyvsp[0])) && !classInClass(yyvsp[0])){
                            if (noReDeclarada(yyvsp[0], "Clase")){
                                string name =  TablaDeSimbolos::changeKey(yyvsp[0]);
                                TablaDeSimbolos::setUso(name,"Clase");
                                TablaDeSimbolos::inicNivelHer(name);
                                InsideClass::inClass(name);
                            } else {
                                InsideClass::inClass(yyvsp[0]);
                            }
                        }
                      }
break;
case 63:
#line 321 ".\Gramaticas\gramaticaLenguaje.y"
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
case 64:
#line 332 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = EstructuraTercetos::nroSigTerceto();EstructuraTercetos::addTerceto(yyvsp[-1],yyvsp[-2],yyvsp[0]);}
break;
case 65:
#line 335 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "+"); }
break;
case 66:
#line 336 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "-"); }
break;
case 67:
#line 337 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 68:
#line 338 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Expresion no puede ir entre parentesis");}
break;
case 69:
#line 341 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "*"); }
break;
case 70:
#line 342 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "/"); }
break;
case 71:
#line 343 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 72:
#line 346 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = stepsFactor(yyvsp[0]);}
break;
case 73:
#line 347 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 74:
#line 348 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = stepsFactor(yyvsp[-1], true);}
break;
case 75:
#line 351 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "==";}
break;
case 76:
#line 352 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "!!";}
break;
case 77:
#line 353 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = ">=";}
break;
case 78:
#line 354 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "<=";}
break;
case 79:
#line 355 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "<";}
break;
case 80:
#line 356 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = ">";}
break;
case 81:
#line 359 ".\Gramaticas\gramaticaLenguaje.y"
{chequearRangoSHORT(yyvsp[0]); yyval = yyvsp[0];}
break;
case 82:
#line 360 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = "-"+yyvsp[0];}
break;
case 83:
#line 361 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearPositivos(yyvsp[0]); yyval = yyvsp[0];}
break;
case 84:
#line 362 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = "-"+yyvsp[0];}
break;
case 85:
#line 363 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 86:
#line 364 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Una constante ULONG no puede ser negativa");}
break;
case 87:
#line 367 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="SHORT";}
break;
case 88:
#line 368 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="ULONG";}
break;
case 89:
#line 369 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="FLOAT";}
break;
case 90:
#line 372 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::addTerceto("Print",yyvsp[0],"");}
break;
case 92:
#line 378 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::addTerceto("Return","","");}
break;
#line 1414 "y.tab.c"
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
