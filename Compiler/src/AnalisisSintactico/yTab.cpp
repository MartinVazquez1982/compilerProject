#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.8 (Berkeley) 01/20/90";
#endif
#define YYBYACC 1
#line 2 ".\Gramaticas\gramaticaLenguaje.y"
    #include <iostream>
    #include "../AnalisisLexico/AnalizadorLexico.h"
#line 9 "y.tab.c"
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
    6,    6,   14,   15,   17,   17,   13,   13,   13,   19,
   19,    5,    5,    5,    5,   20,   12,   12,   12,   21,
    9,    9,    9,    9,    9,    9,   10,   10,   10,   10,
   10,    7,   22,   18,   18,   18,   18,   25,   25,   25,
   23,   23,   23,   24,   24,   24,   24,   24,   24,   26,
   26,   26,   26,   26,   16,   16,   16,   11,   27,
};
short yylen[] = {                                         2,
    3,    2,    3,    2,    1,    2,    2,    1,    1,    1,
    1,    3,    2,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    2,    2,    3,    1,    3,    3,    5,    3,
    3,    8,    7,    7,    6,    2,    4,    3,    3,    1,
   12,    8,    7,    7,    6,    7,    8,    7,    7,    6,
    7,    5,    3,    3,    3,    1,    3,    3,    3,    1,
    1,    1,    2,    1,    1,    1,    1,    1,    1,    1,
    2,    1,    2,    1,    1,    1,    1,    2,    1,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,    0,    0,   75,   76,   77,    0,
    0,   20,    0,    8,    0,    5,    0,    0,    9,   10,
   11,   15,   16,   17,   18,   19,   21,   22,    0,    0,
   70,   74,   72,    0,    0,    0,    0,    0,   62,   79,
   78,    0,    0,    0,    0,   26,    0,    0,    0,    0,
    3,    1,    4,    6,    7,    0,    0,    0,    0,   63,
    0,   71,   73,    0,    0,   64,   65,   66,   67,   68,
   69,    0,    0,    0,    0,    0,    0,    0,    0,   60,
    0,   31,    0,    0,    0,    0,    0,    0,    0,    0,
   30,   39,    0,    0,   14,    0,    0,    0,   53,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   36,    0,   37,   25,    0,    0,    0,   13,
    0,    0,    0,    0,   52,    0,    0,    0,    0,    0,
    0,   57,    0,    0,   58,   59,    0,    0,   29,    0,
    0,    0,    0,   45,   12,    0,    0,    0,    0,    0,
   50,    0,   35,    0,   43,   46,    0,   38,   44,   33,
    0,   48,   51,    0,   49,   34,    0,   42,   32,   47,
    0,    0,    0,   41,
};
short yydgoto[] = {                                       2,
   15,   16,   17,   18,   19,   20,   21,   97,   22,   23,
   24,   25,   26,   27,   28,   29,   50,   85,   30,   86,
   87,   37,   80,   72,   81,   39,   41,
};
short yysindex[] = {                                   -113,
    9,    0,  -28, -262, -250, -240,    0,    0,    0,  -22,
  -27,    0, -216,    0,   19,    0,    1,   11,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -219,  -15,
    0,    0,    0, -207,   15, -224,  -21,   50,    0,    0,
    0,  -54,   41,   15,  -39,    0,  -16, -188,  -40,   46,
    0,    0,    0,    0,    0,   46,  -10, -183,   68,    0,
  -20,    0,    0,  171,    3,    0,    0,    0,    0,    0,
    0,   15,  106,  -33,  -38,    7, -154,  -16,   35,    0,
  -14,    0,    8, -157,   35,   91,   92, -142,  -42,   35,
    0,    0,  171,   13,    0,   93,  -73,  171,    0,   38,
   16,   97,   18, -125,  171,   20,   27,   15,   15,   15,
   15,  106,    0,   23,    0,    0, -132,  -66, -109,    0,
   37, -112,  105,  210,    0,  106,   36,  171,   39,  223,
  171,    0,  -14,  -14,    0,    0,   48,  106,    0, -101,
  -99,  225,  -34,    0,    0,  -95,   67,  106,  239,  181,
    0,  252,    0,   77,    0,    0, -162,    0,    0,    0,
   96,    0,    0,  254,    0,    0,   42,    0,    0,    0,
  171,  262,  -93,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  167,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  154,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  131,
    0,    0,    0,    0,    0,  135,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  126,    0,
   63,    0,  128,    0,  133,    0,    0,    0,   43,  132,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   74,   84,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
  -47,   24,  -55,  428,    0,    0,    0,  -57,    0,    0,
    0,    0,    0,    0,    0,   -7,  148,   -3,    0,  107,
    0,   22,   12,    0,   -9,    0,    0,
};
#define YYTABLESIZE 600
short yytable[] = {                                      78,
   83,   77,  104,  117,   36,   78,  158,  101,   95,    1,
   36,   35,   49,   40,   38,  141,   36,   44,   48,   65,
   94,   38,   36,   78,   59,  100,   42,  110,   36,   78,
   58,   45,  111,   47,   36,  118,   43,   95,   53,   51,
  124,   84,   95,   79,   54,   57,   38,  130,   62,   95,
   63,  122,   14,   90,   55,   38,   61,   46,  140,   36,
   60,  142,   14,   95,  137,   75,   84,  132,   73,  108,
  149,  109,   95,  152,  107,   95,  143,  108,  147,  109,
   74,   14,   48,   99,   61,   61,   61,   61,   82,   61,
  154,   14,  164,   91,   95,  167,  168,   47,  133,  134,
  161,   64,   93,   56,   88,   56,   56,   56,   92,   70,
   14,   71,  106,  172,   54,   95,   54,   54,   54,  113,
   14,  135,  136,   53,   55,   98,   55,   55,   55,  105,
  112,  114,  115,   13,  116,  119,  120,  127,  126,   14,
  128,  129,  131,   52,  139,  138,  144,    3,  145,   14,
    4,    5,    6,    7,    8,    9,   10,  155,  148,  156,
   53,  150,  125,  159,  171,  174,    2,   11,   12,   27,
   53,   38,  153,   40,   24,   28,   56,   53,   23,    0,
  102,    0,    0,    3,   53,    0,    4,    0,    0,    0,
    3,  160,   10,    4,   61,   61,   61,   61,   61,   10,
   61,  166,    0,  121,   12,    0,    0,    0,    0,    0,
  121,   12,    0,   61,    0,   61,    0,    0,    0,    0,
  169,    0,    7,    8,    9,   60,    0,   76,  103,    7,
    8,    9,   31,   32,   33,    0,   34,    0,   31,   32,
   33,    0,   34,    0,   31,   32,   33,    0,   34,   46,
   31,   32,   33,    0,   34,   24,   31,   32,   33,   23,
   34,    0,   31,   32,   33,    3,   89,    0,    4,    5,
    6,    7,    8,    9,   10,    3,   61,    0,    4,    5,
    6,    7,    8,    9,   10,   11,   12,   31,   32,   33,
    0,   34,    0,    0,    3,   11,   12,    4,    5,    6,
    7,    8,    9,   10,    3,  163,    0,    4,    5,    6,
    7,    8,    9,   10,   11,   12,    0,    0,   66,   67,
   68,   69,    0,    3,   11,   12,    4,    5,    6,    7,
    8,    9,   10,    3,  146,    0,    4,    5,    6,    7,
    8,    9,   10,   11,   12,    0,    0,  151,    0,  157,
    0,    0,    3,   11,   12,    4,    5,    6,    7,    8,
    9,   10,    3,  162,    0,    4,    5,    6,    7,    8,
    9,   10,   11,   12,    0,    0,  165,    0,  170,    0,
    0,    0,   11,   12,    0,    0,  173,   24,    0,    0,
   24,   23,    0,    0,   23,    0,   24,    0,    0,    0,
   23,    0,    0,    0,    0,    0,    0,   24,   24,    0,
    0,   23,   23,    0,    0,    0,    0,    0,    0,    0,
   61,    0,   61,   61,   61,   61,    0,    3,    0,    0,
    4,    5,    6,    7,    8,    9,   10,    3,    0,    0,
    4,    5,    6,    7,    8,    9,   10,   11,   12,    0,
    0,    0,    0,    0,    0,    0,    0,   11,   12,    0,
    0,    0,    0,    0,    0,    0,    3,    0,    0,    4,
    0,    0,    0,    0,    0,   10,    0,    0,    0,    3,
    0,    3,    4,    0,    4,    0,  121,   12,   10,    0,
   10,   96,    0,    0,    0,    3,    0,    0,    4,  121,
   12,  121,   12,    0,   10,    0,    0,    0,    3,    0,
    3,    4,    0,    4,    0,  121,   12,   10,    3,   10,
   96,    4,    0,    0,  123,   96,    0,   10,  121,   12,
  121,   12,   96,    0,    0,    0,    0,    0,  121,   12,
    0,    0,    0,    0,    0,  123,   96,    0,    0,    0,
    0,  123,    0,    0,    0,   96,    0,  123,   96,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  123,
    0,    0,    0,    0,    0,    0,  123,   96,    0,  123,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  123,    0,    0,    0,    0,    0,    0,   96,  123,
};
short yycheck[] = {                                      40,
   41,   41,   41,   46,   45,   40,   41,   41,   64,  123,
   45,   40,   40,  276,    3,  125,   45,   40,   46,   41,
   41,   10,   45,   40,   40,   73,  277,   42,   45,   40,
   46,   10,   47,   61,   45,   93,  277,   93,   15,  256,
   98,   49,   98,   47,   44,   61,   35,  105,  273,  105,
  275,  125,   44,   57,   44,   44,   35,  277,  125,   45,
  268,  119,   44,  119,  112,   44,   74,   41,  123,   43,
  128,   45,  128,  131,   78,  131,   40,   43,  126,   45,
   40,   44,   46,   72,   42,   43,   44,   45,  277,   47,
  138,   44,  150,  277,  150,  258,  259,   61,  108,  109,
  148,  123,  123,   41,   59,   43,   44,   45,   41,   60,
   44,   62,  267,  171,   41,  171,   43,   44,   45,  277,
   44,  110,  111,  100,   41,  123,   43,   44,   45,  123,
  123,   41,   41,  125,  277,  123,   44,   41,  123,   44,
  123,  267,  123,  125,  277,  123,  259,  257,   44,   44,
  260,  261,  262,  263,  264,  265,  266,  259,  123,  259,
  137,  123,  125,  259,  123,  259,    0,  277,  278,   44,
  147,   44,  125,   41,   44,   44,   29,  154,   44,   -1,
   74,   -1,   -1,  257,  161,   -1,  260,   -1,   -1,   -1,
  257,  125,  266,  260,   41,   42,   43,   44,   45,  266,
   47,  125,   -1,  277,  278,   -1,   -1,   -1,   -1,   -1,
  277,  278,   -1,   60,   -1,   62,   -1,   -1,   -1,   -1,
  125,   -1,  263,  264,  265,  268,   -1,  267,  267,  263,
  264,  265,  273,  274,  275,   -1,  277,   -1,  273,  274,
  275,   -1,  277,   -1,  273,  274,  275,   -1,  277,  277,
  273,  274,  275,   -1,  277,  125,  273,  274,  275,  125,
  277,   -1,  273,  274,  275,  257,  277,   -1,  260,  261,
  262,  263,  264,  265,  266,  257,  123,   -1,  260,  261,
  262,  263,  264,  265,  266,  277,  278,  273,  274,  275,
   -1,  277,   -1,   -1,  257,  277,  278,  260,  261,  262,
  263,  264,  265,  266,  257,  125,   -1,  260,  261,  262,
  263,  264,  265,  266,  277,  278,   -1,   -1,  269,  270,
  271,  272,   -1,  257,  277,  278,  260,  261,  262,  263,
  264,  265,  266,  257,  125,   -1,  260,  261,  262,  263,
  264,  265,  266,  277,  278,   -1,   -1,  125,   -1,  125,
   -1,   -1,  257,  277,  278,  260,  261,  262,  263,  264,
  265,  266,  257,  125,   -1,  260,  261,  262,  263,  264,
  265,  266,  277,  278,   -1,   -1,  125,   -1,  125,   -1,
   -1,   -1,  277,  278,   -1,   -1,  125,  257,   -1,   -1,
  260,  257,   -1,   -1,  260,   -1,  266,   -1,   -1,   -1,
  266,   -1,   -1,   -1,   -1,   -1,   -1,  277,  278,   -1,
   -1,  277,  278,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  267,   -1,  269,  270,  271,  272,   -1,  257,   -1,   -1,
  260,  261,  262,  263,  264,  265,  266,  257,   -1,   -1,
  260,  261,  262,  263,  264,  265,  266,  277,  278,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  277,  278,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  257,   -1,   -1,  260,
   -1,   -1,   -1,   -1,   -1,  266,   -1,   -1,   -1,  257,
   -1,  257,  260,   -1,  260,   -1,  277,  278,  266,   -1,
  266,   64,   -1,   -1,   -1,  257,   -1,   -1,  260,  277,
  278,  277,  278,   -1,  266,   -1,   -1,   -1,  257,   -1,
  257,  260,   -1,  260,   -1,  277,  278,  266,  257,  266,
   93,  260,   -1,   -1,   97,   98,   -1,  266,  277,  278,
  277,  278,  105,   -1,   -1,   -1,   -1,   -1,  277,  278,
   -1,   -1,   -1,   -1,   -1,  118,  119,   -1,   -1,   -1,
   -1,  124,   -1,   -1,   -1,  128,   -1,  130,  131,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  142,
   -1,   -1,   -1,   -1,   -1,   -1,  149,  150,   -1,  152,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  164,   -1,   -1,   -1,   -1,   -1,   -1,  171,  172,
};
#define YYFINAL 2
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
"assignment : ID '=' expression",
"assignment : nesting '=' expression",
"assignment : nesting '=' ID '.' ID",
"nesting : nesting '.' ID",
"nesting : ID '.' ID",
"function : VOID ID '(' formalParameter ')' '{' sentenceList '}'",
"function : VOID ID '(' ')' '{' sentenceList '}'",
"function : ID '(' formalParameter ')' '{' sentenceList '}'",
"function : ID '(' ')' '{' sentenceList '}'",
"formalParameter : type ID",
"functionCall : ID '(' realParameter ')'",
"functionCall : ID '(' ')'",
"functionCall : nesting '(' ')'",
"realParameter : expression",
"ifStatement : IF '(' condition ')' '{' executableList '}' ELSE '{' executableList '}' ENDIF",
"ifStatement : IF '(' condition ')' '{' executableList '}' ENDIF",
"ifStatement : IF '(' condition '{' executableList '}' ENDIF",
"ifStatement : IF condition ')' '{' executableList '}' ENDIF",
"ifStatement : IF condition '{' executableList '}' ENDIF",
"ifStatement : IF '(' condition ')' '{' '}' ENDIF",
"whileStatement : WHILE '(' condition ')' DO '{' executableList '}'",
"whileStatement : WHILE '(' condition DO '{' executableList '}'",
"whileStatement : WHILE condition ')' DO '{' executableList '}'",
"whileStatement : WHILE condition DO '{' executableList '}'",
"whileStatement : WHILE '(' condition ')' DO '{' '}'",
"class : CLASS ID '{' sentenceList '}'",
"condition : factor operatorsLogics factor",
"expression : expression '+' termino",
"expression : expression '-' termino",
"expression : termino",
"expression : '(' expression ')'",
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
#line 147 ".\Gramaticas\gramaticaLenguaje.y"

