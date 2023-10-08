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
    9,   10,   10,   25,   25,   25,   24,   24,   24,   24,
    7,   26,   19,   19,   19,   19,   29,   29,   29,   27,
   27,   27,   28,   28,   28,   28,   28,   28,   30,   30,
   30,   30,   30,   30,   16,   16,   16,   11,   31,   22,
};
short yylen[] = {                                         2,
    3,    2,    1,    2,    1,    2,    2,    1,    1,    1,
    1,    3,    2,    1,    1,    1,    1,    1,    1,    1,
    1,    2,    2,    3,    1,    3,    3,    1,    8,    7,
    2,    1,    2,    3,    4,    1,   10,    6,    5,    9,
    9,    6,    5,    1,    2,    1,    3,    2,    2,    1,
    5,    3,    3,    3,    1,    3,    3,    3,    1,    1,
    1,    2,    1,    1,    1,    1,    1,    1,    1,    2,
    1,    2,    1,    2,    1,    1,    1,    2,    1,    2,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,   75,   76,   77,    0,    0,    0,
    8,    0,    0,    5,    0,    0,    9,   10,   11,   15,
   16,   17,   18,   19,   20,   21,    0,    0,   69,   73,
   71,   28,    0,    0,    0,    0,    0,    0,   61,   79,
   78,    0,    0,    0,   25,    0,    2,    0,    4,    6,
    7,    0,    0,    0,    0,    0,   70,   74,   72,   62,
    0,   49,   63,   64,   65,   66,   67,   68,    0,    0,
    0,    0,    0,    1,    0,    0,   59,    0,   27,   34,
    0,    0,   47,    0,    0,   14,    0,    0,   46,    0,
   52,    0,    0,    0,    0,    0,   24,    0,    0,    0,
    0,    0,   35,   80,    0,   39,   13,    0,   45,    0,
   51,    0,   33,    0,   43,    0,   56,    0,    0,   57,
   58,    0,   12,    0,   38,    0,    0,   32,    0,   42,
    0,    0,   31,   30,    0,    0,    0,    0,   29,   41,
   40,    0,   37,
};
short yydgoto[] = {                                      12,
  126,   14,   15,   16,   17,   18,   19,   88,   20,   21,
   22,   23,   24,   25,   26,   27,   46,   28,   76,   95,
  127,   89,   82,   36,   90,   37,   77,   69,   78,   39,
   41,
};
short yysindex[] = {                                    -41,
  -34, -266, -252, -241,    0,    0,    0,  -34, -226,   24,
    0,    0,   62,    0,   12,   16,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -226,   -3,    0,    0,
    0,    0,   -1, -166,  -39,  -59,   26,   33,    0,    0,
    0,  -47,   59, -175,    0,   45,    0,   34,    0,    0,
    0,   45,  -28, -172,  -40,   70,    0,    0,    0,    0,
 -123,    0,    0,    0,    0,    0,    0,    0,   -1,   62,
  -37,   -6, -158,    0,  -28,  -14,    0,  -15,    0,    0,
  -14,   79,    0,   81, -220,    0,   83, -244,    0,    4,
    0,   52,    9, -141,  103,  -99,    0,   40,   -1,   -1,
   -1,   -1,    0,    0,   23,    0,    0,  101,    0, -217,
    0,   -9,    0,   27,    0,   31,    0,  -15,  -15,    0,
    0,   87,    0,   28,    0,   -9,   32,    0,   -9,    0,
   35,  -77,    0,    0,   43, -112, -111,   44,    0,    0,
    0,  -89,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,   25,    0,
    0,    0,  172,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   71,    0, -115,    0,    0,    0,
    0,    0,    0,    0,    0,    1,    0,    0,    0,    0,
    0,    5,    0,    0,    0, -114,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  129,    0,   18,    0,    0,
  133,    0,    0,    0,    0,    0,    0,   50,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   29,   57,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,
};
short yygindex[] = {                                      0,
   14,    2,  -43,  -42,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  105,  154,   22,  -35,    0,
   53,  -60,    0,  182,  -75,  158,  102,    0,  -12,    0,
    0,
};
#define YYTABLESIZE 365
short yytable[] = {                                      75,
   80,   85,   11,   93,   34,   33,   54,   50,   48,   40,
   34,   75,    1,   13,   49,    2,   34,   86,   87,   81,
  116,    8,   35,   48,   42,  115,  101,  109,   99,   35,
  100,  102,   32,   84,   11,   43,   55,  105,  106,   98,
  124,  125,   54,   34,   23,  108,  131,  137,   22,   49,
   45,  128,   86,   87,   35,   50,  138,   53,   55,   51,
   55,   55,   55,   61,   28,  133,   62,   11,  128,   53,
   28,   53,   53,   53,   35,   70,   35,   11,   86,   87,
  117,   10,   99,   92,  100,   28,  118,  119,   86,   87,
   35,   72,   67,   49,   68,   11,   35,   54,   71,   54,
   54,   54,   38,   73,   79,   11,   57,   58,   59,   38,
   83,   60,   60,   60,   60,   60,   96,   60,   97,  103,
   35,   35,   35,   35,  104,   23,  107,   49,  110,   22,
   60,  112,   60,    1,   38,  113,    2,    3,    4,    5,
    6,    7,    8,  114,  123,  122,  140,  141,   47,  129,
  132,   50,   48,    9,   84,  130,  134,    1,   74,  136,
    2,    3,    4,    5,    6,    7,    8,  139,  142,  143,
   91,    3,   26,   36,   44,   94,  111,    9,   84,    1,
   52,  135,    2,    3,    4,    5,    6,    7,    8,   44,
   56,    0,    0,   60,    0,    0,    0,    0,    0,    9,
   84,    0,  120,  121,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    1,    0,    0,    2,    3,
    4,    5,    6,    7,    8,    5,    6,    7,   60,    0,
    0,    0,   29,   30,   31,    9,   32,    0,   29,   30,
   31,    0,   32,    0,   29,   30,   31,    1,   32,    0,
    2,    3,    4,    5,    6,    7,    8,   23,    0,    0,
   23,   22,    0,    0,   22,    0,   23,    9,   84,    0,
   22,   29,   30,   31,    0,   32,    0,   23,   23,    0,
    1,   22,   22,    2,    3,    4,    5,    6,    7,    8,
    1,    0,    0,    2,    3,    4,    5,    6,    7,    8,
    9,   63,   64,   65,   66,    0,    0,    0,    1,    0,
    9,    2,    3,    4,    5,    6,    7,    8,    1,    0,
    0,    2,    3,    4,    5,    6,    7,    8,    9,    0,
    0,    0,    0,    0,    0,    0,    0,   60,    9,   60,
   60,   60,   60,    1,    0,    0,    2,    3,    4,    5,
    6,    7,    8,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    9,   84,
};
short yycheck[] = {                                      40,
   41,  125,   44,   41,   45,   40,   46,  123,  123,  276,
   45,   40,  257,    0,   13,  260,   45,   61,   61,   55,
   96,  266,    1,   10,  277,  125,   42,   88,   43,    8,
   45,   47,  277,  278,   44,  277,   40,  258,  259,   75,
  258,  259,   46,   45,   44,   88,  122,  125,   44,   48,
  277,  112,   96,   96,   33,   44,  132,   61,   41,   44,
   43,   44,   45,  123,   40,  126,   41,   44,  129,   41,
   46,   43,   44,   45,   53,  123,   55,   44,  122,  122,
   41,  123,   43,   70,   45,   61,   99,  100,  132,  132,
   69,  267,   60,   92,   62,   44,   75,   41,   40,   43,
   44,   45,    1,   59,  277,   44,  273,  274,  275,    8,
   41,   41,   42,   43,   44,   45,  123,   47,  277,   41,
   99,  100,  101,  102,   44,  125,   44,  126,  125,  125,
   60,  123,   62,  257,   33,  277,  260,  261,  262,  263,
  264,  265,  266,   41,   44,  123,  259,  259,  125,  123,
  123,  267,  267,  277,  278,  125,  125,  257,  125,  125,
  260,  261,  262,  263,  264,  265,  266,  125,  125,  259,
   69,    0,   44,   41,  125,   71,  125,  277,  278,  257,
   27,  129,  260,  261,  262,  263,  264,  265,  266,    8,
   33,   -1,   -1,  123,   -1,   -1,   -1,   -1,   -1,  277,
  278,   -1,  101,  102,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  257,   -1,   -1,  260,  261,
  262,  263,  264,  265,  266,  263,  264,  265,  268,   -1,
   -1,   -1,  273,  274,  275,  277,  277,   -1,  273,  274,
  275,   -1,  277,   -1,  273,  274,  275,  257,  277,   -1,
  260,  261,  262,  263,  264,  265,  266,  257,   -1,   -1,
  260,  257,   -1,   -1,  260,   -1,  266,  277,  278,   -1,
  266,  273,  274,  275,   -1,  277,   -1,  277,  278,   -1,
  257,  277,  278,  260,  261,  262,  263,  264,  265,  266,
  257,   -1,   -1,  260,  261,  262,  263,  264,  265,  266,
  277,  269,  270,  271,  272,   -1,   -1,   -1,  257,   -1,
  277,  260,  261,  262,  263,  264,  265,  266,  257,   -1,
   -1,  260,  261,  262,  263,  264,  265,  266,  277,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  267,  277,  269,
  270,  271,  272,  257,   -1,   -1,  260,  261,  262,  263,
  264,  265,  266,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  277,  278,
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
"executableList : declarative",
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
"ifStatement : IF condition '{' iterativeBody '}' ELSE '{' iterativeBody '}' ENDIF",
"ifStatement : IF condition '{' iterativeBody '}' ENDIF",
"ifStatement : IF condition '{' '}' ENDIF",
"ifStatement : IF condition '{' iterativeBody '}' ELSE '{' '}' ENDIF",
"ifStatement : IF condition '{' '}' ELSE '{' iterativeBody '}' ENDIF",
"whileStatement : WHILE condition DO '{' iterativeBody '}'",
"whileStatement : WHILE condition DO '{' '}'",
"iterativeBody : executableList",
"iterativeBody : executableList return",
"iterativeBody : return",
"condition : '(' comparison ')'",
"condition : '(' comparison",
"condition : comparison ')'",
"condition : comparison",
"class : CLASS ID '{' sentenceList '}'",
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
#line 165 ".\Gramaticas\gramaticaLenguaje.y"

void yymenssage(string menssage){
    cout  << endl  << BLUE << "Estructura detectada: " << menssage  << RESET << endl;
}

void yyerror(string menssage){
	cout << endl  << RED << "Linea " << AccionesSemanticas::lineaInicioToken <<": " << menssage << RESET << endl;
}

void yywarning(string menssage){
    cout << endl << YELLOW << "Warning - Linea " << AccionesSemanticas::lineaInicioToken <<": " << menssage << RESET << endl;
}

void crequearRangoSHORT(string valor){
    int chequear = stoi(TablaDeSimbolos::getValor(valor));
    if (chequear >= 128){
        yyerror("Constante SHORT fuera de rango");
    }
}
#line 354 "y.tab.c"
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
#line 107 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta segundo parentesis en la condicion");}
break;
case 49:
#line 108 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta primer parentesis en la condicion");}
break;
case 50:
#line 109 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Faltan  parentesis en la condicion");}
break;
case 51:
#line 112 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Clase");}
break;
case 56:
#line 121 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Expression no puede ir entre parentesis");}
break;
case 69:
#line 142 ".\Gramaticas\gramaticaLenguaje.y"
{crequearRangoSHORT(yyvsp[0]); TablaDeSimbolos::chequearPositivos(yyvsp[0]);}
break;
case 70:
#line 143 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);}
break;
case 71:
#line 144 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearPositivos(yyvsp[0]);}
break;
case 72:
#line 145 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);}
break;
case 74:
#line 147 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Una constante ULONG no puede ser negativa");}
break;
#line 590 "y.tab.c"
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
