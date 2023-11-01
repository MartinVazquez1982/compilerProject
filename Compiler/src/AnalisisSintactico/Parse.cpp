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
   31,   32,   30,   20,   20,   20,   20,   34,   34,   34,
   35,   35,   35,   33,   33,   33,   33,   33,   33,   36,
   36,   36,   36,   36,   36,   16,   16,   16,   11,   37,
   24,
};
short yylen[] = {                                         2,
    3,    2,    1,    2,    1,    2,    2,    1,    1,    1,
    1,    3,    2,    2,    1,    1,    1,    1,    1,    1,
    1,    2,    2,    3,    1,    3,    1,    3,    3,    1,
    4,    5,    4,    2,    1,    2,    3,    4,    1,    6,
    4,    3,    5,    5,    1,    4,    3,    1,    3,    4,
    2,    1,    2,    3,    2,    2,    1,    4,    5,    1,
    2,    2,    3,    3,    3,    1,    3,    3,    3,    1,
    1,    1,    2,    1,    1,    1,    1,    1,    1,    1,
    2,    1,    2,    1,    2,    1,    1,    1,    2,    1,
    2,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,   86,   87,   88,   48,    0,    0,
    8,    0,    0,    5,    0,    0,    9,   10,   11,   15,
   16,   17,   18,   19,   20,   21,    0,    0,    0,    0,
    0,   80,   84,   82,   30,    0,    0,    0,    0,    0,
    0,    0,   70,   72,   90,   89,   61,    0,   25,    0,
    2,    0,    4,    6,    7,   27,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   81,   85,   83,   73,
   74,   75,   76,   77,    0,    0,   78,   79,    0,   45,
   42,    0,    0,    0,   52,    0,    0,   56,    0,    0,
    0,    0,    1,    0,    0,   29,   37,    0,    0,    0,
    0,   35,    0,    0,    0,   67,   54,    0,    0,    0,
   91,   53,    0,    0,    0,   51,   41,    0,    0,   68,
   69,   33,    0,    0,   24,   26,   38,   34,   31,   46,
    0,   58,    0,   14,   13,   49,    0,    0,   43,    0,
   44,   36,   32,   62,   59,   12,   50,   40,
};
short yydgoto[] = {                                      12,
   13,   14,   15,   16,   17,   18,   19,  115,   20,   21,
   22,   23,   24,   25,   26,   27,   57,   50,   28,   39,
   29,  101,  124,   85,   99,   40,   86,   87,   30,   41,
   31,  133,   79,   42,   43,   44,   46,
};
short yysindex[] = {                                     74,
   -9, -271, -257, -247,    0,    0,    0,    0, -238,   84,
    0,    0,  130,    0,   -7,    7,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -220,   33,  -56,   -9,
  -45,    0,    0,    0,    0,   13, -240,  -14,   29, -105,
   42,  -35,    0,    0,    0,    0,    0,   46,    0,   34,
    0,  102,    0,    0,    0,    0,   37,   13, -174,  -31,
   55, -158,  130,   13,  100,   69,    0,    0,    0,    0,
    0,    0,    0,    0,   53,   53,    0,    0,   13,    0,
    0,   67,  151,   70,    0, -183,  144,    0,   53,   53,
  -30, -164,    0, -162,  -16,    0,    0,  -16,   75,   55,
   -5,    0,  144,  120,   -3,    0,    0,  -35,  -35,  -16,
    0,    0,   73,   77,  -70,    0,    0, -110, -140,    0,
    0,    0, -155,   82,    0,    0,    0,    0,    0,    0,
  -28,    0,   -1,    0,    0,    0,   81,    4,    0, -132,
    0,    0,    0,    0,    0,    0,    0,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,   44,    0,
    0,    0,  131,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   86,    0,    0,    0,    0,    0,    0,  -41,    0,    0,
  -78,  -19,    0,    0,    0,    0,    0,    0,    0,   88,
    0,    0,    0,    0,    0,    0,   89,    0,    0,    0,
    0,    0,    0,    0,    0,  -74,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   90,    0,    0,   94,    0,    0,
    0,    0,   92,    0,    0,    0,    0,    3,   25,   47,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   44,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
   -2,    2,   54,  -23,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   48,    0,    0,  373,   -8,
    0,    0,    0,  -38,    0,  108,   -6,   56,    0,  104,
    0,    0,    0,   32,   11,    0,    0,
};
#define YYTABLESIZE 463
short yytable[] = {                                      71,
   71,   71,   71,   71,   45,   71,   89,   52,   64,   97,
  122,   90,   83,   37,   53,  144,   84,   83,   71,   47,
   71,   66,  102,   66,   66,   66,   75,   65,   76,   48,
   36,   59,   67,   68,   69,   37,   54,  106,   49,   75,
   66,   76,   66,   64,   57,   64,   64,   64,   55,   95,
   55,   98,   64,   53,  136,  105,   56,   37,  100,  114,
  104,  128,   64,   84,   64,   65,   61,   65,   65,   65,
  110,   75,   60,   76,   80,  117,  138,   63,   59,   84,
  119,   71,   88,   30,   65,   91,   65,   63,   77,   30,
   78,  137,   92,   58,   84,   94,  130,   37,   11,  120,
  121,   53,   96,   66,   30,   53,  108,  109,  103,  107,
  111,  140,  125,  116,  126,  127,  134,   11,  141,  129,
  135,  142,  143,  145,  146,   64,  148,   11,  147,   60,
    3,   23,   22,   28,   39,   47,  113,   62,  123,   66,
  106,  118,   75,    0,   76,   11,    1,   65,  139,    2,
    0,    1,   80,   81,    2,    8,    0,    0,    0,   77,
    8,   78,    0,   11,    0,    0,   35,   82,    0,   63,
    0,   35,   82,   11,    0,    0,    0,    0,   57,   57,
   57,   57,   55,   55,   55,   55,    1,   57,   57,    2,
    0,   55,   55,    0,    0,    8,   10,    0,   57,   57,
    0,    0,   55,   55,    0,    0,   35,   82,   51,    0,
    0,    0,    0,    0,    0,   71,   71,   71,   71,    0,
    0,    0,    0,    0,   71,   71,   93,   71,   71,   71,
   71,    0,    5,    6,    7,   71,   71,   66,   66,   66,
   66,   32,   33,   34,  132,   35,   66,   66,   49,   66,
   66,   66,   66,   70,    0,    0,    0,   66,   66,   64,
   64,   64,   64,   32,   33,   34,   83,   35,   64,   64,
    0,   64,   64,   64,   64,  112,    0,    0,    0,   64,
   64,   65,   65,   65,   65,   32,   33,   34,    0,   35,
   65,   65,    0,   65,   65,   65,   65,   71,   72,   73,
   74,   65,   65,   63,   63,   63,   63,    0,    0,    0,
    0,    1,   63,   63,    2,    3,    4,    5,    6,    7,
    8,    0,    0,   63,   63,   32,   33,   34,    0,   35,
    1,    9,   82,    2,    3,    4,    5,    6,    7,    8,
    1,    0,    0,    2,    3,    4,    5,    6,    7,    8,
    9,    0,    0,    0,    0,    0,    0,    0,    1,    0,
    9,    2,    3,    4,    5,    6,    7,    8,   71,   72,
   73,   74,    0,   38,    0,    0,    1,    0,    9,    2,
    3,    4,    5,    6,    7,    8,    1,    0,    0,    2,
    3,    4,    5,    6,    7,    8,  131,    0,    0,    0,
    1,    0,   38,    2,    0,    0,    9,    1,   38,    8,
    2,    3,    4,    5,    6,    7,    8,    0,    0,    0,
   35,   82,    0,    0,    0,    0,    0,    9,    0,    0,
   38,    0,   38,    0,    0,    0,   38,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   38,   38,    0,
    0,   38,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   38,   38,
};
short yycheck[] = {                                      41,
   42,   43,   44,   45,  276,   47,   42,   10,   40,   41,
   41,   47,  123,   45,   13,   44,   40,  123,   60,  277,
   62,   41,   61,   43,   44,   45,   43,   36,   45,  277,
   40,   46,  273,  274,  275,   45,   44,   41,  277,   43,
   60,   45,   62,   41,  123,   43,   44,   45,  123,   58,
   44,   60,   40,   52,  125,   64,  277,   45,   61,   83,
   63,  100,   60,   87,   62,   41,  123,   43,   44,   45,
   79,   43,   40,   45,  258,  259,  115,  123,   46,  103,
   87,  123,   41,   40,   60,   40,   62,   41,   60,   46,
   62,  115,   59,   61,  118,   59,  103,   45,   44,   89,
   90,  100,  277,  123,   61,  104,   75,   76,  267,   41,
   44,  118,  277,   44,  277,   41,   44,   44,  259,  125,
   44,  277,   41,  125,   44,  123,  259,   44,  125,   44,
    0,   44,   44,   44,   41,   44,   83,   30,   91,   36,
   41,   86,   43,   -1,   45,   44,  257,  123,  259,  260,
   -1,  257,  258,  259,  260,  266,   -1,   -1,   -1,   60,
  266,   62,   -1,   44,   -1,   -1,  277,  278,   -1,  123,
   -1,  277,  278,   44,   -1,   -1,   -1,   -1,  257,  258,
  259,  260,  257,  258,  259,  260,  257,  266,  267,  260,
   -1,  266,  267,   -1,   -1,  266,  123,   -1,  277,  278,
   -1,   -1,  277,  278,   -1,   -1,  277,  278,  125,   -1,
   -1,   -1,   -1,   -1,   -1,  257,  258,  259,  260,   -1,
   -1,   -1,   -1,   -1,  266,  267,  125,  269,  270,  271,
  272,   -1,  263,  264,  265,  277,  278,  257,  258,  259,
  260,  273,  274,  275,  125,  277,  266,  267,  277,  269,
  270,  271,  272,  268,   -1,   -1,   -1,  277,  278,  257,
  258,  259,  260,  273,  274,  275,  123,  277,  266,  267,
   -1,  269,  270,  271,  272,  125,   -1,   -1,   -1,  277,
  278,  257,  258,  259,  260,  273,  274,  275,   -1,  277,
  266,  267,   -1,  269,  270,  271,  272,  269,  270,  271,
  272,  277,  278,  257,  258,  259,  260,   -1,   -1,   -1,
   -1,  257,  266,  267,  260,  261,  262,  263,  264,  265,
  266,   -1,   -1,  277,  278,  273,  274,  275,   -1,  277,
  257,  277,  278,  260,  261,  262,  263,  264,  265,  266,
  257,   -1,   -1,  260,  261,  262,  263,  264,  265,  266,
  277,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,   -1,
  277,  260,  261,  262,  263,  264,  265,  266,  269,  270,
  271,  272,   -1,    1,   -1,   -1,  257,   -1,  277,  260,
  261,  262,  263,  264,  265,  266,  257,   -1,   -1,  260,
  261,  262,  263,  264,  265,  266,  277,   -1,   -1,   -1,
  257,   -1,   30,  260,   -1,   -1,  277,  257,   36,  266,
  260,  261,  262,  263,  264,  265,  266,   -1,   -1,   -1,
  277,  278,   -1,   -1,   -1,   -1,   -1,  277,   -1,   -1,
   58,   -1,   60,   -1,   -1,   -1,   64,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   75,   76,   -1,
   -1,   79,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   89,   90,
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
#line 355 ".\Gramaticas\gramaticaLenguaje.y"

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

bool chequearReDec(string decl, string usoOriginal){
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

void claseSinimplementar(string clase){
    string name = clase;
    if (TablaDeSimbolos::getForwDecl(name) != -1){
        yyerror("Clase " + clase + " se encuentra re-declarada");
    } else {
        TablaDeSimbolos::inicForwDecl(name);
    }
}
#line 572 "y.tab.c"
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
                                    string name;
                                    ChequearDeclaracion(partEndID(yyvsp[-1]), name, "Clase");
                                    setearTipos(yyvsp[-1],yyvsp[0]);
                                    TablaDeSimbolos::del(yyvsp[-1]); /*El ID al declarar un objeto se agrega automaticamente por error en el lexico*/
                                   }
break;
case 24:
#line 72 ".\Gramaticas\gramaticaLenguaje.y"
{ if (chequearReDec(yyvsp[0], "Objeto")) {
                                        string key = TablaDeSimbolos::changeKey(yyvsp[0]);
                                        TablaDeSimbolos::setUso(key, "Obj");
                                        yyval=yyvsp[-2]+"&"+key;
                                        if (InsideClass::insideClass()){
                                            TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                        }
                                    }
                              }
break;
case 25:
#line 81 ".\Gramaticas\gramaticaLenguaje.y"
{ if (chequearReDec(yyvsp[0], "Objeto")) {
                    string key = TablaDeSimbolos::changeKey(yyvsp[0]);
                    TablaDeSimbolos::setUso(key, "Obj");
                    yyval=key;
                    if (InsideClass::insideClass()){
                        TablaDeSimbolos::setClass(key,InsideClass::getClass());
                    }
                }
                }
break;
case 26:
#line 92 ".\Gramaticas\gramaticaLenguaje.y"
{ if (chequearReDec(yyvsp[0], "Variable")) {
                                        string key = TablaDeSimbolos::changeKey(yyvsp[0]);
                                        TablaDeSimbolos::setUso(key, "Var");
                                        yyval=yyvsp[-2]+"&"+key;
                                        if (InsideClass::insideClass()){
                                            TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                        }
                                    }
                                  }
break;
case 27:
#line 101 ".\Gramaticas\gramaticaLenguaje.y"
{if (chequearReDec(yyvsp[0], "Variable")){
                    string key = TablaDeSimbolos::changeKey(yyvsp[0]);
                    TablaDeSimbolos::setUso(key, "Var");
                    yyval=key;
                    if (InsideClass::insideClass()){
                        TablaDeSimbolos::setClass(key,InsideClass::getClass());
                    }
                    }
                  }
break;
case 28:
#line 112 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Asignacion");
                                    string nomEncontrada;
                                    yyval = EstructuraTercetos::nroActualTerceto();
                                    if (ChequearDeclaracion(partEndID(yyvsp[-2]), nomEncontrada, "Var")){
                                        string tipo;
                                        bool conversion = asignar(nomEncontrada,yyvsp[0],tipo);
                                        if (!conversion){
                                            if (yyvsp[0][0] == '['){
                                                EstructuraTercetos::addTerceto("=",nomEncontrada,yyval);
                                            } else {
                                                EstructuraTercetos::addTerceto("=",nomEncontrada,yyvsp[0],tipo);
                                            }
                                        }else{
                                            EstructuraTercetos::addTerceto("=",nomEncontrada,yyval,tipo);
                                        }
                                    }
                                    
                                    }