void yyerror(string menssage){
	cout << "Error Sintactico: " << menssage << endl;
}

void yywarning(string menssage){
    cout << "Warning: " << menssage << endl;
}
#line 386 "y.tab.c"
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
#line 12 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Programa vacio");}
break;
case 3:
#line 13 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Programa vacio"); yyerror("Sentencias fuera del rango del programa");}
break;
case 8:
#line 22 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Sentencia vacia");}
break;
case 14:
#line 32 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Sentencia declarativa en lugar de una ejecutable");}
break;
case 34:
#line 68 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta palabra reservada void");}
break;
case 35:
#line 69 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta palabra reservada void");}
break;
case 43:
#line 85 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta segundo parentesis en la condicion");}
break;
case 44:
#line 86 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta primer parentesis en la condicion");}
break;
case 45:
#line 87 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Faltan  parentesis en la condicion");}
break;
case 46:
#line 88 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");}
break;
case 48:
#line 92 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta segundo parentesis en la condicion");}
break;
case 49:
#line 93 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta primer parentesis en la condicion");}
break;
case 50:
#line 94 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta parentesis en la condicion");}
break;
case 51:
#line 95 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("While vacio");}
break;
case 57:
#line 107 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Expression no puede ir entre parentesis");}
break;
#line 586 "y.tab.c"
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
