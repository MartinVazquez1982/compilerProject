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
    1,    3,    2,    1,    1,    1,    1,    1,    1,    1,
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
   84,   48,   14,    0,    0,   46,    0,   38,   56,    0,
    0,    0,    0,   42,   24,    0,    0,    0,    0,    0,
   35,   41,   13,   44,    0,    0,   40,    0,    0,   53,
    0,    0,   33,    0,   60,    0,    0,   61,   62,   12,
   45,   37,   55,   54,    0,    0,   32,    0,   31,   30,
    0,   29,
};
short yydgoto[] = {                                      12,
  135,   14,   15,   16,   17,   18,   19,   95,   20,   21,
   22,   23,   24,   25,   26,   27,   46,   28,   82,  103,
  136,   66,   88,   36,   67,   37,  121,   83,   75,   84,
   39,   41,
};
short yysindex[] = {                                     21,
  -27, -243, -240, -227,    0,    0,    0,  -27, -222,   39,
    0,    0,   77,    0,   18,   28,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -222,  -12,    0,    0,
    0,    0,   44, -171,  -29,  -82,   33,   76,    0,    0,
    0,  -64,   45, -191,    0,   29,    0,   49,    0,    0,
    0,   29,  -20, -193,  -33,   46,    0,    0,    0,    0,
  -63,    0,   47,   95,   48,    0, -229,    0,    0,    0,
    0,    0,    0,    0,   44,   77,  -31,  -63, -183,    0,
  -20,   -5,    0,  -16,    0,    0,   -5,   54,    0, -154,
    0,    0,    0,   63,  -56,    0,  -78,    0,    0,   67,
  -14, -162,   75,    0,    0,   25,   44,   44,   44,   44,
    0,    0,    0,    0,   74,   -6,    0, -139,  -39,    0,
   -3,   -1,    0,    3,    0,  -16,  -16,    0,    0,    0,
    0,    0,    0,    0,   -1,   -2,    0,   -1,    0,    0,
    2,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,   17,    0,
    0,    0,  129,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -41,    0, -112,    0,    0,    0,
    0,    0,    0,    0,    0,   -8,    0,    0,    0,    0,
    0,   14,    0,    0,    0, -108,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   86,    0,    0,
    0,   88,    0,   36,    0,    0,   92,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   17,    0,
    0,    0,    0,    0,    0,   56,   69,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,
};
short yygindex[] = {                                      0,
   22,   -4,   71,  -22,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   60,  113,   53,  -28,    0,
    4,  -71,    0,  133,  -26,  110,    0,   15,    0,  -61,
    0,    0,
};
#define YYTABLESIZE 372
short yytable[] = {                                      64,
   64,   64,   64,   64,  133,   64,   81,   86,   49,  101,
   52,   34,   33,   65,   50,   38,   54,   34,   64,   81,
   64,   13,   38,  116,   34,  109,   87,   55,   97,   98,
  110,   48,   40,   54,   90,   23,   42,  107,   65,  108,
   64,   94,   11,   49,   64,  126,  127,   38,   53,   43,
  137,  104,  106,   35,   45,   65,   28,   22,   76,   64,
   35,   50,   28,  139,   11,  125,  137,  107,  114,  108,
  118,   51,  115,   68,   65,   78,   59,   28,   59,   59,
   59,   64,   11,   85,   77,   35,   89,   79,   34,   99,
   91,   96,   11,  105,  111,   49,   57,  100,   57,   57,
   57,   57,   58,   59,  112,   35,  113,   35,  122,   58,
   11,   58,   58,   58,  123,  124,   23,  130,  131,  132,
   11,  134,  140,  128,  129,  138,  142,   35,    3,   43,
   49,   26,   36,   35,   93,   73,  102,   74,   22,   52,
   44,  141,   56,   10,   52,   52,   52,   52,   50,   50,
   50,   50,    0,   52,   52,    0,    0,   50,   50,   35,
   35,   35,   35,   47,   52,   52,    0,    0,   50,   50,
    0,    0,    0,   80,    1,   61,   62,    2,    1,    0,
  117,    2,    0,    8,    0,    0,    0,    8,    0,    0,
    0,  120,    0,    1,   32,   63,    2,    0,   32,   63,
    1,    0,    8,    2,    0,    0,    0,    0,    0,    8,
    0,    0,    0,   32,   63,   64,   64,   64,   64,   92,
   32,   63,    0,    0,   64,   64,    0,   64,   64,   64,
   64,    5,    6,    7,    0,   64,   64,   45,   60,   29,
   30,   31,    0,   32,    0,   29,   30,   31,   23,   32,
    0,   23,   29,   30,   31,    1,   32,   23,    2,    3,
    4,    5,    6,    7,    8,    0,    0,    0,   23,   23,
   22,    0,    0,   22,    0,    9,   63,    1,    0,   22,
    2,    3,    4,    5,    6,    7,    8,    0,    0,    0,
   22,   22,    0,    0,    0,    1,    0,    9,    2,    3,
    4,    5,    6,    7,    8,    1,    0,    0,    2,    3,
    4,    5,    6,    7,    8,    9,   29,   30,   31,    0,
   32,    0,    0,    1,    0,    9,    2,    3,    4,    5,
    6,    7,    8,    1,    0,    0,    2,    3,    4,    5,
    6,    7,    8,  119,   69,   70,   71,   72,    0,    0,
    0,    1,    0,    9,    2,    3,    4,    5,    6,    7,
    8,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    9,
};
short yycheck[] = {                                      41,
   42,   43,   44,   45,   44,   47,   40,   41,   13,   41,
  123,   45,   40,   36,  123,    1,   46,   45,   60,   40,
   62,    0,    8,   95,   45,   42,   55,   40,  258,  259,
   47,   10,  276,   46,   61,   44,  277,   43,   61,   45,
  123,   64,   44,   48,  123,  107,  108,   33,   61,  277,
  122,   78,   81,    1,  277,   78,   40,   44,  123,  123,
    8,   44,   46,  135,   44,   41,  138,   43,  125,   45,
   97,   44,   95,   41,   97,  267,   41,   61,   43,   44,
   45,  123,   44,  277,   40,   33,   41,   59,   45,   75,
   44,   44,   44,  277,   41,  100,   41,   76,   43,   44,
   45,  273,  274,  275,  259,   53,   44,   55,  123,   41,
   44,   43,   44,   45,  277,   41,  125,   44,  125,  259,
   44,  125,  125,  109,  110,  123,  125,   75,    0,   44,
  135,   44,   41,   81,   64,   60,   77,   62,  125,   27,
    8,  138,   33,  123,  257,  258,  259,  260,  257,  258,
  259,  260,   -1,  266,  267,   -1,   -1,  266,  267,  107,
  108,  109,  110,  125,  277,  278,   -1,   -1,  277,  278,
   -1,   -1,   -1,  125,  257,  258,  259,  260,  257,   -1,
  259,  260,   -1,  266,   -1,   -1,   -1,  266,   -1,   -1,
   -1,  125,   -1,  257,  277,  278,  260,   -1,  277,  278,
  257,   -1,  266,  260,   -1,   -1,   -1,   -1,   -1,  266,
   -1,   -1,   -1,  277,  278,  257,  258,  259,  260,  125,
  277,  278,   -1,   -1,  266,  267,   -1,  269,  270,  271,
  272,  263,  264,  265,   -1,  277,  278,  277,  268,  273,
  274,  275,   -1,  277,   -1,  273,  274,  275,  257,  277,
   -1,  260,  273,  274,  275,  257,  277,  266,  260,  261,
  262,  263,  264,  265,  266,   -1,   -1,   -1,  277,  278,
  257,   -1,   -1,  260,   -1,  277,  278,  257,   -1,  266,
  260,  261,  262,  263,  264,  265,  266,   -1,   -1,   -1,
  277,  278,   -1,   -1,   -1,  257,   -1,  277,  260,  261,
  262,  263,  264,  265,  266,  257,   -1,   -1,  260,  261,
  262,  263,  264,  265,  266,  277,  273,  274,  275,   -1,
  277,   -1,   -1,  257,   -1,  277,  260,  261,  262,  263,
  264,  265,  266,  257,   -1,   -1,  260,  261,  262,  263,
  264,  265,  266,  277,  269,  270,  271,  272,   -1,   -1,
   -1,  257,   -1,  277,  260,  261,  262,  263,  264,  265,
  266,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  277,
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
#line 364 "y.tab.c"
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
{yyerror("Expression no puede ir entre parentesis");}
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
#line 608 "y.tab.c"
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