break;
case 29:
#line 132 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[-2] + "." + yyvsp[0];}
break;
case 30:
#line 133 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 31:
#line 136 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Funcion");Ambito::del();EstructuraTercetos::setAmbito(Ambito::get());}
break;
case 32:
#line 139 ".\Gramaticas\gramaticaLenguaje.y"
{   if (chequearReDec(yyvsp[-3], "Funcion")) {
                                                    string key = TablaDeSimbolos::changeKey(yyvsp[-3]);
                                                    TablaDeSimbolos::setUso(key, "Funcion");
                                                    Ambito::add(yyvsp[-3]);
                                                    if (InsideClass::insideClass()){
                                                        TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                                    }
                                                    string keyFormal = TablaDeSimbolos::changeKey(yyvsp[-1]);
                                                    TablaDeSimbolos::setParametroFormal(key,keyFormal);
                                                    EstructuraTercetos::setAmbito(Ambito::get());
                                                }
                                            }
break;
case 33:
#line 151 ".\Gramaticas\gramaticaLenguaje.y"
{   if (chequearReDec(yyvsp[-2], "Funcion")) {
                                        string key = TablaDeSimbolos::changeKey(yyvsp[-2]);
                                        TablaDeSimbolos::setUso(key, "Funcion");
                                        Ambito::add(yyvsp[-2]);
                                        if (InsideClass::insideClass()){
                                            TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                        }
                                        EstructuraTercetos::setAmbito(Ambito::get());
                                    }
                                }
