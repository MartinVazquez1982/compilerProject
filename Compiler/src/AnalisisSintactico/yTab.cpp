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
   24,   24,    7,   26,   19,   19,   19,   19,   29,   29,
   29,   27,   27,   27,   28,   28,   28,   28,   28,   28,
   30,   30,   30,   30,   30,   30,   16,   16,   16,   11,
   31,   22,
};
short yylen[] = {                                         2,
    3,    2,    1,    2,    1,    2,    2,    1,    1,    1,
    1,    3,    2,    1,    1,    1,    1,    1,    1,    1,
    1,    2,    2,    3,    1,    3,    3,    1,    8,    7,
    2,    1,    2,    3,    4,    1,    6,    4,    3,    5,
    5,    4,    3,    3,    4,    1,    1,    2,    3,    2,
    2,    1,    5,    3,    3,    3,    1,    3,    3,    3,
    1,    1,    1,    2,    1,    1,    1,    1,    1,    1,
    1,    2,    1,    2,    1,    2,    1,    1,    1,    2,
    1,    2,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,   77,   78,   79,    0,    0,    0,
    8,    0,    0,    5,    0,    0,    9,   10,   11,   15,
   16,   17,   18,   19,   20,   21,    0,    0,   71,   75,
   73,   28,    0,    0,    0,    0,    0,    0,   63,   81,
   80,    0,    0,    0,   25,    0,    2,    0,    4,    6,
    7,    0,    0,    0,    0,    0,   72,   76,   74,   64,
    0,   39,    0,    0,   46,   47,    0,   51,   65,   66,
   67,   68,   69,   70,    0,    0,    0,    0,    0,    1,
    0,    0,   61,    0,   27,   34,    0,    0,   49,    0,
   82,   48,   14,    0,    0,    0,   38,   54,    0,    0,
    0,    0,   42,   24,    0,    0,    0,    0,    0,   35,
   41,   13,   44,    0,    0,   40,    0,   53,    0,   33,
    0,   58,    0,    0,   59,   60,   12,   45,   37,    0,
    0,   32,    0,   31,   30,    0,   29,
};
short yydgoto[] = {                                      12,
  130,   14,   15,   16,   17,   18,   19,   95,   20,   21,
   22,   23,   24,   25,   26,   27,   46,   28,   82,  102,
  131,   66,   88,   36,   67,   37,   83,   75,   84,   39,
   41,
};
short yysindex[] = {                                     21,
  -27, -262, -260, -240,    0,    0,    0,  -27, -230,   39,
    0,    0,   77,    0,   10,   12,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -230,   45,    0,    0,
    0,    0,   44, -245,  -30,  -82,   22,   76,    0,    0,
    0,  -57,   28, -195,    0,   18,    0,   49,    0,    0,
    0,   18,  -20, -196,  -33,   47,    0,    0,    0,    0,
  -63,    0,   42,   95,    0,    0, -224,    0,    0,    0,
    0,    0,    0,    0,   44,   77,  -31,  -63, -187,    0,
  -20,   -5,    0,  -15,    0,    0,   -5,   51,    0, -163,
    0,    0,    0,   56,  -56,  -78,    0,    0,   67,  -19,
 -165,   72,    0,    0,    3,   44,   44,   44,   44,    0,
    0,    0,    0,   70,  -10,    0, -143,    0,   -1,    0,
   -4,    0,  -15,  -15,    0,    0,    0,    0,    0,   -1,
   -3,    0,   -1,    0,    0,   -2,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,   57,    0,
    0,    0,  120,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -41,    0, -112,    0,    0,    0,
    0,    0,    0,    0,    0,   -8,    0,    0,    0,    0,
    0,   14,    0,    0,    0, -108,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -35,    0,    0,
    0,   64,    0,    8,    0,    0,   83,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   30,   35,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
   23,   11,   61,    6,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   50,   99,   54,  -50,    0,
    1,  -69,    0,  123,  -39,  100,   97,    0,  -12,    0,
    0,
};
#define YYTABLESIZE 372
short yytable[] = {                                      62,
   62,   62,   62,   62,   87,   62,   81,   86,   43,  100,
   52,   34,   33,   40,   50,   54,   42,   34,   62,   81,
   62,   90,   13,   49,   34,  115,  108,   57,   58,   59,
  105,  109,   48,   96,   97,   23,   43,  106,  103,  107,
   64,   65,   11,  122,   64,  106,   45,  107,   57,  132,
   57,   57,   57,   50,   35,   51,  117,   22,   49,   64,
  134,   35,   68,  132,   11,   76,   65,   77,  113,   94,
   55,   78,   55,   55,   55,   56,   79,   56,   56,   56,
   85,   62,   11,   65,   55,   91,   35,   89,   34,  104,
   54,  110,   11,  123,  124,  111,   28,   38,   99,  112,
  114,   65,   28,  119,   38,   53,   35,   26,   35,   49,
   11,  120,  121,  127,  128,  129,   23,   28,  133,    3,
   11,  135,  137,   36,   93,   52,  101,    0,   35,   38,
   44,    0,   56,  136,   35,   73,    0,   74,   22,    0,
   49,    0,    0,   10,   52,   52,   52,   52,   50,   50,
   50,   50,    0,   52,   52,    0,    0,   50,   50,   35,
   35,   35,   35,   47,   52,   52,    0,    0,   50,   50,
    0,   98,    0,   80,    1,   61,   62,    2,    1,    0,
  116,    2,    0,    8,    0,    0,    0,    8,    0,    0,
    0,  118,    0,    1,   32,   63,    2,    0,   32,   63,
    1,    0,    8,    2,  125,  126,    0,    0,    0,    8,
    0,    0,    0,   32,   63,   62,   62,   62,   62,   92,
   32,   63,   43,   43,   62,   62,    0,   62,   62,   62,
   62,    5,    6,    7,    0,   62,   62,   60,    0,   29,
   30,   31,    0,   32,    0,   29,   30,   31,   23,   32,
    0,   23,   29,   30,   31,    1,   32,   23,    2,    3,
    4,    5,    6,    7,    8,   57,   57,    0,   23,   23,
   22,    0,    0,   22,    0,    9,   63,    1,    0,   22,
    2,    3,    4,    5,    6,    7,    8,   55,   55,    0,
   22,   22,   56,   56,    0,    1,    0,    9,    2,    3,
    4,    5,    6,    7,    8,    1,    0,    0,    2,    3,
    4,    5,    6,    7,    8,    9,   29,   30,   31,    0,
   32,   26,   26,    1,    0,    9,    2,    3,    4,    5,
    6,    7,    8,    1,    0,    0,    2,    3,    4,    5,
    6,    7,    8,    9,   69,   70,   71,   72,    0,    0,
    0,    1,    0,    9,    2,    3,    4,    5,    6,    7,
    8,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    9,
};
short yycheck[] = {                                      41,
   42,   43,   44,   45,   55,   47,   40,   41,   44,   41,
  123,   45,   40,  276,  123,   46,  277,   45,   60,   40,
   62,   61,    0,   13,   45,   95,   42,  273,  274,  275,
   81,   47,   10,  258,  259,   44,  277,   43,   78,   45,
  123,   36,   44,   41,  123,   43,  277,   45,   41,  119,
   43,   44,   45,   44,    1,   44,   96,   44,   48,  123,
  130,    8,   41,  133,   44,  123,   61,   40,  125,   64,
   41,  267,   43,   44,   45,   41,   59,   43,   44,   45,
  277,  123,   44,   78,   40,   44,   33,   41,   45,  277,
   46,   41,   44,  106,  107,  259,   40,    1,   76,   44,
   95,   96,   46,  123,    8,   61,   53,   44,   55,   99,
   44,  277,   41,   44,  125,  259,  125,   61,  123,    0,
   44,  125,  125,   41,   64,   27,   77,   -1,   75,   33,
    8,   -1,   33,  133,   81,   60,   -1,   62,  125,   -1,
  130,   -1,   -1,  123,  257,  258,  259,  260,  257,  258,
  259,  260,   -1,  266,  267,   -1,   -1,  266,  267,  106,
  107,  108,  109,  125,  277,  278,   -1,   -1,  277,  278,
   -1,   75,   -1,  125,  257,  258,  259,  260,  257,   -1,
  259,  260,   -1,  266,   -1,   -1,   -1,  266,   -1,   -1,
   -1,  125,   -1,  257,  277,  278,  260,   -1,  277,  278,
  257,   -1,  266,  260,  108,  109,   -1,   -1,   -1,  266,
   -1,   -1,   -1,  277,  278,  257,  258,  259,  260,  125,
  277,  278,  258,  259,  266,  267,   -1,  269,  270,  271,
  272,  263,  264,  265,   -1,  277,  278,  268,   -1,  273,
  274,  275,   -1,  277,   -1,  273,  274,  275,  257,  277,
   -1,  260,  273,  274,  275,  257,  277,  266,  260,  261,
  262,  263,  264,  265,  266,  258,  259,   -1,  277,  278,
  257,   -1,   -1,  260,   -1,  277,  278,  257,   -1,  266,
  260,  261,  262,  263,  264,  265,  266,  258,  259,   -1,
  277,  278,  258,  259,   -1,  257,   -1,  277,  260,  261,
  262,  263,  264,  265,  266,  257,   -1,   -1,  260,  261,
  262,  263,  264,  265,  266,  277,  273,  274,  275,   -1,
  277,  258,  259,  257,   -1,  277,  260,  261,  262,  263,
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
"iterativeBody : executable",
"iterativeBody : return",
"iterativeBody : '{' '}'",
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
#line 168 ".\Gramaticas\gramaticaLenguaje.y"

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
case 58:
#line 124 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Expression no puede ir entre parentesis");}
break;
case 71:
#line 145 ".\Gramaticas\gramaticaLenguaje.y"
{crequearRangoSHORT(yyvsp[0]); TablaDeSimbolos::chequearPositivos(yyvsp[0]);}
break;
case 72:
#line 146 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);}
break;
case 73:
#line 147 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearPositivos(yyvsp[0]);}
break;
case 74:
#line 148 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);}
break;
case 76:
#line 150 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Una constante ULONG no puede ser negativa");}
break;
#line 597 "y.tab.c"
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
