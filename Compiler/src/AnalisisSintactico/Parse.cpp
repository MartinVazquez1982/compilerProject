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

#define RESET   "\x1B[0m"
#define YELLOW  "\x1B[33m"
#define RED "\x1B[31m"
#define BLUE "\x1B[34m"

#line 23 "y.tab.c"
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
   26,   25,   25,   25,   25,    7,    7,   30,   29,   19,
   19,   19,   19,   32,   32,   32,   33,   33,   33,   31,
   31,   31,   31,   31,   31,   34,   34,   34,   34,   34,
   34,   16,   16,   16,   11,   35,   23,
};
short yylen[] = {                                         2,
    3,    2,    1,    2,    1,    2,    2,    1,    1,    1,
    1,    3,    2,    2,    1,    1,    1,    1,    1,    1,
    1,    2,    2,    3,    1,    3,    3,    1,    4,    5,
    4,    2,    1,    2,    3,    4,    1,    6,    4,    3,
    5,    5,    1,    4,    3,    1,    3,    4,    2,    1,
    2,    3,    2,    2,    1,    5,    6,    2,    3,    3,
    3,    1,    3,    3,    3,    1,    1,    1,    2,    1,
    1,    1,    1,    1,    1,    1,    2,    1,    2,    1,
    2,    1,    1,    1,    2,    1,    2,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,   82,   83,   84,   46,    0,    0,
    8,    0,    0,    5,    0,    0,    9,   10,   11,   15,
   16,   17,   18,   19,   20,   21,    0,    0,    0,    0,
   76,   80,   78,   28,    0,    0,    0,    0,    0,    0,
    0,   66,   68,   86,   85,    0,    0,   25,    0,    2,
    0,    4,    6,    7,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   77,   81,   79,   69,   70,   71,   72,
   73,    0,    0,   74,   75,    0,   43,   40,    0,    0,
    0,   50,    0,    0,   54,    0,    0,    0,    0,    0,
    1,    0,   27,   35,    0,    0,    0,    0,   33,    0,
    0,   63,   52,    0,    0,    0,   87,   51,    0,    0,
    0,   49,   39,    0,    0,   64,   65,    0,   31,    0,
    0,   24,   36,   32,   29,   44,   14,   13,   47,    0,
    0,   41,    0,   42,    0,   56,    0,   34,   30,   12,
   48,   38,   58,   57,
};
short yydgoto[] = {                                      12,
   13,   14,   15,   16,   17,   18,   19,  111,   20,   21,
   22,   23,   24,   25,   26,   27,   49,   28,   38,   29,
   98,  121,   82,   96,   39,   83,   84,   30,   40,  137,
   76,   41,   42,   43,   45,
};
short yysindex[] = {                                     74,
   -9, -259, -247, -243,    0,    0,    0,    0, -226,   84,
    0,    0,  130,    0,   12,   15,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -226,   33,  -66,   -9,
    0,    0,    0,    0,   13, -246,  -14,   29, -105,   23,
  -27,    0,    0,    0,    0,  -56,   31,    0,   36,    0,
  102,    0,    0,    0,   36,   13, -197,  -31,   55, -183,
   13,  100,   49,    0,    0,    0,    0,    0,    0,    0,
    0,   53,   53,    0,    0,   13,    0,    0,   56,  151,
   59,    0, -251,  144,    0,   53,   53,  130,  -30, -180,
    0,   -3,    0,    0,   -3,   61,   55,  -17,    0,  144,
   -8,    0,    0,  -27,  -27,   -3,    0,    0,   62,   66,
  -70,    0,    0, -110, -148,    0,    0,  120,    0, -164,
   79,    0,    0,    0,    0,    0,    0,    0,    0,   71,
    4,    0, -137,    0,  -28,    0,    6,    0,    0,    0,
    0,    0,    0,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,   90,    0,
    0,    0,  125,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -41,    0,    0,  -78,
  -19,    0,    0,    0,    0,    0,    0,    0,   89,    0,
    0,    0,    0,    0,   95,    0,    0,    0,    0,    0,
    0,    0,  -74,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   96,    0,    0,  101,    0,    0,    0,    0,  113,
    0,    0,    0,    3,   25,   47,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   90,    0,    0,    0,    0,    0,
    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
   -5,   -1,   64,   21,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   69,  132,   51,   58,    0,
    0,    0,  -36,    0,  133,  -22,   82,    0,  131,    0,
    0,  -34,  -10,    0,    0,
};
#define YYTABLESIZE 428
short yytable[] = {                                      67,
   67,   67,   67,   67,   51,   67,   77,  113,   61,   94,
  119,   52,   80,   36,   86,  143,   44,   80,   67,   87,
   67,   62,   99,   62,   62,   62,   64,   65,   66,   46,
   35,   57,  102,   47,   72,   36,   73,  104,  105,   72,
   62,   73,   62,   60,   55,   60,   60,   60,   53,   52,
   48,   37,   61,   97,  129,   53,   59,   36,   54,   81,
  124,  115,   60,   85,   60,   61,   88,   61,   61,   61,
   89,   72,   58,   73,  131,  116,  117,  126,   57,   93,
   37,   67,  118,  100,   61,   37,   61,   59,   74,  103,
   75,  133,   62,   56,   90,   52,  122,   36,   11,  107,
  110,  123,  112,   62,   81,  127,   37,  125,   37,  128,
  134,   37,  138,   92,  140,   95,   52,   11,  101,  139,
   81,  142,   37,   37,    3,   60,   37,   11,  141,   28,
  144,  130,   23,  106,   81,   28,   37,   37,   22,   26,
  102,   37,   72,  109,   73,   11,    1,   61,  132,    2,
   28,    1,   77,   78,    2,    8,   45,  120,   55,   74,
    8,   75,   60,   11,  114,   63,   34,   79,    0,   59,
    0,   34,   79,   11,    0,    0,    0,    0,   55,   55,
   55,   55,   53,   53,   53,   53,    1,   55,   55,    2,
    0,   53,   53,    0,    0,    8,   10,    0,   55,   55,
    0,    0,   53,   53,    0,    0,   34,   79,   50,    0,
    0,    0,    0,    0,    0,   67,   67,   67,   67,    0,
    0,    0,    0,    0,   67,   67,   91,   67,   67,   67,
   67,    0,    5,    6,    7,   67,   67,   62,   62,   62,
   62,   31,   32,   33,  136,   34,   62,   62,   48,   62,
   62,   62,   62,   67,    0,    0,    0,   62,   62,   60,
   60,   60,   60,   31,   32,   33,   80,   34,   60,   60,
    0,   60,   60,   60,   60,  108,    0,    0,    0,   60,
   60,   61,   61,   61,   61,   31,   32,   33,    0,   34,
   61,   61,    0,   61,   61,   61,   61,   68,   69,   70,
   71,   61,   61,   59,   59,   59,   59,    0,    0,    0,
    0,    1,   59,   59,    2,    3,    4,    5,    6,    7,
    8,    0,    0,   59,   59,   31,   32,   33,    0,   34,
    1,    9,   79,    2,    3,    4,    5,    6,    7,    8,
    1,    0,    0,    2,    3,    4,    5,    6,    7,    8,
    9,    0,    0,    0,    0,    0,    0,    0,    1,    0,
    9,    2,    3,    4,    5,    6,    7,    8,   68,   69,
   70,   71,    0,    0,    0,    0,    1,    0,    9,    2,
    3,    4,    5,    6,    7,    8,    1,    0,    0,    2,
    3,    4,    5,    6,    7,    8,  135,    0,    0,    0,
    1,    0,    0,    2,    0,    0,    9,    1,    0,    8,
    2,    3,    4,    5,    6,    7,    8,    0,    0,    0,
   34,   79,    0,    0,    0,    0,    0,    9,
};
short yycheck[] = {                                      41,
   42,   43,   44,   45,   10,   47,  258,  259,   40,   41,
   41,   13,  123,   45,   42,   44,  276,  123,   60,   47,
   62,   41,   59,   43,   44,   45,  273,  274,  275,  277,
   40,   46,   41,  277,   43,   45,   45,   72,   73,   43,
   60,   45,   62,   41,  123,   43,   44,   45,  123,   51,
  277,    1,   40,   59,  125,   44,  123,   45,   44,   39,
   97,   84,   60,   41,   62,   41,  123,   43,   44,   45,
   40,   43,   40,   45,  111,   86,   87,  100,   46,  277,
   30,  123,   88,  267,   60,   35,   62,   41,   60,   41,
   62,  114,   35,   61,   59,   97,  277,   45,   44,   44,
   80,   41,   44,  123,   84,   44,   56,  125,   58,   44,
  259,   61,  277,   56,   44,   58,  118,   44,   61,   41,
  100,  259,   72,   73,    0,  123,   76,   44,  125,   40,
  125,  111,   44,   76,  114,   46,   86,   87,   44,   44,
   41,   41,   43,   80,   45,   44,  257,  123,  259,  260,
   61,  257,  258,  259,  260,  266,   44,   89,   27,   60,
  266,   62,   30,   44,   83,   35,  277,  278,   -1,  123,
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
  271,  272,   -1,   -1,   -1,   -1,  257,   -1,  277,  260,
  261,  262,  263,  264,  265,  266,  257,   -1,   -1,  260,
  261,  262,  263,  264,  265,  266,  277,   -1,   -1,   -1,
  257,   -1,   -1,  260,   -1,   -1,  277,  257,   -1,  266,
  260,  261,  262,  263,  264,  265,  266,   -1,   -1,   -1,
  277,  278,   -1,   -1,   -1,   -1,   -1,  277,
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
"class : CLASS ID '{' sentenceList '}'",
"class : CLASS ID '{' sentenceList heredity '}'",
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
#line 213 ".\Gramaticas\gramaticaLenguaje.y"

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

void asignar(string izq, string der){
    string tipoIzq = TablaDeSimbolos::getTipo(partEndID(izq));
    string tipoDer = TablaDeSimbolos::getTipo(partEndID(der));
    string valido = Conversion::asignacion(tipoIzq,tipoDer);
    if (valido == "ERROR"){
        yyerror("No es posible asignarle un "+tipoDer+" a un "+tipoIzq);
    }else if (tipoIzq != tipoDer){
    		string conversion = string(1,tipoDer[0])+"to"+string(1,tipoIzq[0]);
            EstructuraTercetos::addTerceto(conversion,der,"");
    }
    EstructuraTercetos::addTerceto("=",izq,der);
}


string operar(string op1, string op2, string operador){
    string tipoOp1, tipoOp2;
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
            string conversion = string(1,tipoOp1[0])+"to"+string(1,tipoOp2[0]);
            EstructuraTercetos::addTerceto(conversion,op1,""); //FALTA LA LOGIA PARA VER SI VA OP1 O OP2
    }
    return valido;
}