break;
case 35:
#line 164 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Funcion vacia");}
break;
case 36:
#line 167 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0]; TablaDeSimbolos::setUso(yyvsp[0], "Parametro Formal"); setearTipos(yyvsp[-1],yyvsp[0]);}
break;
case 37:
#line 170 ".\Gramaticas\gramaticaLenguaje.y"
{
                            string name;
                            if (ChequearDeclaracion(partEndID(yyvsp[-2]),name,"Funcion")){
                                EstructuraTercetos::addTerceto("Call",partEndID(yyvsp[-2]),"");
                            }
                            }
break;
case 38:
#line 176 ".\Gramaticas\gramaticaLenguaje.y"
{
                                            string name;
                                            if (ChequearDeclaracion(partEndID(yyvsp[-3]),name,"Funcion")){
                                                EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(partEndID(yyvsp[-3])),yyvsp[-1]);
                                                EstructuraTercetos::addTerceto("Call",partEndID(yyvsp[-3]),"");
                                            }
                                         }
break;
case 40:
#line 188 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");jumpEndIf();}
break;
case 41:
#line 189 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");jumpEndIf();}
break;
case 42:
#line 190 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");jumpEndIf();}
break;
case 43:
#line 191 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Else vacio");yymenssage("IF");jumpEndIf();}
break;
case 44:
#line 192 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");jumpEndIf();}
break;
case 45:
#line 195 ".\Gramaticas\gramaticaLenguaje.y"
{jumpEndThen();}
break;
case 46:
#line 198 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("While");jumpEndWhile();}
break;
case 47:
#line 199 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("While vacio");yymenssage("While");jumpEndWhile();}
break;
case 48:
#line 202 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::apilar();EstructuraTercetos::addLabel();}
break;
case 53:
#line 209 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Bloque vacio");}
break;
case 54:
#line 212 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",yyvsp[-1],"");}
break;
case 55:
#line 213 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta segundo parentesis en la condicion");}
break;
case 56:
#line 214 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta primer parentesis en la condicion");}
break;
case 57:
#line 215 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Faltan  parentesis en la condicion");}
break;
case 58:
#line 218 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Clase");TablaDeSimbolos::forwDeclComp(InsideClass::getClass());InsideClass::outClass();}
break;
case 59:
#line 219 ".\Gramaticas\gramaticaLenguaje.y"
{
                                                 yymenssage("Clase");
                                                 TablaDeSimbolos::setHerencia(InsideClass::getClass(),yyvsp[-1]);
                                                 if (TablaDeSimbolos::nivelHerencia(InsideClass::getClass()) > 3){
                                                    yyerror("La clase ha excedido el nivel de herencia (maximo nivel = 3)");
                                                 }
                                                 TablaDeSimbolos::forwDeclComp(InsideClass::getClass());
                                                 InsideClass::outClass();
                                                 }
