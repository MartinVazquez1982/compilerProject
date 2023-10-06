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

#line 17 "y.tab.c"
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
    5,   20,   12,   12,   21,    9,    9,    9,    9,    9,
   10,   10,   22,   22,   22,   22,    7,   23,   19,   19,
   19,   19,   26,   26,   26,   24,   24,   24,   25,   25,
   25,   25,   25,   25,   27,   27,   27,   27,   27,   27,
   16,   16,   16,   11,   28,
};
short yylen[] = {                                         2,
    3,    2,    1,    2,    1,    2,    2,    1,    1,    1,
    1,    3,    2,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    2,    2,    3,    1,    3,    3,    1,    8,
    7,    2,    3,    4,    1,   10,    6,    5,    9,    9,
    6,    5,    3,    2,    2,    1,    5,    3,    3,    3,
    1,    3,    3,    3,    1,    1,    1,    2,    1,    1,
    1,    1,    1,    1,    1,    2,    1,    2,    1,    2,
    1,    1,    1,    2,    1,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,   71,   72,   73,    0,    0,   20,
    0,    8,    0,    0,    5,    0,    0,    9,   10,   11,
   15,   16,   17,   18,   19,   21,   22,    0,    0,   65,
   69,   67,   29,    0,    0,    0,    0,    0,    0,   57,
   75,   74,    0,    0,    0,   26,    0,    2,    0,    4,
    6,    7,    0,    0,    0,    0,    0,   66,   70,   68,
   58,    0,   45,   59,   60,   61,   62,   63,   64,    0,
    0,    0,    0,    0,    1,    0,    0,   55,    0,   28,
   33,    0,    0,   43,    0,   14,    0,    0,   48,    0,
    0,    0,    0,    0,   25,    0,    0,    0,    0,    0,
   34,    0,   38,   13,    0,    0,   47,    0,   32,    0,
   42,    0,   52,    0,    0,   53,   54,    0,    0,   37,
   12,    0,    0,   41,    0,    0,   31,    0,    0,    0,
    0,   30,   40,   39,    0,   36,
};
short yydgoto[] = {                                      13,
   14,   15,   16,   17,   18,   19,   20,   88,   21,   22,
   23,   24,   25,   26,   27,   28,   47,   29,   77,   93,
   83,   37,   38,   78,   70,   79,   40,   42,
};
short yysindex[] = {                                     -9,
  -34, -243, -234, -230,    0,    0,    0,  -34, -228,    0,
    1,    0,    0,   78,    0,   18,   23,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -228,  -30,    0,
    0,    0,    0,   -3, -237,  -38,  -55,   31,   32,    0,
    0,    0,  -52,   33, -192,    0,   19,    0,   20,    0,
    0,    0,   19,  -28, -196,  -40,   44,    0,    0,    0,
    0,  -85,    0,    0,    0,    0,    0,    0,    0,   -3,
   78,  -39,  -37, -190,    0,  -28,  -18,    0,  -24,    0,
    0,  -18,   47,    0, -244,    0,   51,  -46,    0,   30,
  -25, -181,   60,  -75,    0,  -13,   -3,   -3,   -3,   -3,
    0,  -15,    0,    0, -205,   72,    0,   78,    0,   -6,
    0,  102,    0,  -24,  -24,    0,    0,  154,    2,    0,
    0,   49,   78,    0,  125,  -56,    0,   59, -136, -135,
  135,    0,    0,    0, -132,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,  -27,    0,
    0,    0,    0,  128,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  105,    0, -116,    0,    0,
    0,    0,    0,    0,    0,    0,   88,    0,    0,    0,
    0,    0,   92,    0,    0,    0, -114,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   85,    0,   16,    0,
    0,   89,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   61,   66,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
   -8,  -10,  -36,  -42,    0,    0,    0,  -70,    0,    0,
    0,    0,    0,    0,    0,   62,  103,   43,  -35,    0,
    0,  127,   99,   21,    0,  -32,    0,    0,
};
#define YYTABLESIZE 432
short yytable[] = {                                      76,
   81,   91,   49,   50,   35,   34,   46,   55,   44,   56,
   35,   76,   29,  102,  103,   55,   35,   99,   29,   87,
   82,   39,  100,  112,   97,   86,   98,  113,   39,   97,
   54,   98,   41,   29,   12,   58,   59,   60,   50,   85,
   96,   35,   43,   36,   12,  106,   44,  125,   46,  111,
   36,   87,  119,  120,   39,  131,   51,   86,   51,   51,
   51,   51,   90,   12,  114,  115,   52,   62,  130,  106,
   71,   63,   72,   12,   73,   87,   36,   74,  105,   50,
   80,   86,  106,   87,   84,   94,   95,  101,  106,   86,
   89,   68,   12,   69,  104,  109,   36,  108,   36,  122,
  110,   49,   12,   49,   49,   49,   50,  118,   50,   50,
   50,   50,   36,   11,  128,  121,  123,   50,   36,  116,
  117,   12,  133,  134,  126,   48,  136,    3,   27,   35,
   53,   24,   57,   92,   45,   23,    0,    0,    0,   36,
   36,   36,   36,    0,   75,   56,   56,   56,   56,   56,
   46,   56,   44,    0,  107,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   56,    0,   56,    0,    0,    0,
    0,    1,    0,  127,    2,    3,    4,    5,    6,    7,
    8,    1,    0,  132,    2,    3,    4,    5,    6,    7,
    8,    9,   10,    0,    0,    0,    0,    0,    0,    0,
    1,    9,   10,    2,    3,    4,    5,    6,    7,    8,
    1,    0,   24,    2,    0,    0,   23,    0,    0,    8,
    9,   10,    0,    5,    6,    7,  124,   56,    0,   61,
   33,   10,   30,   31,   32,    0,   33,    0,   30,   31,
   32,    0,   33,    0,   30,   31,   32,    1,   33,  129,
    2,    3,    4,    5,    6,    7,    8,    1,    0,  135,
    2,    3,    4,    5,    6,    7,    8,    9,   10,   30,
   31,   32,    0,   33,    0,    0,    1,    9,   10,    2,
    3,    4,    5,    6,    7,    8,    1,    0,    0,    2,
    3,    4,    5,    6,    7,    8,    9,   10,    0,    0,
   64,   65,   66,   67,    0,    1,    9,   10,    2,    3,
    4,    5,    6,    7,    8,    1,    0,    0,    2,    3,
    4,    5,    6,    7,    8,    9,   10,    0,    0,    0,
    0,    0,    0,    0,    1,    9,   10,    2,    3,    4,
    5,    6,    7,    8,   24,    0,    0,   24,   23,    0,
    0,   23,    0,   24,    9,   10,    0,   23,    1,    0,
    0,    2,    0,    0,   24,   24,    0,    8,   23,   23,
    0,   56,    0,   56,   56,   56,   56,    0,   33,   10,
    0,    1,    0,    0,    2,    0,    0,    0,    0,    0,
    8,    1,    0,    0,    2,    0,    0,    0,    0,    0,
    8,   33,   10,    0,    0,    0,    0,    0,    0,    0,
    1,   33,   10,    2,    3,    4,    5,    6,    7,    8,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    9,   10,
};
short yycheck[] = {                                      40,
   41,   41,   11,   14,   45,   40,  123,   46,  123,   40,
   45,   40,   40,  258,  259,   46,   45,   42,   46,   62,
   56,    1,   47,   94,   43,   62,   45,   41,    8,   43,
   61,   45,  276,   61,   44,  273,  274,  275,   49,  125,
   76,   45,  277,    1,   44,   88,  277,  118,  277,  125,
    8,   94,  258,  259,   34,  126,   41,   94,   43,   44,
   45,   44,   71,   44,   97,   98,   44,  123,  125,  112,
  123,   41,   40,   44,  267,  118,   34,   59,  125,   90,
  277,  118,  125,  126,   41,  123,  277,   41,  131,  126,
   70,   60,   44,   62,   44,  277,   54,  123,   56,  108,
   41,   41,   44,   43,   44,   45,   41,  123,   43,   44,
   45,  122,   70,  123,  123,   44,  123,  128,   76,   99,
  100,   44,  259,  259,  123,  125,  259,    0,   44,   41,
   28,   44,   34,   72,    8,   44,   -1,   -1,   -1,   97,
   98,   99,  100,   -1,  125,   41,   42,   43,   44,   45,
  267,   47,  267,   -1,  125,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   60,   -1,   62,   -1,   -1,   -1,
   -1,  257,   -1,  125,  260,  261,  262,  263,  264,  265,
  266,  257,   -1,  125,  260,  261,  262,  263,  264,  265,
  266,  277,  278,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  257,  277,  278,  260,  261,  262,  263,  264,  265,  266,
  257,   -1,  125,  260,   -1,   -1,  125,   -1,   -1,  266,
  277,  278,   -1,  263,  264,  265,  125,  123,   -1,  268,
  277,  278,  273,  274,  275,   -1,  277,   -1,  273,  274,
  275,   -1,  277,   -1,  273,  274,  275,  257,  277,  125,
  260,  261,  262,  263,  264,  265,  266,  257,   -1,  125,
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
  266,  257,   -1,   -1,  260,   -1,   -1,   -1,   -1,   -1,
  266,  277,  278,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  257,  277,  278,  260,  261,  262,  263,  264,  265,  266,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  277,  278,
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
"function : VOID ID '(' formalParameter ')' '{' sentenceList '}'",
"function : VOID ID '(' ')' '{' sentenceList '}'",
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
"condition : '(' comparation ')'",
"condition : '(' comparation",
"condition : comparation ')'",
"condition : comparation",
"class : CLASS ID '{' sentenceList '}'",
"comparation : factor operatorsLogics factor",
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
#line 153 ".\Gramaticas\gramaticaLenguaje.y"

void yymenssage(string menssage){
    cout << menssage << "Reconocido" << endl;
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
#line 357 "y.tab.c"
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
#line 20 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Programa vacio");}
break;
case 3:
#line 21 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta llaves delimitadores de programa");}
break;
case 8:
#line 30 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Sentencia vacia");}
break;
case 14:
#line 40 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Sentencia declarativa en lugar de una ejecutable");}
break;
case 30:
#line 72 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Funcion");}
break;
case 31:
#line 73 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Funcion");}
break;
case 36:
#line 86 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");}
break;
case 37:
#line 87 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");}
break;
case 38:
#line 88 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");}
break;
case 39:
#line 89 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Else vacio");yymenssage("IF");}
break;
case 40:
#line 90 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");}
break;
case 41:
#line 93 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("While");}
break;
case 42:
#line 94 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("While vacio");yymenssage("While");}
break;
case 44:
#line 98 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta segundo parentesis en la condicion");}
break;
case 45:
#line 99 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta primer parentesis en la condicion");}
break;
case 46:
#line 100 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Faltan  parentesis en la condicion");}
break;
case 47:
#line 103 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Clase");}
break;
case 52:
#line 112 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Expression no puede ir entre parentesis");}
break;
case 65:
#line 133 ".\Gramaticas\gramaticaLenguaje.y"
{crequearRangoSHORT(yyvsp[0]); TablaDeSimbolos::chequearPositivos(yyvsp[0]);}
break;
case 66:
#line 134 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);}
break;
case 67:
#line 135 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearPositivos(yyvsp[0]);}
break;
case 68:
#line 136 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);}
break;
case 70:
#line 138 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Una constante ULONG no puede ser negativa");}
break;
#line 589 "y.tab.c"
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