void setearTipos(string tipo, string listVariable){
    string var;
    std::istringstream variableStream(listVariable);  // Asegúrate de inicializar el istringstream
    while (getline(variableStream, var, '&')) {
        TablaDeSimbolos::setTipo(var, tipo);
    }
}

bool ChequearDeclaracion(string var){
    string ambito=Ambito::get();
    bool final = false;
    bool encontrada = false;
    while(! final && ! encontrada){
        if (TablaDeSimbolos::tipoAsignado(var+ambito)){
            encontrada = true;
        }else{
            if (ambito.empty()){
                final = true;
                yyerror("Variable " + var + " NO declarada");
            }
            size_t pos = ambito.find_last_of(":");
            if (pos != string::npos) {
                ambito = ambito.substr(0, pos);
            }
        }
    }
    return encontrada;
}
#line 489 "y.tab.c"
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
#line 26 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Programa vacio");}
break;
case 3:
#line 27 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta llaves delimitadores de programa");}
break;
case 8:
#line 36 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Sentencia vacia");}
break;
case 14:
#line 46 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Sentencia declarativa en lugar de una ejecutable");}
break;
case 22:
#line 60 ".\Gramaticas\gramaticaLenguaje.y"
{setearTipos(yyvsp[-1],yyvsp[0]);}
break;
case 24:
#line 66 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::changeKey(yyvsp[0]);TablaDeSimbolos::setUso(yyvsp[0], "Var");yyval=yyvsp[-2]+"&"+yyvsp[0];}
break;
case 25:
#line 67 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::changeKey(yyvsp[0]);TablaDeSimbolos::setUso(yyvsp[0], "Var");yyval=yyvsp[0];}
break;
case 26:
#line 70 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Asignacion");
                                    if (ChequearDeclaracion(partEndID(yyvsp[-2]))) asignar(yyvsp[-2],yyvsp[0]);
                                    }