break;
case 60:
#line 228 ".\Gramaticas\gramaticaLenguaje.y"
{claseSinimplementar(InsideClass::getClass());InsideClass::outClass();}
break;
case 61:
#line 231 ".\Gramaticas\gramaticaLenguaje.y"
{if (chequearReDec(yyvsp[0], "Clase")){
                            string name =  TablaDeSimbolos::changeKey(yyvsp[0]);
                            TablaDeSimbolos::setUso(name,"Clase");
                            TablaDeSimbolos::inicNivelHer(name);
                            InsideClass::inClass(name);
                        } else {
                            InsideClass::inClass(yyvsp[0]+Ambito::get());
                        }}
break;
case 62:
#line 241 ".\Gramaticas\gramaticaLenguaje.y"
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
case 63:
#line 252 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = EstructuraTercetos::nroSigTerceto();EstructuraTercetos::addTerceto(yyvsp[-1],yyvsp[-2],yyvsp[0]);}
break;
case 64:
#line 255 ".\Gramaticas\gramaticaLenguaje.y"
{
                                    string op, tipo; /*Aca se almacena el operando a convertir en caso de ser necesario*/
                                    bool conversion = operar(yyvsp[-2],yyvsp[0],"+",op,tipo);
                                    yyval = EstructuraTercetos::nroSigTerceto();
                                    if (!conversion){
                                        EstructuraTercetos::addTerceto("+",yyvsp[-2],yyvsp[0],tipo);
                                    } else if (op == "op1") {
                                        EstructuraTercetos::addTerceto("+",EstructuraTercetos::nroActualTerceto(),yyvsp[0],tipo);
                                    } else {
                                        EstructuraTercetos::addTerceto("+",yyvsp[-2],EstructuraTercetos::nroActualTerceto(),tipo);
                                    }
                                  }
