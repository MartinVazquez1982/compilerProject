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
    6,   14,   15,   17,   17,   13,   18,   18,    5,   20,
   20,   21,   21,   22,   12,   12,   24,    9,    9,    9,
    9,    9,   27,   10,   10,   28,   26,   26,   26,   26,
   26,   25,   25,   25,   25,    7,    7,   30,   31,   29,
   19,   19,   19,   19,   33,   33,   33,   34,   34,   34,
   32,   32,   32,   32,   32,   32,   35,   35,   35,   35,
   35,   35,   16,   16,   16,   11,   36,   23,
};
short yylen[] = {                                         2,
    3,    2,    1,    2,    1,    2,    2,    1,    1,    1,
    1,    3,    2,    2,    1,    1,    1,    1,    1,    1,
    1,    2,    2,    3,    1,    3,    3,    1,    4,    5,
    4,    2,    1,    2,    3,    4,    1,    6,    4,    3,
    5,    5,    1,    4,    3,    1,    3,    4,    2,    1,
    2,    3,    2,    2,    1,    4,    5,    2,    2,    3,
    3,    3,    1,    3,    3,    3,    1,    1,    1,    2,
    1,    1,    1,    1,    1,    1,    1,    2,    1,    2,
    1,    2,    1,    1,    1,    2,    1,    2,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,   83,   84,   85,   46,    0,    0,
    8,    0,    0,    5,    0,    0,    9,   10,   11,   15,
   16,   17,   18,   19,   20,   21,    0,    0,    0,    0,
    0,   77,   81,   79,   28,    0,    0,    0,    0,    0,
    0,    0,   67,   69,   87,   86,   58,    0,   25,    0,
    2,    0,    4,    6,    7,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   78,   82,   80,   70,   71,
   72,   73,   74,    0,    0,   75,   76,    0,   43,   40,
    0,    0,    0,   50,    0,    0,   54,    0,    0,    0,
    0,    1,    0,   27,   35,    0,    0,    0,    0,   33,
    0,    0,    0,   64,   52,    0,    0,    0,   88,   51,
    0,    0,    0,   49,   39,    0,    0,   65,   66,   31,
    0,    0,   24,   36,   32,   29,   44,    0,   56,    0,
   14,   13,   47,    0,    0,   41,    0,   42,   34,   30,
   59,   57,   12,   48,   38,
};
short yydgoto[] = {                                      12,
   13,   14,   15,   16,   17,   18,   19,  113,   20,   21,
   22,   23,   24,   25,   26,   27,   50,   28,   39,   29,
   99,  122,   84,   97,   40,   85,   86,   30,   41,   31,
  130,   78,   42,   43,   44,   46,
};
short yysindex[] = {                                     74,
   -9, -268, -262, -260,    0,    0,    0,    0, -250,   84,
    0,    0,  130,    0,  -10,   -6,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -250,   -7,  -83,   -9,
  -73,    0,    0,    0,    0,   13, -167,  -14,   29, -105,
   11,   -5,    0,    0,    0,    0,    0,   20,    0,    5,
    0,  102,    0,    0,    0,    5,   13, -210,  -31,   55,
 -189,  130,   13,  100,   39,    0,    0,    0,    0,    0,
    0,    0,    0,   53,   53,    0,    0,   13,    0,    0,
   40,  151,   42,    0, -166,  144,    0,   53,   53,  -30,
 -182,    0,  -15,    0,    0,  -15,   62,   55,  -12,    0,
  144,  120,   38,    0,    0,   -5,   -5,  -15,    0,    0,
   70,   72,  -70,    0,    0, -110, -142,    0,    0,    0,
 -158,   79,    0,    0,    0,    0,    0,  -28,    0,   -4,
    0,    0,    0,   78,   -2,    0, -135,    0,    0,    0,
    0,    0,    0,    0,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,   16,    0,
    0,    0,  125,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -41,    0,    0,
  -78,  -19,    0,    0,    0,    0,    0,    0,    0,   83,
    0,    0,    0,    0,    0,   85,    0,    0,    0,    0,
    0,    0,    0,    0,  -74,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   86,    0,    0,   90,    0,    0,    0,    0,
   88,    0,    0,    0,    0,    3,   25,   47,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   16,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
   -3,   -1,   51,  -11,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   44,  108,  373,   37,    0,
    0,    0,  -37,    0,  106,  -81,   52,    0,  103,    0,
    0,    0,   35,   23,    0,    0,
};
#define YYTABLESIZE 462
short yytable[] = {                                      68,
   68,   68,   68,   68,  117,   68,   52,   45,   63,   95,
  120,   53,   82,   37,   47,  141,   48,   82,   68,  127,
   68,   63,  100,   63,   63,   63,   49,   74,   83,   75,
   36,   58,   59,   54,  137,   37,   88,   55,   58,   60,
   63,   89,   63,   61,   55,   61,   61,   61,   53,   62,
   53,   87,   63,   57,  133,   28,   98,   37,  102,   90,
  125,   28,   61,   91,   61,   62,   94,   62,   62,   62,
  112,   74,   64,   75,   83,  135,   28,  101,  104,  105,
   74,   68,   75,  109,   62,  114,   62,   60,   76,   83,
   77,   79,  115,   93,  123,   96,   53,   37,   11,  103,
   53,  134,  124,   63,   83,   66,   67,   68,  106,  107,
  118,  119,  126,  131,  108,  132,  138,   11,  139,  140,
  142,  143,  144,  145,    3,   61,   23,   11,   22,   26,
   37,   45,  111,  121,   56,   61,  116,    0,   65,    0,
  104,    0,   74,    0,   75,   11,    1,   62,  136,    2,
    0,    1,   79,   80,    2,    8,    0,    0,    0,   76,
    8,   77,    0,   11,    0,    0,   35,   81,    0,   60,
    0,   35,   81,   11,    0,    0,    0,    0,   55,   55,
   55,   55,   53,   53,   53,   53,    1,   55,   55,    2,
    0,   53,   53,    0,    0,    8,   10,    0,   55,   55,
    0,    0,   53,   53,    0,    0,   35,   81,   51,    0,
    0,    0,    0,    0,    0,   68,   68,   68,   68,    0,
    0,    0,    0,    0,   68,   68,   92,   68,   68,   68,
   68,    0,    5,    6,    7,   68,   68,   63,   63,   63,
   63,   32,   33,   34,  129,   35,   63,   63,   49,   63,
   63,   63,   63,   69,    0,    0,    0,   63,   63,   61,
   61,   61,   61,   32,   33,   34,   82,   35,   61,   61,
    0,   61,   61,   61,   61,  110,    0,    0,    0,   61,
   61,   62,   62,   62,   62,   32,   33,   34,    0,   35,
   62,   62,    0,   62,   62,   62,   62,   70,   71,   72,
   73,   62,   62,   60,   60,   60,   60,    0,    0,    0,
    0,    1,   60,   60,    2,    3,    4,    5,    6,    7,
    8,    0,    0,   60,   60,   32,   33,   34,    0,   35,
    1,    9,   81,    2,    3,    4,    5,    6,    7,    8,
    1,    0,    0,    2,    3,    4,    5,    6,    7,    8,
    9,    0,    0,    0,    0,    0,    0,    0,    1,    0,
    9,    2,    3,    4,    5,    6,    7,    8,   70,   71,
   72,   73,    0,   38,    0,    0,    1,    0,    9,    2,
    3,    4,    5,    6,    7,    8,    1,    0,    0,    2,
    3,    4,    5,    6,    7,    8,  128,    0,    0,    0,
    1,    0,   38,    2,    0,    0,    9,    1,   38,    8,
    2,    3,    4,    5,    6,    7,    8,    0,    0,    0,
   35,   81,    0,    0,    0,    0,    0,    9,    0,   38,
    0,   38,    0,    0,    0,   38,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   38,   38,    0,    0,
   38,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   38,   38,
};
short yycheck[] = {                                      41,
   42,   43,   44,   45,   86,   47,   10,  276,   40,   41,
   41,   13,  123,   45,  277,   44,  277,  123,   60,  101,
   62,   41,   60,   43,   44,   45,  277,   43,   40,   45,
   40,   46,   40,   44,  116,   45,   42,   44,   46,  123,
   60,   47,   62,   41,  123,   43,   44,   45,  123,  123,
   52,   41,   40,   61,  125,   40,   60,   45,   62,   40,
   98,   46,   60,   59,   62,   41,  277,   43,   44,   45,
   82,   43,   36,   45,   86,  113,   61,  267,   41,   41,
   43,  123,   45,   44,   60,   44,   62,   41,   60,  101,
   62,  258,  259,   57,  277,   59,   98,   45,   44,   63,
  102,  113,   41,  123,  116,  273,  274,  275,   74,   75,
   88,   89,  125,   44,   78,   44,  259,   44,  277,   41,
  125,   44,  125,  259,    0,  123,   44,   44,   44,   44,
   41,   44,   82,   90,   27,   30,   85,   -1,   36,   -1,
   41,   -1,   43,   -1,   45,   44,  257,  123,  259,  260,
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
  277,  278,   -1,   -1,   -1,   -1,   -1,  277,   -1,   57,
   -1,   59,   -1,   -1,   -1,   63,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   74,   75,   -1,   -1,
   78,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   88,   89,
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
"objectDeclaration : ID variableList",
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
#line 319 ".\Gramaticas\gramaticaLenguaje.y"

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
    if (uso == "Var" || uso == "Funcion" || uso == "Clase"){
    	yyerror(uso + " " + decl + " se encuentra Re-declarada como " + usoOriginal);
    	return false;
    }
    return true;
}
#line 556 "y.tab.c"
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
                                   }
