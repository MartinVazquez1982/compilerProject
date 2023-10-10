#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.8 (Berkeley) 01/20/90";
#endif
#define YYBYACC 1
#line 2 ".\Gramaticas\gramaticaLenguaje.y"

#include <iostream>
#include "../AnalisisLexico/AnalizadorLexico.h"
#include "../AnalisisLexico/Headers/AccionesSemanticas.h"
#include "../TablaDeSimbolos/TablaDeSimbolos.h"

#define RESET   "\x1B[0m"
#define YELLOW  "\x1B[33m"
#define RED "\x1B[31m"
#define BLUE "\x1B[34m"

#line 18 "y.tab.c"
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
    6,   14,   15,   17,   17,   13,   18,   18,    5,    5,
   21,   21,   20,   12,   12,   23,    9,    9,    9,    9,
    9,   10,   10,   25,   25,   25,   25,   25,   24,   24,
   24,   24,    7,    7,   27,   26,   19,   19,   19,   19,
   30,   30,   30,   28,   28,   28,   29,   29,   29,   29,
   29,   29,   31,   31,   31,   31,   31,   31,   16,   16,
   16,   11,   32,   22,
};
short yylen[] = {                                         2,
    3,    2,    1,    2,    1,    2,    2,    1,    1,    1,
    1,    3,    2,    2,    1,    1,    1,    1,    1,    1,
    1,    2,    2,    3,    1,    3,    3,    1,    8,    7,
    2,    1,    2,    3,    4,    1,    6,    4,    3,    5,
    5,    4,    3,    3,    4,    2,    1,    2,    3,    2,
    2,    1,    5,    6,    2,    3,    3,    3,    1,    3,
    3,    3,    1,    1,    1,    2,    1,    1,    1,    1,
    1,    1,    1,    2,    1,    2,    1,    2,    1,    1,
    1,    2,    1,    2,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,   79,   80,   81,    0,    0,    0,
    8,    0,    0,    5,    0,    0,    9,   10,   11,   15,
   16,   17,   18,   19,   20,   21,    0,    0,   73,   77,
   75,   28,    0,    0,    0,    0,    0,    0,   65,   83,
   82,    0,    0,    0,   25,    0,    2,    0,    4,    6,
    7,    0,    0,    0,    0,    0,   74,   78,   76,   66,
    0,   39,    0,    0,    0,   47,    0,   51,   67,   68,
   69,   70,   71,   72,    0,    0,    0,    0,    0,    1,
    0,    0,   63,    0,   27,   34,    0,    0,   49,    0,
   84,   48,    0,    0,    0,   46,    0,   38,   56,    0,
    0,    0,    0,   42,   24,    0,    0,    0,    0,    0,
   35,   41,   14,   13,   44,    0,    0,   40,    0,    0,
   53,    0,    0,   33,    0,   60,    0,    0,   61,   62,
   12,   45,   37,   55,   54,    0,    0,   32,    0,   31,
   30,    0,   29,
};
short yydgoto[] = {                                      12,
  136,   14,   15,   16,   17,   18,   19,   95,   20,   21,
   22,   23,   24,   25,   26,   27,   46,   28,   82,  103,
  137,   66,   88,   36,   67,   37,  122,   83,   75,   84,
   39,   41,
};
short yysindex[] = {                                      9,
  -27, -261, -255, -249,    0,    0,    0,  -27, -247,   27,
    0,    0,   65,    0,  -10,   -2,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -247,   14,    0,    0,
    0,    0,    5, -229,  -29,  -85,    6,   36,    0,    0,
    0,  -68,   28, -202,    0,   11,    0,   37,    0,    0,
    0,   11,  -20, -203,  -33,   44,    0,    0,    0,    0,
  -71,    0,   53,   83,   58,    0, -181,    0,    0,    0,
    0,    0,    0,    0,    5,   65,  -31,  -71, -174,    0,
  -20,   -8,    0,  -15,    0,    0,   -8,   70,    0, -140,
    0,    0,   76,   77,  -56,    0,  -75,    0,    0,   55,
    2, -155,   82,    0,    0,   43,    5,    5,    5,    5,
    0,    0,    0,    0,    0,   80,    3,    0, -133,  -39,
    0,    4,   -1,    0,    7,    0,  -15,  -15,    0,    0,
    0,    0,    0,    0,    0,   -1,   13,    0,   -1,    0,
    0,   15,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,   26,    0,
    0,    0,  127,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -41,    0, -112,    0,    0,    0,
    0,    0,    0,    0,    0,   87,    0,    0,    0,    0,
    0,   89,    0,    0,    0,  -99,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   92,    0,    0,
    0,   95,    0,   50,    0,    0,  100,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   26,
    0,    0,    0,    0,    0,    0,   63,   69,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
short yygindex[] = {                                      0,
   29,    1,   78,   -5,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   66,  117,    8,  -19,    0,
   10,  -72,    0,  142,  -21,  118,    0,   25,    0,  -28,
    0,    0,
};
#define YYTABLESIZE 360
short yytable[] = {                                      64,
   64,   64,   64,   64,  134,   64,   81,   86,   35,  101,
   52,   34,   33,   49,   40,   35,   54,   34,   64,   81,
   64,   42,  117,   50,   34,   38,  109,   43,   13,   45,
   65,  110,   38,   50,  107,   87,  108,   64,   48,   90,
   35,   51,   11,   57,   58,   59,   68,   64,   49,   34,
  138,   64,   11,   55,   76,   65,  104,   38,   94,   54,
   35,  106,   35,  140,   78,   28,  138,   77,  115,   79,
   11,   28,   65,   85,   53,  119,   97,   98,  127,  128,
   11,   64,   35,  126,   89,  107,   28,  108,   35,  116,
   59,   65,   59,   59,   59,   73,   91,   74,   11,   99,
   49,   96,  105,   57,  100,   57,   57,   57,   11,   58,
  111,   58,   58,   58,   35,   35,   35,   35,  112,  113,
  114,  124,  125,  131,  123,  133,    3,  132,  135,  139,
   23,   10,   22,  129,  130,   43,   49,  141,   26,  143,
   36,   93,  102,   52,   52,   52,   52,   52,  142,   44,
   56,   47,    0,   52,   52,    0,    0,   50,   50,   50,
   50,   80,    0,    0,   52,   52,   50,   50,    0,    0,
    0,    1,   61,   62,    2,    0,    0,   50,   50,  121,
    8,    1,    0,  118,    2,    1,    0,    0,    2,    0,
    8,   32,   63,    0,    8,    0,    0,    0,    0,    0,
    1,   32,   63,    2,    0,   32,   63,   92,    0,    8,
    0,    0,    0,    0,    0,   64,   64,   64,   64,    0,
   32,   63,    0,    0,   64,   64,    0,   64,   64,   64,
   64,    5,    6,    7,    0,   64,   64,   45,   60,   29,
   30,   31,    0,   32,    0,   29,   30,   31,    0,   32,
    0,    0,   29,   30,   31,    1,   32,    0,    2,    3,
    4,    5,    6,    7,    8,    1,    0,    0,    2,    3,
    4,    5,    6,    7,    8,    9,   63,   29,   30,   31,
    0,   32,    0,    1,    0,    9,    2,    3,    4,    5,
    6,    7,    8,    1,    0,    0,    2,    3,    4,    5,
    6,    7,    8,    9,   69,   70,   71,   72,    0,    0,
    0,    1,    0,    9,    2,    3,    4,    5,    6,    7,
    8,    1,    0,    0,    2,    3,    4,    5,    6,    7,
    8,  120,    0,    0,    0,    0,    0,    0,    0,    1,
    0,    9,    2,    3,    4,    5,    6,    7,    8,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    9,
};
short yycheck[] = {                                      41,
   42,   43,   44,   45,   44,   47,   40,   41,    1,   41,
  123,   45,   40,   13,  276,    8,   46,   45,   60,   40,
   62,  277,   95,  123,   45,    1,   42,  277,    0,  277,
   36,   47,    8,   44,   43,   55,   45,  123,   10,   61,
   33,   44,   44,  273,  274,  275,   41,  123,   48,   45,
  123,  123,   44,   40,  123,   61,   78,   33,   64,   46,
   53,   81,   55,  136,  267,   40,  139,   40,  125,   59,
   44,   46,   78,  277,   61,   97,  258,  259,  107,  108,
   44,  123,   75,   41,   41,   43,   61,   45,   81,   95,
   41,   97,   43,   44,   45,   60,   44,   62,   44,   75,
  100,   44,  277,   41,   76,   43,   44,   45,   44,   41,
   41,   43,   44,   45,  107,  108,  109,  110,  259,   44,
   44,  277,   41,   44,  123,  259,    0,  125,  125,  123,
   44,  123,   44,  109,  110,   44,  136,  125,   44,  125,
   41,   64,   77,   27,  257,  258,  259,  260,  139,    8,
   33,  125,   -1,  266,  267,   -1,   -1,  257,  258,  259,
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
"function : VOID ID '(' formalParameter ')' '{' functionBody '}'",
"function : VOID ID '(' ')' '{' functionBody '}'",
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
#line 172 ".\Gramaticas\gramaticaLenguaje.y"

void yymenssage(string menssage){
    cout  << endl  << BLUE << "Estructura detectada: " << menssage  << RESET << endl;
}

void yyerror(string menssage){
	cout << endl  << RED << "Linea " << AccionesSemanticas::lineaInicioToken <<": " << menssage << RESET << endl;
}

void yywarning(string menssage){
    cout << endl << YELLOW << "Warning - Linea " << AccionesSemanticas::lineaInicioToken <<": " << menssage << RESET << endl;
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
#line 362 "y.tab.c"
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
#line 21 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Programa vacio");}
break;
case 3:
#line 22 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta llaves delimitadores de programa");}
break;
case 8:
#line 31 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Sentencia vacia");}
break;
case 14:
#line 41 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Sentencia declarativa en lugar de una ejecutable");}
break;
case 26:
#line 65 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Asignacion");}
break;
case 29:
#line 72 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Funcion");}
break;
case 30:
#line 73 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Funcion");}
break;
case 32:
#line 77 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Funcion vacia");}
break;
case 37:
#line 90 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");}
break;
case 38:
#line 91 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");}
break;
case 39:
#line 92 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");}
break;
case 40:
#line 93 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Else vacio");yymenssage("IF");}
break;
case 41:
#line 94 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");}
break;
case 42:
#line 97 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("While");}
break;
case 43:
#line 98 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("While vacio");yymenssage("While");}
break;
case 48:
#line 105 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Bloque vacio");}
break;
case 50:
#line 110 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta segundo parentesis en la condicion");}
break;
case 51:
#line 111 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta primer parentesis en la condicion");}
break;
case 52:
#line 112 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Faltan  parentesis en la condicion");}
break;
case 53:
#line 115 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Clase");}
break;
case 54:
#line 116 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Clase");}
break;
case 60:
#line 128 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Expresion no puede ir entre parentesis");}
break;
case 73:
#line 149 ".\Gramaticas\gramaticaLenguaje.y"
{chequearRangoSHORT(yyvsp[0]);}
break;
case 74:
#line 150 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);}
break;
case 75:
#line 151 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearPositivos(yyvsp[0]);}
break;
case 76:
#line 152 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);}
break;
case 78:
#line 154 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Una constante ULONG no puede ser negativa");}
break;
#line 610 "y.tab.c"
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