break;
case 65:
#line 267 ".\Gramaticas\gramaticaLenguaje.y"
{
                                    string op, tipo; /*Aca se almacena el operando a convertir en caso de ser necesario*/
                                    bool conversion = operar(yyvsp[-2],yyvsp[0],"-",op,tipo);
                                    yyval = EstructuraTercetos::nroSigTerceto();
                                    if (!conversion){
                                        EstructuraTercetos::addTerceto("-",yyvsp[-2],yyvsp[0],tipo);
                                    } else if (op == "op1") {
                                        EstructuraTercetos::addTerceto("-",EstructuraTercetos::nroActualTerceto(),yyvsp[0],tipo);
                                    } else {
                                        EstructuraTercetos::addTerceto("-",yyvsp[-2],EstructuraTercetos::nroActualTerceto(),tipo);
                                    }
                                  }
break;
case 66:
#line 279 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 67:
#line 280 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Expresion no puede ir entre parentesis");}
break;
case 68:
#line 283 ".\Gramaticas\gramaticaLenguaje.y"
{
                            string op, tipo; /*Aca se almacena el operando a convertir en caso de ser necesario*/
                            bool conversion = operar(yyvsp[-2],yyvsp[0],"*",op,tipo);
                            yyval = EstructuraTercetos::nroSigTerceto();
                            if (!conversion){
                                EstructuraTercetos::addTerceto("*",yyvsp[-2],yyvsp[0],tipo);
                            } else if (op == "op1") {
                                EstructuraTercetos::addTerceto("*",EstructuraTercetos::nroActualTerceto(),yyvsp[0],tipo);
                            } else {
                                EstructuraTercetos::addTerceto("*",yyvsp[-2],EstructuraTercetos::nroActualTerceto(),tipo);
                            }
                           }
