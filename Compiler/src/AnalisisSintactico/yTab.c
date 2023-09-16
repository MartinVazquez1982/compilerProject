#include "../AnalisisLexico/AnalizadorLexico.h"

#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.8 (Berkeley) 01/20/90";
#endif
#define YYBYACC 1
#line 2 ".\Gramaticas\gramaticaLenguaje.y"
#line 8 "yTab.c"
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
    0,    1,    1,    2,    2,    2,    2,    2,    2,    2,
    2,    5,    3,    4,    4,   14,   15,   15,   10,   10,
   16,   12,   12,    6,    6,    7,    8,   18,   13,   13,
   13,   20,   20,   20,   17,   17,   17,   19,   19,   19,
   19,   19,   19,   21,   21,   21,   21,   21,   11,   11,
   11,    9,   22,
};
short yylen[] = {                                         2,
    3,    3,    2,    1,    1,    1,    1,    1,    1,    1,
    1,    2,    3,    8,    7,    2,    2,    1,    4,    3,
    1,    3,    1,   11,    7,    5,    2,    3,    3,    3,
    1,    3,    3,    1,    1,    1,    2,    1,    1,    1,
    1,    1,    1,    1,    2,    1,    2,    1,    1,    1,
    1,    2,    1,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,    0,    0,   49,   50,   51,    0,
    0,    0,    0,    4,    5,    6,    7,    8,    9,   10,
   11,    0,    0,   53,   52,   27,    0,    0,    0,    0,
    1,    0,    3,   23,    0,   44,   48,   46,    0,    0,
    0,    0,   36,    0,    0,    0,   34,    0,   20,    0,
   21,    2,    0,   37,   45,   47,   38,   39,   40,   41,
   42,   43,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   19,   22,   28,    0,    0,   16,    0,   26,
    0,    0,   32,   33,    0,   18,    0,    0,    0,    0,
   17,   15,    0,    0,   14,    0,    0,   24,
};
short yydgoto[] = {                                       2,
   87,   13,   14,   15,   16,   17,   18,   19,   20,   21,
   22,   35,   46,   67,   88,   50,   47,   42,   63,   48,
   43,   25,
};
short yysindex[] = {                                    -98,
 -191,    0,  -30, -248, -241, -232,    0,    0,    0,    6,
  -32, -123,   19,    0,    0,    0,    0,    0,    0,    0,
    0, -198,  -36,    0,    0,    0,   43,  -36,  -36,  -41,
    0,   40,    0,    0,   26,    0,    0,    0, -181, -262,
  -57,   47,    0,  -40,   48,  -22,    0,  -20,    0,   49,
    0,    0, -186,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -36,  -29,  -28, -184,   55, -170,  -36,  -36,
  -36,  -36,    0,    0,    0, -191, -223,    0,  -25,    0,
  -20,  -20,    0,    0, -113,    0, -213,  -26, -223, -158,
    0,    0,  -23,  -19,    0, -191,  -95,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   59,    0,    0,    0,  -27,    0,
    0,    0,    0,    0,    0,   61,    0,   13,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   17,   33,    0,    0,    0,    0,    0,    0,    0,   62,
    0,    0,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    5,   -5,    0,    0,    0,    0,    0,    0,    0,    0,
   63,    0,    0,    0,   20,    0,   -4,   80,    0,  -38,
    0,    0,
};
#define YYTABLESIZE 245
short yytable[] = {                                      49,
   65,   31,   61,   40,   62,   12,   32,   30,   40,   23,
   55,   90,   56,   35,   35,   35,   35,   35,   41,   35,
   69,   71,   70,   41,    1,   51,   72,   24,   29,   98,
   81,   82,   35,    3,   35,   26,    4,    5,    6,    7,
    8,    9,   10,    3,   27,   28,    4,    5,    6,    7,
    8,    9,   10,   11,   86,   31,   31,   31,   75,   29,
   29,   29,   33,   11,   91,    3,   83,   84,    4,    5,
    6,    7,    8,    9,   10,   30,   30,   30,   34,   32,
   85,   32,   44,   52,   53,   11,   54,   64,   68,   73,
   74,   32,   78,   76,   77,   79,   80,   89,   92,   94,
   97,   95,   12,   96,   13,   25,   66,   45,   93,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    3,    0,    0,    4,    5,    6,    7,
    8,    9,   10,    3,    0,    0,    4,    5,    6,    7,
    8,    9,   10,   11,    0,    0,    0,    0,    0,    0,
    0,    3,    0,   11,    4,    5,    6,    7,    8,    9,
   10,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   11,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   57,   58,   59,   60,    0,    0,    0,    0,    0,
    0,    0,    7,    8,    9,    0,    0,    0,    0,    0,
    0,   36,   37,   38,    0,   39,   36,   37,   38,    0,
   39,   35,   35,   35,   35,
};
short yycheck[] = {                                      41,
   41,  125,   60,   45,   62,    1,   12,   40,   45,   40,
  273,  125,  275,   41,   42,   43,   44,   45,   23,   47,
   43,   42,   45,   28,  123,   30,   47,  276,   61,  125,
   69,   70,   60,  257,   62,  277,  260,  261,  262,  263,
  264,  265,  266,  257,  277,   40,  260,  261,  262,  263,
  264,  265,  266,  277,  278,   43,   44,   45,   63,   43,
   44,   45,   44,  277,  278,  257,   71,   72,  260,  261,
  262,  263,  264,  265,  266,   43,   44,   45,  277,   85,
   76,   87,   40,   44,   59,  277,  268,   41,   41,   41,
  277,   97,  277,  123,  123,   41,  267,  123,  125,  258,
   96,  125,   44,  123,   44,   44,   44,   28,   89,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  257,   -1,   -1,  260,  261,  262,  263,
  264,  265,  266,  257,   -1,   -1,  260,  261,  262,  263,
  264,  265,  266,  277,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  257,   -1,  277,  260,  261,  262,  263,  264,  265,
  266,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  277,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  269,  270,  271,  272,   -1,   -1,   -1,   -1,   -1,
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
"sentenceList : sentenceList sentence ','",
"sentenceList : sentence ','",
"sentence : assignment",
"sentence : function",
"sentence : declaration",
"sentence : ifStatement",
"sentence : whileStatement",
"sentence : class",
"sentence : print",
"sentence : functionCall",
"declaration : type variableList",
"assignment : ID '=' expression",
"function : VOID ID '(' formalParameter ')' '{' functionBody '}'",
"function : VOID ID '(' ')' '{' functionBody '}'",
"formalParameter : type ID",
"functionBody : sentenceList RETURN",
"functionBody : RETURN",
"functionCall : ID '(' realParameter ')'",
"functionCall : ID '(' ')'",
"realParameter : factor",
"variableList : variableList ';' ID",
"variableList : ID",
"ifStatement : IF '(' condition ')' '{' sentenceList '}' ELSE '{' sentenceList '}'",
"ifStatement : IF '(' condition ')' '{' sentenceList '}'",
"whileStatement : WHILE '(' condition ')' DO",
"class : CLASS ID",
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
typedef int YYSTYPE;
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
case 26:
#line 56 ".\Gramaticas\gramaticaLenguaje.y"
//{ sentenceList }
break;
case 27:
#line 59 ".\Gramaticas\gramaticaLenguaje.y"
//{sentenceList}
break;
#line 399 "y.tab.c"
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
