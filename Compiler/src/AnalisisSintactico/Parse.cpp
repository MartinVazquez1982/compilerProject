#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.8 (Berkeley) 01/20/90";
#endif
#define YYBYACC 1
#line 2 ".\Gramaticas\gramaticaLenguaje.y"

#include <iostream>
#include "../AnalisisLexico/AnalizadorLexico.h"
#include "../AnalisisLexico/Headers/AccionesSemanticas.h"
#include "../TablaDeSimbolos/TablaDeSimbolos.h"
#include "../AnalisisSemantico/EstructuraTercetos.h"
#include "../AnalisisSemantico/Headers/Ambito.h"

#define RESET   "\x1B[0m"
#define YELLOW  "\x1B[33m"
#define RED "\x1B[31m"
#define BLUE "\x1B[34m"

#line 20 "y.tab.c"
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
    9,    9,   10,   10,   26,   26,   26,   26,   26,   25,
   25,   25,   25,    7,    7,   28,   27,   19,   19,   19,
   19,   31,   31,   31,   29,   29,   29,   30,   30,   30,
   30,   30,   30,   32,   32,   32,   32,   32,   32,   16,
   16,   16,   11,   33,   23,
};
short yylen[] = {                                         2,
    3,    2,    1,    2,    1,    2,    2,    1,    1,    1,
    1,    3,    2,    2,    1,    1,    1,    1,    1,    1,
    1,    2,    2,    3,    1,    3,    3,    1,    4,    5,
    4,    2,    1,    2,    3,    4,    1,    6,    4,    3,
    5,    5,    4,    3,    3,    4,    2,    1,    2,    3,
    2,    2,    1,    5,    6,    2,    3,    3,    3,    1,
    3,    3,    3,    1,    1,    1,    2,    1,    1,    1,
    1,    1,    1,    1,    2,    1,    2,    1,    2,    1,
    1,    1,    2,    1,    2,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,   80,   81,   82,    0,    0,    0,
    8,    0,    0,    5,    0,    0,    9,   10,   11,   15,
   16,   17,   18,   19,   20,   21,    0,    0,    0,   74,
   78,   76,   28,    0,    0,    0,    0,    0,    0,   66,
   84,   83,    0,    0,    0,   25,    0,    2,    0,    4,
    6,    7,    0,    0,    0,    0,    0,    0,   75,   79,
   77,   67,    0,   40,    0,    0,    0,   48,    0,   52,
   68,   69,   70,   71,   72,   73,    0,    0,    0,    0,
    0,    1,    0,    0,   64,    0,   27,   35,    0,    0,
    0,    0,   33,   50,    0,   85,   49,    0,    0,    0,
   47,    0,   39,   57,    0,   31,    0,    0,   43,   24,
    0,    0,    0,    0,    0,   36,   32,   29,   42,   14,
   13,   45,    0,    0,   41,    0,    0,   54,    0,   34,
   30,   61,    0,    0,   62,   63,   12,   46,   38,   56,
   55,
};
short yydgoto[] = {                                      12,
   13,   14,   15,   16,   17,   18,   19,  100,   20,   21,
   22,   23,   24,   25,   26,   27,   47,   28,   84,   29,
   92,  108,   68,   90,   37,   69,   38,  129,   85,   77,
   86,   40,   42,
};
short yysindex[] = {                                      9,
  -27, -253, -242, -230,    0,    0,    0,  -27, -220,   27,
    0,    0,   65,    0,   19,   22,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -220,  -12,  -55,    0,
    0,    0,    0,    5, -229,  -29,  -85,   26,   36,    0,
    0,    0,  -53,   33, -184,    0,   28,    0,   37,    0,
    0,    0,   28,  -20, -193,  -33,   -1,   47,    0,    0,
    0,    0,  -71,    0,   45,   83,   46,    0, -219,    0,
    0,    0,    0,    0,    0,    0,    5,   65,  -31,  -71,
 -180,    0,  -20,  -13,    0,  -11,    0,    0,  -13,   59,
   -1,  -22,    0,    0, -155,    0,    0,   61,   62,  -56,
    0,  -75,    0,    0,   55,    0, -163,   77,    0,    0,
   84,    5,    5,    5,    5,    0,    0,    0,    0,    0,
    0,    0,   75,    1,    0, -135,  -39,    0,    3,    0,
    0,    0,  -11,  -11,    0,    0,    0,    0,    0,    0,
    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,   40,    0,
    0,    0,  130,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -41,    0, -112,    0,    0,
    0,    0,    0,    0,    0,    0,   87,    0,    0,    0,
    0,    0,   89,    0,    0,    0,    0,  -99,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   90,
    0,    0,    0,   91,    0,   34,    0,    0,   95,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   40,    0,    0,    0,
    0,    0,   67,   72,    0,    0,    0,    0,    0,    0,
    0,
};
short yygindex[] = {                                      0,
   17,    2,   71,   -8,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   63,  111,    8,  -42,    0,
    0,    0,  -35,    0,  133,  -26,  109,    0,   25,    0,
  -52,    0,    0,
};
#define YYTABLESIZE 360
short yytable[] = {                                      65,
   65,   65,   65,   65,  140,   65,   83,   88,   36,  106,
   53,   35,   34,   89,   50,   36,   55,   35,   65,   83,
   65,   93,   41,   51,   35,   39,   49,   56,   67,  112,
  114,  113,   39,   55,   43,  115,   95,   66,  102,  103,
  111,   36,   11,   59,   60,   61,   44,   66,   54,   35,
   50,   66,   11,  109,   67,  117,   46,   99,   39,  133,
  134,   36,   51,   36,  124,   52,   70,   57,  122,   78,
   11,   67,   79,   91,   60,  126,   60,   60,   60,   28,
   11,   65,   80,   87,   36,   28,   81,   94,   96,  101,
   36,  123,   50,   67,  105,   75,  110,   76,   11,  116,
   28,  104,  118,  119,  120,  121,   50,   58,   11,   58,
   58,   58,   59,  130,   59,   59,   59,  131,  137,   36,
   36,   36,   36,  139,  132,  138,  112,  141,  113,    3,
   23,   10,   22,   44,   26,   37,   98,   53,  135,  136,
   45,  107,   58,    0,   53,   53,   53,   53,    0,    0,
    0,   48,    0,   53,   53,    0,    0,   51,   51,   51,
   51,   82,    0,    0,   53,   53,   51,   51,    0,    0,
    0,    1,   63,   64,    2,    0,    0,   51,   51,  128,
    8,    1,    0,  125,    2,    1,    0,    0,    2,    0,
    8,   33,   65,    0,    8,    0,    0,    0,    0,    0,
    1,   33,   65,    2,    0,   33,   65,   97,    0,    8,
    0,    0,    0,    0,    0,   65,   65,   65,   65,    0,
   33,   65,    0,    0,   65,   65,    0,   65,   65,   65,
   65,    5,    6,    7,    0,   65,   65,   46,   62,   30,
   31,   32,    0,   33,    0,   30,   31,   32,    0,   33,
    0,    0,   30,   31,   32,    1,   33,    0,    2,    3,
    4,    5,    6,    7,    8,    1,    0,    0,    2,    3,
    4,    5,    6,    7,    8,    9,   65,   30,   31,   32,
    0,   33,    0,    1,    0,    9,    2,    3,    4,    5,
    6,    7,    8,    1,    0,    0,    2,    3,    4,    5,
    6,    7,    8,    9,   71,   72,   73,   74,    0,    0,
    0,    1,    0,    9,    2,    3,    4,    5,    6,    7,
    8,    1,    0,    0,    2,    3,    4,    5,    6,    7,
    8,  127,    0,    0,    0,    0,    0,    0,    0,    1,
    0,    9,    2,    3,    4,    5,    6,    7,    8,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    9,
};
short yycheck[] = {                                      41,
   42,   43,   44,   45,   44,   47,   40,   41,    1,   41,
  123,   45,   40,   56,   13,    8,   46,   45,   60,   40,
   62,   57,  276,  123,   45,    1,   10,   40,   37,   43,
   42,   45,    8,   46,  277,   47,   63,  123,  258,  259,
   83,   34,   44,  273,  274,  275,  277,  123,   61,   45,
   49,  123,   44,   80,   63,   91,  277,   66,   34,  112,
  113,   54,   44,   56,  100,   44,   41,  123,  125,  123,
   44,   80,   40,   57,   41,  102,   43,   44,   45,   40,
   44,  123,  267,  277,   77,   46,   59,   41,   44,   44,
   83,  100,   91,  102,   78,   60,  277,   62,   44,   41,
   61,   77,  125,  259,   44,   44,  105,   41,   44,   43,
   44,   45,   41,  277,   43,   44,   45,   41,   44,  112,
  113,  114,  115,  259,   41,  125,   43,  125,   45,    0,
   44,  123,   44,   44,   44,   41,   66,   27,  114,  115,
    8,   79,   34,   -1,  257,  258,  259,  260,   -1,   -1,
   -1,  125,   -1,  266,  267,   -1,   -1,  257,  258,  259,
  260,  125,   -1,   -1,  277,  278,  266,  267,   -1,   -1,
   -1,  257,  258,  259,  260,   -1,   -1,  277,  278,  125,
  266,  257,   -1,  259,  260,  257,   -1,   -1,  260,   -1,
  266,  277,  278,   -1,  266,   -1,   -1,   -1,   -1,   -1,
  257,  277,  278,  260,   -1,  277,  278,  125,   -1,  266,
   -1,   -1,   -1,   -1,   -1,  257,  258,  259,  260,   -1,
  277,  278,   -1,   -1,  266,  267,   -1,  269,  270,  271,
  272,  263,  264,  265,   -1,  277,  278,  277,  268,  273,
  274,  275,   -1,  277,   -1,  273,  274,  275,   -1,  277,
   -1,   -1,  273,  274,  275,  257,  277,   -1,  260,  261,
  262,  263,  264,  265,  266,  257,   -1,   -1,  260,  261,
  262,  263,  264,  265,  266,  277,  278,  273,  274,  275,
   -1,  277,   -1,  257,   -1,  277,  260,  261,  262,  263,
  264,  265,  266,  257,   -1,   -1,  260,  261,  262,  263,
  264,  265,  266,  277,  269,  270,  271,  272,   -1,   -1,
   -1,  257,   -1,  277,  260,  261,  262,  263,  264,  265,
  266,  257,   -1,   -1,  260,  261,  262,  263,  264,  265,
  266,  277,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,
   -1,  277,  260,  261,  262,  263,  264,  265,  266,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  277,
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
"ifStatement : IF condition iterativeBody ELSE iterativeBody ENDIF",
"ifStatement : IF condition iterativeBody ENDIF",
"ifStatement : IF condition ENDIF",
"ifStatement : IF condition iterativeBody ELSE ENDIF",
"ifStatement : IF condition ELSE iterativeBody ENDIF",
"whileStatement : WHILE condition DO iterativeBody",
"whileStatement : WHILE condition DO",
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
"comparison : factor operatorsLogics factor",
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
#line 177 ".\Gramaticas\gramaticaLenguaje.y"

void yymenssage(string menssage){
    cout  << endl  << BLUE << "Estructura detectada: " << menssage  << RESET << endl;
}

void yyerror(string menssage){
	cout << endl  << RED << "Linea " << AccionesSemanticas::lineaInicioToken <<": " << menssage << RESET << endl;
    contadorErrores++;
}

void yywarning(string menssage){
    cout << endl << YELLOW << "Warning - Linea " << AccionesSemanticas::lineaInicioToken <<": " << menssage << RESET << endl;
    contadorWarnings++;
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
#line 370 "y.tab.c"
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
#line 23 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Programa vacio");}
break;
case 3:
#line 24 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta llaves delimitadores de programa");}
break;
case 8:
#line 33 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Sentencia vacia");}
break;
case 14:
#line 43 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Sentencia declarativa en lugar de una ejecutable");}
break;
case 24:
#line 63 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::changeKey(yyvsp[0]);}
break;
case 25:
#line 64 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::changeKey(yyvsp[0]);}
break;
case 26:
#line 67 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Asignacion"); EstructuraTercetos::addTerceto("=",yyvsp[-2],yyvsp[0]);}
break;
case 27:
#line 70 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[-2] + "." + yyvsp[0];}
break;
case 28:
#line 71 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 29:
#line 74 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Funcion");Ambito::del();}
break;
case 30:
#line 77 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::changeKey(yyvsp[-3]);Ambito::add(yyvsp[-3]);}
break;
case 31:
#line 78 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::changeKey(yyvsp[-2]);Ambito::add(yyvsp[-2]);}
break;
case 33:
#line 82 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Funcion vacia");}
break;
case 38:
#line 95 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");}
break;
case 39:
#line 96 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");}
break;
case 40:
#line 97 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");}
break;
case 41:
#line 98 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Else vacio");yymenssage("IF");}
break;
case 42:
#line 99 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");}
break;
case 43:
#line 102 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("While");}
break;
case 44:
#line 103 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("While vacio");yymenssage("While");}
break;
case 49:
#line 110 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Bloque vacio");}
break;
case 51:
#line 115 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta segundo parentesis en la condicion");}
break;
case 52:
#line 116 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta primer parentesis en la condicion");}
break;
case 53:
#line 117 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Faltan  parentesis en la condicion");}
break;
case 54:
#line 120 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Clase");TablaDeSimbolos::changeKey(yyvsp[-3]);}
break;
case 55:
#line 121 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Clase");TablaDeSimbolos::changeKey(yyvsp[-4]);}
break;
case 57:
#line 127 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::addTerceto(yyvsp[-1],yyvsp[-2],yyvsp[0]);}
break;
case 58:
#line 130 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = EstructuraTercetos::nroSigTerceto(); EstructuraTercetos::addTerceto("+",yyvsp[-2],yyvsp[0]);}
break;
case 59:
#line 131 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = EstructuraTercetos::nroSigTerceto(); EstructuraTercetos::addTerceto("-",yyvsp[-2],yyvsp[0]);}
break;
case 60:
#line 132 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 61:
#line 133 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Expresion no puede ir entre parentesis");}
break;
case 62:
#line 136 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = EstructuraTercetos::nroSigTerceto(); EstructuraTercetos::addTerceto("*",yyvsp[-2],yyvsp[0]);}
break;
case 63:
#line 137 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = EstructuraTercetos::nroSigTerceto(); EstructuraTercetos::addTerceto("/",yyvsp[-2],yyvsp[0]);}
break;
case 64:
#line 138 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 65:
#line 141 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 66:
#line 142 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 67:
#line 143 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[-1];}
break;
case 68:
#line 146 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "==";}
break;
case 69:
#line 147 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "!!";}
break;
case 70:
#line 148 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = ">=";}
break;
case 71:
#line 149 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "<=";}
break;
case 72:
#line 150 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "<";}
break;
case 73:
#line 151 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = ">";}
break;
case 74:
#line 154 ".\Gramaticas\gramaticaLenguaje.y"
{chequearRangoSHORT(yyvsp[0]); yyval = yyvsp[0];}
break;
case 75:
#line 155 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = yyvsp[0];}
break;
case 76:
#line 156 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearPositivos(yyvsp[0]); yyval = yyvsp[0];}
break;
case 77:
#line 157 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = yyvsp[0];}
break;
case 78:
#line 158 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 79:
#line 159 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Una constante ULONG no puede ser negativa");}
break;
#line 706 "y.tab.c"
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