break;
case 69:
#line 295 ".\Gramaticas\gramaticaLenguaje.y"
{ 
                            string op, tipo; /*Aca se almacena el operando a convertir en caso de ser necesario*/
                            bool conversion = operar(yyvsp[-2],yyvsp[0],"/",op,tipo);
                            yyval = EstructuraTercetos::nroSigTerceto();
                            if (!conversion){
                                EstructuraTercetos::addTerceto("/",yyvsp[-2],yyvsp[0],tipo);
                            } else if (op == "op1") {
                                EstructuraTercetos::addTerceto("/",EstructuraTercetos::nroActualTerceto(),yyvsp[0],tipo);
                            } else {
                                EstructuraTercetos::addTerceto("/",yyvsp[-2],EstructuraTercetos::nroActualTerceto(),tipo);
                            }
                            
                           }
break;
case 70:
#line 308 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 71:
#line 311 ".\Gramaticas\gramaticaLenguaje.y"
{  string varNombre = "<NoExiste>";
                            ChequearDeclaracion(partEndID(yyvsp[0]),varNombre,"Var");
                            yyval = varNombre;}
break;
case 72:
#line 314 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 73:
#line 315 ".\Gramaticas\gramaticaLenguaje.y"
{string varNombre = "<NoExiste>";
                          ChequearDeclaracion(partEndID(yyvsp[-1]),varNombre,"Var");
                          yyval = EstructuraTercetos::nroSigTerceto();
                          /* Si se usa el valor viejo, reemplazar nroSigTerceto por varNombre*/
                          EstructuraTercetos::addTerceto("-",varNombre,TablaDeSimbolos::getUno(varNombre),TablaDeSimbolos::getTipo(varNombre));
                          EstructuraTercetos::addTerceto("=",varNombre,EstructuraTercetos::nroActualTerceto());
                         }
break;
case 74:
#line 324 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "==";}
break;
case 75:
#line 325 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "!!";}
break;
case 76:
#line 326 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = ">=";}
break;
case 77:
#line 327 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "<=";}
break;
case 78:
#line 328 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "<";}
break;
case 79:
#line 329 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = ">";}
break;
case 80:
#line 332 ".\Gramaticas\gramaticaLenguaje.y"
{chequearRangoSHORT(yyvsp[0]); yyval = yyvsp[0];}
break;
case 81:
#line 333 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = yyvsp[0];}
break;
case 82:
#line 334 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearPositivos(yyvsp[0]); yyval = yyvsp[0];}
break;
case 83:
#line 335 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = yyvsp[0];}
break;
case 84:
#line 336 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 85:
#line 337 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Una constante ULONG no puede ser negativa");}
break;
case 86:
#line 340 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="SHORT";}
break;
case 87:
#line 341 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="ULONG";}
break;
case 88:
#line 342 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="FLOAT";}
break;
case 89:
#line 345 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::addTerceto("Print",yyvsp[0],"");}
break;
case 91:
#line 351 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::addTerceto("Return","","");}
break;
#line 1141 "y.tab.c"
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
