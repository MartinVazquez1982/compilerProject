#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.8 (Berkeley) 01/20/90";
#endif
#define YYBYACC 1
#line 2 ".\Gramaticas\gramaticaLenguaje.y"
    #include <iostream>
    #include "../AnalisisLexico/AnalizadorLexico.h"
#line 9 "yTab.cpp"
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
    0,    1,    1,    2,    2,    3,    3,    3,    8,    8,
    4,    4,    4,    4,    4,    4,    6,   13,    5,    5,
   17,   12,   12,   18,   15,   15,    9,    9,   10,    7,
   20,   16,   16,   16,   22,   22,   22,   19,   19,   19,
   21,   21,   21,   21,   21,   21,   23,   23,   23,   23,
   23,   14,   14,   14,   11,   24,
};
short yylen[] = {                                         2,
    3,    2,    1,    2,    2,    1,    1,    1,    3,    2,
    1,    1,    1,    1,    1,    1,    2,    3,    8,    7,
    2,    4,    3,    1,    3,    1,   12,    8,    8,    5,
    3,    3,    3,    1,    3,    3,    1,    1,    1,    2,
    1,    1,    1,    1,    1,    1,    1,    2,    1,    2,
    1,    1,    1,    1,    2,    1,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,    0,    0,   52,   53,   54,    0,
    0,   16,    0,    3,    0,    0,    6,    7,    8,   11,
   12,   13,   14,   15,    0,    0,   56,   55,    0,    0,
    0,    0,    0,    1,    2,    4,    5,   26,    0,   47,
   51,   49,    0,    0,    0,    0,   39,    0,    0,    0,
    0,   37,    0,   23,    0,   24,    0,   40,   48,   50,
   41,   42,   43,   44,   45,   46,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   22,   25,   31,
    0,   30,    0,   21,    0,    0,    0,    0,   35,   36,
    0,    0,    0,    0,    0,   10,    0,    0,   20,    0,
    0,    0,   28,    9,   19,   29,    0,    0,    0,   27,
};
short yydgoto[] = {                                       2,
   13,   14,   15,   16,   17,   18,   19,   92,   20,   21,
   22,   23,   24,   25,   39,   51,   72,   55,   52,   46,
   67,   53,   47,   28,
};
short yysindex[] = {                                   -102,
 -186,    0,  -14, -240, -239, -237,    0,    0,    0,   15,
  -33,    0, -123,    0,    3,   14,    0,    0,    0,    0,
    0,    0,    0,    0, -216,  -36,    0,    0,  -39,   43,
  -36,  -36,  -41,    0,    0,    0,    0,    0,   26,    0,
    0,    0, -181, -265,  -57,   47,    0, -186,  -40,   48,
  -13,    0,  -23,    0,   49,    0, -183,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -36,  -28, -113,  -26,
 -179,   55, -168,  -36,  -36,  -36,  -36,    0,    0,    0,
 -218,    0, -186,    0,  -22,  -21,  -23,  -23,    0,    0,
   56,  -71,  -94, -186, -218,    0, -214,   59,    0,  -84,
  -69,  -19,    0,    0,    0,    0, -218,  -61, -154,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   62,    0,
    0,    0,  -27,    0,    0,    0,    0,    0,    0,    0,
   63,    0,    8,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   22,   25,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
  -37,   -7,    0,  -58,    0,    0,    0,  -82,    0,    0,
    0,    0,    0,   60,    0,    0,    0,    0,   -4,   77,
    0,    7,    0,    0,
};
#define YYTABLESIZE 245
short yytable[] = {                                      54,
   70,   34,   65,   44,   66,   35,   33,   59,   44,   60,
   69,   82,  101,   38,   38,   38,   38,   38,   76,   38,
    1,   45,   91,   77,  108,   26,   45,   32,   56,   74,
   99,   75,   38,   98,   38,   27,   91,   29,    3,   30,
  105,    4,   98,  102,  103,   93,   36,   10,   91,   98,
   34,   34,   34,   97,   31,  106,  100,   37,   11,   12,
   38,   35,   80,  109,   32,   32,   32,   33,   33,   33,
    3,   89,   90,    4,    5,    6,    7,    8,    9,   10,
   87,   88,   49,   48,   57,   35,   58,   68,   73,   78,
   11,   12,   35,   79,   81,   85,   83,   84,   86,   96,
   94,   95,  104,  107,  110,   17,   18,   50,   71,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    3,    0,    0,    4,    5,    6,    7,
    8,    9,   10,    3,    0,    0,    4,    5,    6,    7,
    8,    9,   10,   11,   12,    0,    0,    0,    0,    0,
    0,    0,    3,   11,   12,    4,    5,    6,    7,    8,
    9,   10,    3,    0,    0,    4,    5,    6,    7,    8,
    9,   10,   11,   12,    0,    3,    0,    3,    4,    0,
    4,    0,   11,   12,   10,    3,   10,    0,    4,    0,
    0,    0,    0,    0,   10,   11,   12,   11,   12,    0,
    0,   61,   62,   63,   64,   11,   12,    0,    0,    0,
    0,    0,    7,    8,    9,    0,    0,    0,    0,    0,
    0,   40,   41,   42,    0,   43,   40,   41,   42,    0,
   43,   38,   38,   38,   38,
};
short yycheck[] = {                                      41,
   41,  125,   60,   45,   62,   13,   40,  273,   45,  275,
   48,  125,   95,   41,   42,   43,   44,   45,   42,   47,
  123,   26,   81,   47,  107,   40,   31,   61,   33,   43,
  125,   45,   60,   92,   62,  276,   95,  277,  257,  277,
  125,  260,  101,  258,  259,   83,   44,  266,  107,  108,
   43,   44,   45,  125,   40,  125,   94,   44,  277,  278,
  277,   69,   67,  125,   43,   44,   45,   43,   44,   45,
  257,   76,   77,  260,  261,  262,  263,  264,  265,  266,
   74,   75,   40,  123,   59,   93,  268,   41,   41,   41,
  277,  278,  100,  277,  123,   41,  123,  277,  267,   44,
  123,  123,   44,  123,  259,   44,   44,   31,   49,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  257,   -1,   -1,  260,  261,  262,  263,
  264,  265,  266,  257,   -1,   -1,  260,  261,  262,  263,
  264,  265,  266,  277,  278,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  257,  277,  278,  260,  261,  262,  263,  264,
  265,  266,  257,   -1,   -1,  260,  261,  262,  263,  264,
  265,  266,  277,  278,   -1,  257,   -1,  257,  260,   -1,
  260,   -1,  277,  278,  266,  257,  266,   -1,  260,   -1,
   -1,   -1,   -1,   -1,  266,  277,  278,  277,  278,   -1,
   -1,  269,  270,  271,  272,  277,  278,   -1,   -1,   -1,
   -1,   -1,  263,  264,  265,   -1,   -1,   -1,   -1,   -1,
   -1,  273,  274,  275,   -1,  277,  273,  274,  275,   -1,
  277,  269,  270,  271,  272,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 278
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,"IF","ELSE","ENDIF","PRINT","CLASS","VOID","SHORT","ULONG",
"FLOAT","WHILE","DO","LESSLESS","EQUAL","NOTEQUAL","GREATEREQUAL","LESSEQUAL",
"CTESHORT","CTEULONG","CTEFLOAT","CTESTRING","ID","RETURN",
};
char *yyrule[] = {
"$accept : program",
"program : '{' sentenceList '}'",
"sentenceList : sentenceList sentence",
"sentenceList : sentence",
"sentence : declarative ','",
"sentence : executable ','",
"declarative : function",
"declarative : declaration",
"declarative : class",
"executableList : executableList executable ','",
"executableList : executable ','",
"executable : ifStatement",
"executable : whileStatement",
"executable : print",
"executable : functionCall",
"executable : assignment",
"executable : RETURN",
"declaration : type variableList",
"assignment : ID '=' expression",
"function : VOID ID '(' formalParameter ')' '{' sentenceList '}'",
"function : VOID ID '(' ')' '{' sentenceList '}'",
"formalParameter : type ID",
"functionCall : ID '(' realParameter ')'",
"functionCall : ID '(' ')'",
"realParameter : factor",
"variableList : variableList ';' ID",
"variableList : ID",
"ifStatement : IF '(' condition ')' '{' executableList '}' ELSE '{' executableList '}' ENDIF",
"ifStatement : IF '(' condition ')' '{' executableList '}' ENDIF",
"whileStatement : WHILE '(' condition ')' DO '{' executableList '}'",
"class : CLASS ID '{' sentenceList '}'",
"condition : factor operatorsLogics factor",
"expression : expression '+' termino",
"expression : expression '-' termino",
"expression : termino",
"termino : termino '*' factor",
"termino : termino '/' factor",
"termino : factor",
"factor : ID",
"factor : constant",
"factor : ID LESSLESS",
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
#line 116 ".\Gramaticas\gramaticaLenguaje.y"

void yyerror(string menssage){
	cout << "Error Sintactico: " << menssage << endl;
}
#line 264 "y.tab.c"
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
        cout << "Entrada a la tabla de simbolos: " << yylval << endl;
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
case 18:
#line 42 ".\Gramaticas\gramaticaLenguaje.y"
{cout << "Asignacion Reconocida" << endl;}
break;
#line 408 "y.tab.c"
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