break;
case 24:
#line 70 ".\Gramaticas\gramaticaLenguaje.y"
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
case 25:
#line 79 ".\Gramaticas\gramaticaLenguaje.y"
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
case 26:
#line 90 ".\Gramaticas\gramaticaLenguaje.y"
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
case 27:
#line 109 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[-2] + "." + yyvsp[0];}
break;
case 28:
#line 110 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 29:
#line 113 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Funcion");Ambito::del();EstructuraTercetos::setAmbito(Ambito::get());}
break;
case 30:
#line 116 ".\Gramaticas\gramaticaLenguaje.y"
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
case 31:
#line 128 ".\Gramaticas\gramaticaLenguaje.y"
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
case 33:
#line 141 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Funcion vacia");}
break;
case 34:
#line 144 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0]; TablaDeSimbolos::setUso(yyvsp[0], "Parametro Formal"); setearTipos(yyvsp[-1],yyvsp[0]);}
break;
case 35:
#line 147 ".\Gramaticas\gramaticaLenguaje.y"
{
                            string name;
                            if (ChequearDeclaracion(partEndID(yyvsp[-2]),name,"Funcion")){
                                EstructuraTercetos::addTerceto("Call",partEndID(yyvsp[-2]),"");
                            }
                            }
break;
case 36:
#line 153 ".\Gramaticas\gramaticaLenguaje.y"
{
                                            string name;
                                            if (ChequearDeclaracion(partEndID(yyvsp[-3]),name,"Funcion")){
                                                EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(partEndID(yyvsp[-3])),yyvsp[-1]);
                                                EstructuraTercetos::addTerceto("Call",partEndID(yyvsp[-3]),"");
                                            }
                                         }