break;
case 27:
#line 75 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[-2] + "." + yyvsp[0];}
break;
case 28:
#line 76 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 29:
#line 79 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Funcion");Ambito::del();EstructuraTercetos::setAmbito(Ambito::get());}
break;
case 30:
#line 82 ".\Gramaticas\gramaticaLenguaje.y"
{   TablaDeSimbolos::changeKey(yyvsp[-3]);
                                                TablaDeSimbolos::setUso(yyvsp[-3], "Funcion");
                                                TablaDeSimbolos::setParametroFormal(yyvsp[-3],yyvsp[-1]);
                                                Ambito::add(yyvsp[-3]);
                                                TablaDeSimbolos::changeKey(yyvsp[-1]);
                                                EstructuraTercetos::setAmbito(Ambito::get());
                                            }
break;
case 31:
#line 89 ".\Gramaticas\gramaticaLenguaje.y"
{   TablaDeSimbolos::changeKey(yyvsp[-2]);
                                    TablaDeSimbolos::setUso(yyvsp[-2], "Funcion");
                                    Ambito::add(yyvsp[-2]);
                                    EstructuraTercetos::setAmbito(Ambito::get());
                                }
break;
case 33:
#line 97 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Funcion vacia");}
break;
case 34:
#line 100 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0]; TablaDeSimbolos::setUso(yyvsp[0], "Parametro Formal"); setearTipos(yyvsp[-1],yyvsp[0]);}
break;
case 35:
#line 103 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::addTerceto("Call",partEndID(yyvsp[-2]),"");}
break;
case 36:
#line 104 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(partEndID(yyvsp[-3])),yyvsp[-1]);EstructuraTercetos::addTerceto("Call",partEndID(yyvsp[-3]),"");}
break;
case 38:
#line 110 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");jumpEndIf();}
break;
case 39:
#line 111 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");jumpEndIf();}
break;
case 40:
#line 112 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");jumpEndIf();}
break;
case 41:
#line 113 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Else vacio");yymenssage("IF");jumpEndIf();}
break;
case 42:
#line 114 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");jumpEndIf();}
break;
case 43:
#line 117 ".\Gramaticas\gramaticaLenguaje.y"
{jumpEndThen();}
break;
case 44:
#line 120 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("While");jumpEndWhile();}
break;
case 45:
#line 121 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("While vacio");yymenssage("While");jumpEndWhile();}
break;
case 46:
#line 124 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::apilar();EstructuraTercetos::addLabel();}
break;
case 51:
#line 131 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Bloque vacio");}
break;
case 52:
#line 134 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",yyvsp[-1],"");}
break;
case 53:
#line 135 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta segundo parentesis en la condicion");}
break;
case 54:
#line 136 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta primer parentesis en la condicion");}
break;
case 55:
#line 137 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Faltan  parentesis en la condicion");}
break;
case 56:
#line 140 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Clase");TablaDeSimbolos::changeKey(yyvsp[-3]);TablaDeSimbolos::setUso(yyvsp[-3],"Clase");}
break;
case 57:
#line 141 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Clase");TablaDeSimbolos::changeKey(yyvsp[-4]);TablaDeSimbolos::setUso(yyvsp[-4],"Clase");}
break;
case 59:
#line 147 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = EstructuraTercetos::nroSigTerceto();EstructuraTercetos::addTerceto(yyvsp[-1],yyvsp[-2],yyvsp[0]);}
break;
case 60:
#line 150 ".\Gramaticas\gramaticaLenguaje.y"
{
                                  string tipo = operar(yyvsp[-2],yyvsp[0],"+");
                                  yyval = EstructuraTercetos::nroSigTerceto(); 
                                  EstructuraTercetos::addTerceto("+",yyvsp[-2],yyvsp[0],tipo);
                                  }
