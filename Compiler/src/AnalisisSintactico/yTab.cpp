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
    3,    8,    8,    8,    4,    4,    4,    4,    4,    4,
    6,    6,   14,   15,   17,   17,   13,   18,   18,    5,
    5,   21,   21,   20,   12,   12,   22,    9,    9,    9,
    9,    9,   10,   10,   23,   23,   23,   23,    7,   24,
   19,   19,   19,   19,   27,   27,   27,   25,   25,   25,
   26,   26,   26,   26,   26,   26,   28,   28,   28,   28,
   28,   28,   16,   16,   16,   11,   29,
};
short yylen[] = {                                         2,
    3,    2,    1,    2,    1,    2,    2,    1,    1,    1,
    1,    3,    2,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    2,    2,    3,    1,    3,    3,    1,    8,
    7,    2,    1,    2,    3,    4,    1,   10,    6,    5,
    9,    9,    6,    5,    3,    2,    2,    1,    5,    3,
    3,    3,    1,    3,    3,    3,    1,    1,    1,    2,
    1,    1,    1,    1,    1,    1,    1,    2,    1,    2,
    1,    2,    1,    1,    1,    2,    1,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,   73,   74,   75,    0,    0,   20,
    0,    8,    0,    0,    5,    0,    0,    9,   10,   11,
   15,   16,   17,   18,   19,   21,   22,    0,    0,   67,
   71,   69,   29,    0,    0,    0,    0,    0,    0,   59,
   77,   76,    0,    0,    0,   26,    0,    2,    0,    4,
    6,    7,    0,    0,    0,    0,    0,   68,   72,   70,
   60,    0,   47,   61,   62,   63,   64,   65,   66,    0,
    0,    0,    0,    0,    1,    0,    0,   57,    0,   28,
   35,    0,    0,   45,    0,   14,    0,    0,   50,    0,
    0,    0,    0,    0,   25,    0,    0,    0,    0,    0,
   36,    0,   40,   13,    0,    0,   49,    0,   34,    0,
   44,    0,   54,    0,    0,   55,   56,    0,    0,   39,
   12,    0,    0,    0,    0,   43,    0,    0,    0,   31,
    0,    0,    0,    0,   30,   42,   41,    0,   38,
};
short yydgoto[] = {                                      13,
  123,   15,   16,   17,   18,   19,   20,   88,   21,   22,
   23,   24,   25,   26,   27,   28,   47,   29,   77,   93,
  124,   83,   37,   38,   78,   70,   79,   40,   42,
};
short yysindex[] = {                                     -9,
  -34, -257, -250, -246,    0,    0,    0,  -34, -241,    0,
    1,    0,    0,   49,    0,    3,   16,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -241,  -24,    0,
    0,    0,    0,   -3, -202,  -38,  -61,   26,   32,    0,
    0,    0,  -45,   51, -170,    0,   43,    0,   20,    0,
    0,    0,   43,  -28, -162,  -40,   79,    0,    0,    0,
    0, -104,    0,    0,    0,    0,    0,    0,    0,   -3,
   49,  -39,    5, -144,    0,  -28,   -2,    0,  -19,    0,
    0,   -2,   93,    0, -182,    0,   91,  -62,    0,   30,
   14, -139,   98,  -85,    0,  -11,   -3,   -3,   -3,   -3,
    0,   18,    0,    0, -158,   96,    0,   59,    0,   19,
    0,  -46,    0,  -19,  -19,    0,    0, -208,   40,    0,
    0,    0,   78,   39,   59,    0,  102,  -75,    0,    0,
   41, -115,  -91,  125,    0,    0,    0,  -90,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,   35,    0,
    0,    0,    0,  143,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  105,    0, -116,    0,    0,
    0,    0,    0,    0,    0,    0,   88,    0,    0,    0,
    0,    0,   92,    0,    0,    0, -113,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  126,    0,   63,    0,
    0,  130,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   80,   86,    0,    0,    0,    0,    0,
    0,  -41,    0,    0,    0,    0,    0,    0,  -35,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
   15,  -10,  -33,  -29,    0,    0,    0,  -80,    0,    0,
    0,    0,    0,    0,    0,  111,  156,   12,  -32,    0,
   69,    0,  188,  163,   17,    0,   21,    0,    0,
};
#define YYTABLESIZE 403
short yytable[] = {                                      76,
   81,   91,   20,   50,   35,   34,   48,   55,   20,   46,
   35,   76,   36,  112,   14,   56,   35,   39,   41,   36,
   85,   55,   99,   82,   39,   49,   43,  100,   86,  113,
   44,   97,   87,   98,   12,   46,   54,  127,   50,  111,
   97,   35,   98,   96,   12,   36,   51,  134,    1,  133,
   39,    2,    3,    4,    5,    6,    7,    8,  106,   52,
   86,   62,  105,   12,   87,   36,   63,   36,    9,   10,
   58,   59,   60,   12,   29,  102,  103,   71,  126,   50,
   29,   36,  106,   33,   86,   90,   89,   36,   87,   32,
   72,   68,   12,   69,   86,   29,   73,  106,   87,  119,
  120,   74,   12,   53,  106,   53,   53,   53,   36,   36,
   36,   36,   50,   11,   80,  116,  117,  114,  115,   84,
   51,   12,   51,   51,   51,   48,   52,   94,   52,   52,
   52,   24,   95,  101,  104,   23,  108,  109,  110,  121,
  118,  125,    3,  136,   75,   58,   58,   58,   58,   58,
   48,   58,    1,   46,  107,    2,    3,    4,    5,    6,
    7,    8,  128,  130,   58,  135,   58,  137,  139,   27,
   37,    1,    9,   10,    2,    3,    4,    5,    6,    7,
    8,    1,   92,   53,    2,    3,    4,    5,    6,    7,
    8,    9,   10,  131,    1,   45,   57,    2,    0,    0,
    0,    9,   10,    8,    0,    0,    0,    0,    0,    0,
    1,    0,   24,    2,   33,   10,   23,    0,    0,    8,
    0,    0,    0,    5,    6,    7,  132,   58,    0,   61,
   33,   10,   30,   31,   32,    0,   33,    0,   30,   31,
   32,    0,   33,    0,   30,   31,   32,    1,   33,  138,
    2,    3,    4,    5,    6,    7,    8,    1,    0,    0,
    2,    3,    4,    5,    6,    7,    8,    9,   10,   30,
   31,   32,    0,   33,    0,    0,    1,    9,   10,    2,
    3,    4,    5,    6,    7,    8,    1,    0,    0,    2,
    3,    4,    5,    6,    7,    8,    9,   10,    0,    0,
   64,   65,   66,   67,    0,    1,    9,   10,    2,    3,
    4,    5,    6,    7,    8,    1,    0,    0,    2,    3,
    4,    5,    6,    7,    8,    9,   10,    0,    0,    0,
    0,    0,    0,    0,    1,    9,  122,    2,    3,    4,
    5,    6,    7,    8,   24,    0,    0,   24,   23,    0,
    0,   23,    0,   24,    9,  129,    0,   23,    1,    0,
    0,    2,    0,    0,   24,   24,    0,    8,   23,   23,
    0,   58,    0,   58,   58,   58,   58,    0,   33,   10,
    0,    1,    0,    0,    2,    0,    0,    0,    0,    0,
    8,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   33,   10,
};
short yycheck[] = {                                      40,
   41,   41,   44,   14,   45,   40,  123,   46,   44,  123,
   45,   40,    1,   94,    0,   40,   45,    1,  276,    8,
  125,   46,   42,   56,    8,   11,  277,   47,   62,   41,
  277,   43,   62,   45,   44,  277,   61,  118,   49,  125,
   43,   45,   45,   76,   44,   34,   44,  128,  257,  125,
   34,  260,  261,  262,  263,  264,  265,  266,   88,   44,
   94,  123,  125,   44,   94,   54,   41,   56,  277,  278,
  273,  274,  275,   44,   40,  258,  259,  123,  125,   90,
   46,   70,  112,  125,  118,   71,   70,   76,  118,  125,
   40,   60,   44,   62,  128,   61,  267,  127,  128,  258,
  259,   59,   44,   41,  134,   43,   44,   45,   97,   98,
   99,  100,  123,  123,  277,   99,  100,   97,   98,   41,
   41,   44,   43,   44,   45,  125,   41,  123,   43,   44,
   45,   44,  277,   41,   44,   44,  123,  277,   41,   44,
  123,  123,    0,  259,  125,   41,   42,   43,   44,   45,
  267,   47,  257,  267,  125,  260,  261,  262,  263,  264,
  265,  266,  123,  125,   60,  125,   62,  259,  259,   44,
   41,  257,  277,  278,  260,  261,  262,  263,  264,  265,
  266,  257,   72,   28,  260,  261,  262,  263,  264,  265,
  266,  277,  278,  125,  257,    8,   34,  260,   -1,   -1,
   -1,  277,  278,  266,   -1,   -1,   -1,   -1,   -1,   -1,
  257,   -1,  125,  260,  277,  278,  125,   -1,   -1,  266,
   -1,   -1,   -1,  263,  264,  265,  125,  123,   -1,  268,
  277,  278,  273,  274,  275,   -1,  277,   -1,  273,  274,
  275,   -1,  277,   -1,  273,  274,  275,  257,  277,  125,
  260,  261,  262,  263,  264,  265,  266,  257,   -1,   -1,
  260,  261,  262,  263,  264,  265,  266,  277,  278,  273,
  274,  275,   -1,  277,   -1,   -1,  257,  277,  278,  260,
  261,  262,  263,  264,  265,  266,  257,   -1,   -1,  260,
  261,  262,  263,  264,  265,  266,  277,  278,   -1,   -1,
  269,  270,  271,  272,   -1,  257,  277,  278,  260,  261,
  262,  263,  264,  265,  266,  257,   -1,   -1,  260,  261,
  262,  263,  264,  265,  266,  277,  278,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  257,  277,  278,  260,  261,  262,
  263,  264,  265,  266,  257,   -1,   -1,  260,  257,   -1,
   -1,  260,   -1,  266,  277,  278,   -1,  266,  257,   -1,
   -1,  260,   -1,   -1,  277,  278,   -1,  266,  277,  278,
   -1,  267,   -1,  269,  270,  271,  272,   -1,  277,  278,
   -1,  257,   -1,   -1,  260,   -1,   -1,   -1,   -1,   -1,
  266,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  277,  278,
};
#define YYFINAL 13
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
"executable : RETURN",
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
"functionBody : sentenceList RETURN",
"functionBody : RETURN",
"formalParameter : type ID",
"functionCall : nesting '(' ')'",
"functionCall : nesting '(' realParameter ')'",
"realParameter : expression",
"ifStatement : IF condition '{' executableList '}' ELSE '{' executableList '}' ENDIF",
"ifStatement : IF condition '{' executableList '}' ENDIF",
"ifStatement : IF condition '{' '}' ENDIF",
"ifStatement : IF condition '{' executableList '}' ELSE '{' '}' ENDIF",
"ifStatement : IF condition '{' '}' ELSE '{' executableList '}' ENDIF",
"whileStatement : WHILE condition DO '{' executableList '}'",
"whileStatement : WHILE condition DO '{' '}'",
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
#line 158 ".\Gramaticas\gramaticaLenguaje.y"

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
case 30:
#line 73 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Funcion");}
break;
case 31:
#line 74 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Funcion");}
break;
case 33:
#line 78 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Funcion vacia");}
break;
case 38:
#line 91 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");}
break;
case 39:
#line 92 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");}
break;
case 40:
#line 93 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");}
break;
case 41:
#line 94 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Else vacio");yymenssage("IF");}
break;
case 42:
#line 95 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");}
break;
case 43:
#line 98 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("While");}
break;
case 44:
#line 99 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("While vacio");yymenssage("While");}
break;
case 46:
#line 103 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta segundo parentesis en la condicion");}
break;
case 47:
#line 104 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta primer parentesis en la condicion");}
break;
case 48:
#line 105 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Faltan  parentesis en la condicion");}
break;
case 49:
#line 108 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Clase");}
break;
case 54:
#line 117 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Expression no puede ir entre parentesis");}
break;
case 67:
#line 138 ".\Gramaticas\gramaticaLenguaje.y"
{crequearRangoSHORT(yyvsp[0]); TablaDeSimbolos::chequearPositivos(yyvsp[0]);}
break;
case 68:
#line 139 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);}
break;
case 69:
#line 140 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearPositivos(yyvsp[0]);}
break;
case 70:
#line 141 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);}
break;
case 72:
#line 143 ".\Gramaticas\gramaticaLenguaje.y"
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