break;
case 38:
#line 165 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");jumpEndIf();}
break;
case 39:
#line 166 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");jumpEndIf();}
break;
case 40:
#line 167 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");jumpEndIf();}
break;
case 41:
#line 168 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Else vacio");yymenssage("IF");jumpEndIf();}
break;
case 42:
#line 169 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");jumpEndIf();}
break;
case 43:
#line 172 ".\Gramaticas\gramaticaLenguaje.y"
{jumpEndThen();}
break;
case 44:
#line 175 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("While");jumpEndWhile();}
break;
case 45:
#line 176 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("While vacio");yymenssage("While");jumpEndWhile();}
break;
case 46:
#line 179 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::apilar();EstructuraTercetos::addLabel();}
break;
case 51:
#line 186 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Bloque vacio");}
break;
case 52:
#line 189 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",yyvsp[-1],"");}
break;
case 53:
#line 190 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta segundo parentesis en la condicion");}
break;
case 54:
#line 191 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta primer parentesis en la condicion");}
break;
case 55:
#line 192 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Faltan  parentesis en la condicion");}
break;
case 56:
#line 195 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Clase");InsideClass::outClass();}
break;
case 57:
#line 196 ".\Gramaticas\gramaticaLenguaje.y"
{
                                                 yymenssage("Clase");
                                                 TablaDeSimbolos::setHerencia(InsideClass::getClass(),yyvsp[-1]);
                                                 InsideClass::outClass();
                                                 }