break;
case 61:
#line 155 ".\Gramaticas\gramaticaLenguaje.y"
{
                                  string tipo = operar(yyvsp[-2],yyvsp[0],"-");
                                  yyval = EstructuraTercetos::nroSigTerceto(); 
                                  EstructuraTercetos::addTerceto("-",yyvsp[-2],yyvsp[0],tipo);
                                  }
break;
case 62:
#line 160 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 63:
#line 161 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Expresion no puede ir entre parentesis");}
break;
case 64:
#line 164 ".\Gramaticas\gramaticaLenguaje.y"
{
                           string tipo = operar(yyvsp[-2],yyvsp[0],"*");
                           yyval = EstructuraTercetos::nroSigTerceto(); 
                           EstructuraTercetos::addTerceto("*",yyvsp[-2],yyvsp[0],tipo);
                           }
break;
case 65:
#line 169 ".\Gramaticas\gramaticaLenguaje.y"
{ 
                           string tipo = operar(yyvsp[-2],yyvsp[0],"/");
                           yyval = EstructuraTercetos::nroSigTerceto(); 
                           EstructuraTercetos::addTerceto("/",yyvsp[-2],yyvsp[0],tipo);
                           }
break;
case 66:
#line 174 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 67:
#line 177 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 68:
#line 178 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 69:
#line 179 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[-1];}
break;
case 70:
#line 182 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "==";}
break;
case 71:
#line 183 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "!!";}
break;
case 72:
#line 184 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = ">=";}
break;
case 73:
#line 185 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "<=";}
break;
case 74:
#line 186 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "<";}
break;
case 75:
#line 187 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = ">";}
break;
case 76:
#line 190 ".\Gramaticas\gramaticaLenguaje.y"
{chequearRangoSHORT(yyvsp[0]); yyval = yyvsp[0];}
break;
case 77:
#line 191 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = yyvsp[0];}
break;
case 78:
#line 192 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearPositivos(yyvsp[0]); yyval = yyvsp[0];}
break;
case 79:
#line 193 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = yyvsp[0];}
break;
case 80:
#line 194 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 81:
#line 195 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Una constante ULONG no puede ser negativa");}
break;
case 82:
#line 198 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="SHORT";}
break;
case 83:
#line 199 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="ULONG";}
break;
case 84:
#line 200 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="FLOAT";}
break;
#line 893 "y.tab.c"
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
