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
    0,    0,    0,    0,    0,    1,    1,    2,    2,    2,
    3,    3,    3,    8,    8,    8,    4,    4,    4,    4,
    4,    4,    6,    6,   14,   15,   17,   17,   13,   18,
   18,    5,    5,   20,   12,   12,   21,    9,    9,    9,
    9,    9,   10,   10,   22,   22,   22,   22,    7,   23,
   19,   19,   19,   19,   26,   26,   26,   24,   24,   24,
   25,   25,   25,   25,   25,   25,   27,   27,   27,   27,
   27,   16,   16,   16,   11,   28,
};
short yylen[] = {                                         2,
    3,    2,    3,    3,    1,    2,    1,    2,    2,    1,
    1,    1,    1,    3,    2,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    2,    2,    3,    1,    3,    3,
    1,    8,    7,    2,    3,    4,    1,   10,    6,    5,
    9,    9,    6,    5,    3,    2,    2,    1,    5,    3,
    3,    3,    1,    3,    3,    3,    1,    1,    1,    2,
    1,    1,    1,    1,    1,    1,    1,    2,    1,    2,
    1,    1,    1,    1,    2,    1,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,   72,   73,   74,    0,    0,   22,
    0,   10,    0,    0,    7,    0,    0,   11,   12,   13,
   17,   18,   19,   20,   21,   23,   24,    0,    0,   67,
   71,   69,   31,    0,    0,    0,    0,    0,    0,   59,
   76,   75,    0,    0,    0,   28,    0,    0,    0,    6,
    8,    9,    0,    0,    0,    0,    0,   68,   70,   60,
    0,   47,   61,   62,   63,   64,   65,   66,    0,    0,
    0,    0,    0,    3,    4,    1,    0,    0,   57,    0,
   30,   35,    0,    0,   45,    0,   16,    0,    0,   50,
    0,    0,    0,    0,    0,   27,    0,    0,    0,    0,
    0,   36,    0,   40,   15,    0,    0,   49,    0,   34,
    0,   44,    0,   54,    0,    0,   55,   56,    0,    0,
   39,   14,    0,    0,   43,    0,    0,   33,    0,    0,
    0,    0,   32,   42,   41,    0,   38,
};
short yydgoto[] = {                                      13,
   14,   15,   16,   17,   18,   19,   20,   89,   21,   22,
   23,   24,   25,   26,   27,   28,   47,   29,   78,   94,
   84,   37,   38,   79,   69,   80,   40,   42,
};
short yysindex[] = {                                      4,
  -34, -272, -254, -250,    0,    0,    0,  -34, -242,    0,
   23,    0,    0,   81,    0,    7,   24,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -242,  -24,    0,
    0,    0,    0,    1, -255,  -38,  -79,   28,   35,    0,
    0,    0,  -53,   34, -196,    0,   16, -178,   -6,    0,
    0,    0,   16,  -28, -194,  -40,   38,    0,    0,    0,
  -82,    0,    0,    0,    0,    0,    0,    0,    1,   81,
  -39,  -25, -188,    0,    0,    0,  -28,   -9,    0,  -16,
    0,    0,   -9,   61,    0, -229,    0,   63,  -59,    0,
   33,  -14, -167,   71,  -72,    0,    9,    1,    1,    1,
    1,    0,   -8,    0,    0, -198,   73,    0,   81,    0,
   -5,    0,  -49,    0,  -16,  -16,    0,    0,  159,   -3,
    0,    0,   52,   81,    0,  137,  127,    0,   62, -138,
 -136,  152,    0,    0,    0, -135,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,  -21,    0,
    0,    0,    0,  128,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  108,    0, -120,    0,    0,
    0,    0,    0,    0,    0,    0,   91,  133,    0,    0,
    0,    0,   95,    0,    0,    0, -113,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   90,    0,   14,
    0,    0,   96,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   47,   60,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    2,   -7,  -46,  -33,    0,    0,    0,  -86,    0,    0,
    0,    0,    0,    0,    0,   65,  110,   31,  -32,    0,
    0,  132,  107,   13,    0,  -35,    0,    0,
};
#define YYTABLESIZE 437
short yytable[] = {                                      77,
   82,   92,   48,   41,   35,   34,   50,   55,  113,   46,
   35,   77,   49,   39,   87,   56,   35,   58,   31,   59,
   39,   55,   43,   83,   31,  100,   44,   88,  103,  104,
  101,   36,  126,   98,   46,   99,   54,   12,   36,   31,
  132,   50,   86,   61,   97,   35,   39,   12,   87,  114,
   51,   98,  112,   99,   53,  107,   53,   53,   53,  120,
  121,   88,  115,  116,   36,  106,   12,   52,   62,   70,
   72,   91,   87,   71,   73,  125,   12,   74,   85,  107,
   87,   90,   81,   50,   36,   88,   36,   51,   96,   51,
   51,   51,  107,   88,   67,   12,   68,   95,  107,   36,
   52,  102,   52,   52,   52,   12,  105,   36,  109,  110,
  123,  111,  117,  118,  119,   50,  122,  124,   76,  127,
  134,   50,  135,  137,   12,  129,   11,    5,   36,   36,
   36,   36,    2,   29,   26,   93,   37,   53,   25,   45,
   57,    0,    0,    0,    0,    0,   48,   48,   58,   58,
   58,   58,   58,   46,   58,    0,    0,  108,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   58,    0,   58,
    0,    0,    0,    0,    1,    0,  128,    2,    3,    4,
    5,    6,    7,    8,    1,    0,  133,    2,    3,    4,
    5,    6,    7,    8,    9,   10,    0,    1,    0,    0,
    2,    0,    0,    0,    9,   10,    8,    1,    0,    0,
    2,    0,    0,    0,    0,   26,    8,   33,   10,   25,
    0,    0,    0,    5,    6,    7,    0,   33,   10,   60,
   58,    0,   30,   31,   32,    0,   33,    0,   30,   31,
   32,    0,   33,    0,   30,   31,   32,    0,   33,   75,
    1,  131,    0,    2,    3,    4,    5,    6,    7,    8,
    1,  130,    0,    2,    3,    4,    5,    6,    7,    8,
    9,   10,    0,   30,   31,   32,  136,   33,    0,    1,
    9,   10,    2,    3,    4,    5,    6,    7,    8,    1,
    0,    0,    2,    3,    4,    5,    6,    7,    8,    9,
   10,    0,    0,   63,   64,   65,   66,    0,    1,    9,
   10,    2,    3,    4,    5,    6,    7,    8,    1,    0,
    0,    2,    3,    4,    5,    6,    7,    8,    9,   10,
    0,    0,    0,    0,    0,    0,    0,    1,    9,   10,
    2,    3,    4,    5,    6,    7,    8,   26,    0,    0,
   26,   25,    0,    0,   25,    0,   26,    9,   10,    0,
   25,    0,    0,    0,    0,    0,    0,   26,   26,    0,
    0,   25,   25,    0,   58,    0,   58,   58,   58,   58,
    0,    0,    0,    1,    0,    0,    2,    3,    4,    5,
    6,    7,    8,    1,    0,    0,    2,    0,    0,    0,
    0,    0,    8,    9,   10,    0,    0,    0,    1,    0,
    0,    2,    0,   33,   10,    1,    0,    8,    2,    3,
    4,    5,    6,    7,    8,    0,    0,    0,   33,   10,
    0,    0,    0,    0,    0,    9,   10,
};
short yycheck[] = {                                      40,
   41,   41,  123,  276,   45,   40,   14,   46,   95,  123,
   45,   40,   11,    1,   61,   40,   45,  273,   40,  275,
    8,   46,  277,   56,   46,   42,  277,   61,  258,  259,
   47,    1,  119,   43,  277,   45,   61,   44,    8,   61,
  127,   49,  125,  123,   77,   45,   34,   44,   95,   41,
   44,   43,  125,   45,   41,   89,   43,   44,   45,  258,
  259,   95,   98,   99,   34,  125,   44,   44,   41,  123,
  267,   70,  119,   40,   59,  125,   44,  256,   41,  113,
  127,   69,  277,   91,   54,  119,   56,   41,  277,   43,
   44,   45,  126,  127,   60,   44,   62,  123,  132,   69,
   41,   41,   43,   44,   45,   44,   44,   77,  123,  277,
  109,   41,  100,  101,  123,  123,   44,  123,  125,  123,
  259,  129,  259,  259,   44,  124,  123,    0,   98,   99,
  100,  101,    0,   44,   44,   71,   41,   28,   44,    8,
   34,   -1,   -1,   -1,   -1,   -1,  267,  125,   41,   42,
   43,   44,   45,  267,   47,   -1,   -1,  125,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   60,   -1,   62,
   -1,   -1,   -1,   -1,  257,   -1,  125,  260,  261,  262,
  263,  264,  265,  266,  257,   -1,  125,  260,  261,  262,
  263,  264,  265,  266,  277,  278,   -1,  257,   -1,   -1,
  260,   -1,   -1,   -1,  277,  278,  266,  257,   -1,   -1,
  260,   -1,   -1,   -1,   -1,  125,  266,  277,  278,  125,
   -1,   -1,   -1,  263,  264,  265,   -1,  277,  278,  268,
  123,   -1,  273,  274,  275,   -1,  277,   -1,  273,  274,
  275,   -1,  277,   -1,  273,  274,  275,   -1,  277,  256,
  257,  125,   -1,  260,  261,  262,  263,  264,  265,  266,
  257,  125,   -1,  260,  261,  262,  263,  264,  265,  266,
  277,  278,   -1,  273,  274,  275,  125,  277,   -1,  257,
  277,  278,  260,  261,  262,  263,  264,  265,  266,  257,
   -1,   -1,  260,  261,  262,  263,  264,  265,  266,  277,
  278,   -1,   -1,  269,  270,  271,  272,   -1,  257,  277,
  278,  260,  261,  262,  263,  264,  265,  266,  257,   -1,
   -1,  260,  261,  262,  263,  264,  265,  266,  277,  278,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,  277,  278,
  260,  261,  262,  263,  264,  265,  266,  257,   -1,   -1,
  260,  257,   -1,   -1,  260,   -1,  266,  277,  278,   -1,
  266,   -1,   -1,   -1,   -1,   -1,   -1,  277,  278,   -1,
   -1,  277,  278,   -1,  267,   -1,  269,  270,  271,  272,
   -1,   -1,   -1,  257,   -1,   -1,  260,  261,  262,  263,
  264,  265,  266,  257,   -1,   -1,  260,   -1,   -1,   -1,
   -1,   -1,  266,  277,  278,   -1,   -1,   -1,  257,   -1,
   -1,  260,   -1,  277,  278,  257,   -1,  266,  260,  261,
  262,  263,  264,  265,  266,   -1,   -1,   -1,  277,  278,
   -1,   -1,   -1,   -1,   -1,  277,  278,
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
"program : '{' '}' error",
"program : '{' sentenceList error",
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
#line 154 ".\Gramaticas\gramaticaLenguaje.y"

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
#line 20 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Programa vacio");}
break;
case 3:
#line 21 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Programa vacio"); yyerror("Sentencias fuera del rango del programa");}
break;
case 4:
#line 22 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("No existe fin de programa");}
break;
case 5:
#line 23 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta llaves delimitadores de programa");}
break;
case 10:
#line 32 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Sentencia vacia");}
break;
case 16:
#line 42 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Sentencia declarativa en lugar de una ejecutable");}
break;
case 40:
#line 90 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");}
break;
case 41:
#line 91 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Else vacio");}
break;
case 42:
#line 92 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");}
break;
case 44:
#line 96 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("While vacio");}
break;
case 46:
#line 100 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta segundo parentesis en la condicion");}
break;
case 47:
#line 101 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta primer parentesis en la condicion");}
break;
case 48:
#line 102 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Faltan  parentesis en la condicion");}
break;
case 54:
#line 114 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Expression no puede ir entre parentesis");}
break;
case 67:
#line 135 ".\Gramaticas\gramaticaLenguaje.y"
{crequearRangoSHORT(yyvsp[0]); TablaDeSimbolos::chequearPositivos(yyvsp[0]);}
break;
case 68:
#line 136 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);}
break;
case 69:
#line 137 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearPositivos(yyvsp[0]);}
break;
case 70:
#line 138 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);}
break;
#line 566 "y.tab.c"
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