break;
case 58:
#line 203 ".\Gramaticas\gramaticaLenguaje.y"
{if (chequearReDec(yyvsp[0], "Clase")){
                        string name =  TablaDeSimbolos::changeKey(yyvsp[0]);
                        TablaDeSimbolos::setUso(name,"Clase");
                        InsideClass::inClass(name);
                        }}
break;
case 59:
#line 210 ".\Gramaticas\gramaticaLenguaje.y"
{ string name = "<NoExiste>";
                ChequearDeclaracion(yyvsp[-1],name,"Clase");
                yyval = name;
                }
break;
case 60:
#line 216 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = EstructuraTercetos::nroSigTerceto();EstructuraTercetos::addTerceto(yyvsp[-1],yyvsp[-2],yyvsp[0]);}
break;
case 61:
#line 219 ".\Gramaticas\gramaticaLenguaje.y"
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
case 62:
#line 231 ".\Gramaticas\gramaticaLenguaje.y"
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
case 63:
#line 243 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 64:
#line 244 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Expresion no puede ir entre parentesis");}
break;
case 65:
#line 247 ".\Gramaticas\gramaticaLenguaje.y"
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
case 66:
#line 259 ".\Gramaticas\gramaticaLenguaje.y"
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
case 67:
#line 272 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 68:
#line 275 ".\Gramaticas\gramaticaLenguaje.y"
{  string varNombre = "<NoExiste>";
                            ChequearDeclaracion(partEndID(yyvsp[0]),varNombre,"Var");
                            yyval = varNombre;}
break;
case 69:
#line 278 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 70:
#line 279 ".\Gramaticas\gramaticaLenguaje.y"
{string varNombre = "<NoExiste>";
                          ChequearDeclaracion(partEndID(yyvsp[-1]),varNombre,"Var");
                          yyval = EstructuraTercetos::nroSigTerceto();
                          /* Si se usa el valor viejo, reemplazar nroSigTerceto por varNombre*/
                          EstructuraTercetos::addTerceto("-",varNombre,TablaDeSimbolos::getUno(varNombre),TablaDeSimbolos::getTipo(varNombre));
                          EstructuraTercetos::addTerceto("=",varNombre,EstructuraTercetos::nroActualTerceto());
                         }
break;
case 71:
#line 288 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "==";}
break;
case 72:
#line 289 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "!!";}
break;
case 73:
#line 290 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = ">=";}
break;
case 74:
#line 291 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "<=";}
break;
case 75:
#line 292 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "<";}
break;
case 76:
#line 293 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = ">";}
break;
case 77:
#line 296 ".\Gramaticas\gramaticaLenguaje.y"
{chequearRangoSHORT(yyvsp[0]); yyval = yyvsp[0];}
break;
case 78:
#line 297 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = yyvsp[0];}
break;
case 79:
#line 298 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearPositivos(yyvsp[0]); yyval = yyvsp[0];}
break;
case 80:
#line 299 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = yyvsp[0];}
break;
case 81:
#line 300 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 82:
#line 301 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Una constante ULONG no puede ser negativa");}
break;
case 83:
#line 304 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="SHORT";}
break;
case 84:
#line 305 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="ULONG";}
break;
case 85:
#line 306 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="FLOAT";}
break;
case 86:
#line 309 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::addTerceto("Print",yyvsp[0],"");}
break;
case 88:
#line 315 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::addTerceto("Return","","");}
break;
#line 1082 "y.tab.c"
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
