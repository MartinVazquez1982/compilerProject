#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.8 (Berkeley) 01/20/90";
#endif
#define YYBYACC 1
#line 2 ".\Gramaticas\gramaticaLenguaje.y"

#include <iostream>
#include <sstream>
#include "../AnalisisLexico/AnalizadorLexico.h"
#include "../AnalisisLexico/Headers/AccionesSemanticas.h"
#include "../TablaDeSimbolos/TablaDeSimbolos.h"
#include "../AnalisisSemantico/EstructuraTercetos.h"
#include "../AnalisisSemantico/Headers/Ambito.h"
#include "../ContErrWar/ContErrWar.h"
#include "../AnalisisSemantico/Headers/Conversion.h"
#include "../AnalisisSemantico/Headers/InsideClass.h"
#include "../AnalisisSemantico/Headers/VarSinInic.h"

#define RESET   "\x1B[0m"
#define YELLOW  "\x1B[33m"
#define RED "\x1B[31m"
#define BLUE "\x1B[34m"

#line 25 "y.tab.c"
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
    0,    0,    0,    1,    1,    2,    2,    2,    2,    3,
    3,    3,    8,    8,    8,    4,    4,    4,    4,    4,
    4,    6,    6,   15,   16,   19,   19,   18,   18,   13,
   13,   13,   20,   20,    5,   22,   22,   23,   23,   24,
   12,   12,   26,    9,    9,    9,    9,    9,   29,   10,
   10,   30,   28,   28,   28,   28,   28,   27,   27,   27,
   27,    7,    7,    7,    7,   32,   33,   31,   21,   21,
   21,   21,   35,   35,   35,   36,   36,   36,   14,   34,
   34,   34,   34,   34,   34,   37,   37,   37,   37,   37,
   37,   17,   17,   17,   11,   38,   25,
};
short yylen[] = {                                         2,
    3,    2,    1,    2,    1,    2,    2,    1,    2,    1,
    1,    1,    3,    2,    2,    1,    1,    1,    1,    1,
    1,    1,    1,    2,    2,    3,    1,    3,    1,    3,
    2,    2,    3,    1,    4,    5,    4,    2,    1,    2,
    3,    4,    1,    6,    4,    3,    5,    5,    1,    4,
    3,    1,    3,    4,    2,    1,    2,    3,    2,    2,
    1,    4,    5,    1,    6,    2,    2,    3,    3,    3,
    1,    3,    3,    3,    1,    1,    1,    1,    2,    1,
    1,    1,    1,    1,    1,    1,    2,    1,    2,    1,
    2,    1,    1,    1,    2,    1,    2,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,    0,   92,   93,   94,   52,    0,
    0,    8,    0,    0,    0,    5,    0,    0,   10,   11,
   12,   16,   17,   18,   19,   20,   21,   22,   23,    0,
    0,    0,    0,    0,    9,   86,   90,   88,   34,    0,
    0,   78,    0,    0,    0,    0,    0,   75,   77,   96,
   95,   66,    0,   27,    0,    2,    0,    0,    0,    4,
    6,    7,   29,    0,   79,    0,    0,    0,    0,    0,
    0,    0,    0,   87,   91,   89,   80,   81,   82,   83,
    0,    0,   84,   85,    0,   49,   46,    0,    0,    0,
   56,    0,    0,   60,    0,    0,    0,    0,    1,    0,
    0,    0,   33,   41,    0,    0,    0,    0,   39,    0,
    0,   72,   58,    0,    0,    0,   97,   57,    0,    0,
    0,   55,   45,    0,    0,   73,   74,   37,    0,    0,
   26,   28,   42,   38,   35,   50,    0,   62,    0,   15,
   14,   53,    0,    0,   47,    0,   48,   40,   36,   67,
   63,    0,   13,   54,   44,   65,
};
short yydgoto[] = {                                      14,
   15,   16,   17,   18,   19,   20,   21,  121,   22,   23,
   24,   25,   26,   27,   28,   29,   30,   64,   55,   31,
   44,   32,  108,  130,   91,  106,   45,   92,   93,   33,
   46,   34,  139,   85,   47,   48,   49,   51,
};
short yysindex[] = {                                     74,
  -36,   -9, -271, -265, -262,    0,    0,    0,    0, -247,
   96,    0,   13,    0,  161,    0,    1,   23,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -200,
  -33,  -42,   -9,  -40,    0,    0,    0,    0,    0,   13,
 -213,    0,  -35,   29,  310,   43,  -10,    0,    0,    0,
    0,    0,   40,    0,   31,    0,  120,   13,    6,    0,
    0,    0,    0,   34,    0,   13, -182,  -31,   55, -167,
  161,   98,   60,    0,    0,    0,    0,    0,    0,    0,
   69,   69,    0,    0,   13,    0,    0,   58,  359,   66,
    0, -225,  332,    0,   69,   69,   14, -165,    0,   53,
 -162,    6,    0,    0,    6,   76,   55,   -6,    0,  332,
  142,    0,    0,  -10,  -10,    6,    0,    0,   78,   79,
  334,    0,    0,  318, -139,    0,    0,    0, -150,   87,
    0,    0,    0,    0,    0,    0,  -28,    0,  249,    0,
    0,    0,   85,    5,    0, -128,    0,    0,    0,    0,
    0,  284,    0,    0,    0,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -11,
    0,    0,    0,    0,  133,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   90,    0,    0,    0,    0,    0,    0,
    0,    0,  -41,    0,    0,  265,  -19,    0,    0,    0,
    0,    0,    0,    0,   92,    0,    0,    0,   93,    0,
    0,    0,    0,   94,    0,  100,    0,    0,    0,    0,
    0,    0,  305,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  101,    0,    0,  106,    0,    0,    0,    0,  105,
    0,    0,    0,    3,   25,   47,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -11,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    7,    2,   61,  -18,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  119,    0,    0,   45,    0,    0,  595,
   39,    0,    0,    0,    4,    0,  118,  -70,   63,    0,
  113,    0,    0,    0,  -43,  -39,    0,    0,
};
#define YYTABLESIZE 691
short yytable[] = {                                      76,
   76,   76,   76,   76,   50,   76,   68,   35,   58,  104,
   67,   52,   67,   41,   53,  150,   60,   57,   76,   76,
   76,   71,  125,   71,   71,   71,   90,   66,   34,   54,
   40,   95,   86,  123,   34,   41,   96,  114,  115,  136,
   71,   71,   71,   69,   61,   69,   69,   69,   81,   34,
   82,   59,   58,  146,  128,  126,  127,   41,   60,   74,
   75,   76,   69,   69,   69,   70,   62,   70,   70,   70,
  120,   81,  109,   82,   90,  107,   63,  111,   72,   97,
   69,   76,   71,   94,   70,   70,   70,   68,   83,   98,
   84,   90,  101,  112,  103,   81,  100,   82,   12,  110,
  113,  117,  143,   71,  102,   90,  105,   68,   60,  122,
  134,  131,   60,   41,  132,   13,  133,   12,  135,  147,
   42,  140,  141,  116,  144,   69,  148,  149,  153,  154,
  155,   42,    3,   64,   13,   25,   32,   24,  112,   12,
   81,  129,   82,   31,   30,  152,   43,   70,   51,  119,
   70,   42,   73,   60,  124,    0,   13,   83,   42,   84,
    0,    0,    0,   12,    0,    0,    0,    0,    0,   68,
    0,    0,    0,    0,    0,    0,   42,    0,    0,    0,
   13,    0,    0,    0,   42,   12,   42,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   11,    0,    0,   42,
   42,    0,   13,   42,   12,    0,    0,    0,    0,    0,
    0,    0,    0,   42,   42,   76,   76,   76,   76,    0,
   56,   13,    0,    0,   76,   76,    0,   76,   76,   76,
   76,    0,   65,    0,   65,   76,   76,   71,   71,   71,
   71,   36,   37,   38,   99,   39,   71,   71,   54,   71,
   71,   71,   71,    0,    0,    0,   34,   71,   71,   69,
   69,   69,   69,   36,   37,   38,  138,   39,   69,   69,
    0,   69,   69,   69,   69,    0,    6,    7,    8,   69,
   69,   70,   70,   70,   70,   36,   37,   38,    0,   39,
   70,   70,   12,   70,   70,   70,   70,   77,   78,   79,
   80,   70,   70,   68,   68,   68,   68,    0,    0,   13,
    1,    2,   68,   68,    3,    4,    5,    6,    7,    8,
    9,    0,    0,   68,   68,   61,    0,   12,    0,    1,
    2,   10,   88,    3,    4,    5,    6,    7,    8,    9,
    0,   36,   37,   38,   13,   39,    0,    0,    0,    0,
   10,    1,    2,    0,    0,    3,    4,    5,    6,    7,
    8,    9,    0,    0,    0,   59,   77,   78,   79,   80,
   13,    0,   10,  151,    0,    1,    2,    0,   13,    3,
    4,    5,    6,    7,    8,    9,    0,   61,    0,    0,
    0,    0,   13,    0,   13,    0,   10,    1,    2,    0,
    0,    3,    4,    5,    6,    7,    8,    9,  156,    0,
    0,    0,    0,    0,    0,    0,    1,    2,  137,   13,
    3,    4,    5,    6,    7,    8,    9,   59,    0,    0,
    0,    0,   89,    0,    0,    0,    0,   10,    0,    0,
   89,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   89,    0,    0,    0,  142,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  118,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    1,    2,    0,    0,    3,    4,
    5,    6,    7,    8,    9,    0,    0,    0,    0,    0,
    0,   61,   61,   61,   61,   10,    0,    0,    0,    0,
   61,   61,    0,    0,    0,    0,    0,    0,    0,    1,
    2,   61,   61,    3,    4,    5,    6,    7,    8,    9,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   10,   59,   59,   59,   59,    0,    2,   86,   87,    3,
   59,   59,    0,    0,    2,    9,  145,    3,    0,    0,
    0,   59,   59,    9,    0,    0,   39,   88,    2,    0,
    2,    3,    0,    3,   39,   88,   43,    9,    0,    9,
    0,    0,    0,    0,    0,    0,    0,   43,   39,   88,
   39,   88,    0,    0,    0,    2,    0,    0,    3,    4,
    5,    6,    7,    8,    9,    0,    0,   43,    0,    0,
    0,    0,    0,    0,   43,   10,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   43,    0,    0,    0,    0,    0,    0,    0,
   43,    0,   43,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   43,   43,    0,    0,   43,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   43,
   43,
};
short yycheck[] = {                                      41,
   42,   43,   44,   45,  276,   47,   40,   44,   40,   41,
   46,  277,   46,   45,  277,   44,   15,   11,   60,   61,
   62,   41,   93,   43,   44,   45,   45,   61,   40,  277,
   40,   42,  258,  259,   46,   45,   47,   81,   82,  110,
   60,   61,   62,   41,   44,   43,   44,   45,   43,   61,
   45,   13,   40,  124,   41,   95,   96,   45,   57,  273,
  274,  275,   60,   61,   62,   41,   44,   43,   44,   45,
   89,   43,   69,   45,   93,   69,  277,   71,   40,   40,
  123,  123,  123,   41,   60,   61,   62,   41,   60,   59,
   62,  110,   59,   41,  277,   43,   58,   45,   44,  267,
   41,   44,  121,  123,   66,  124,   68,   61,  107,   44,
  107,  277,  111,   45,  277,   61,   41,   44,  125,  259,
    2,   44,   44,   85,  121,  123,  277,   41,   44,  125,
  259,   13,    0,   44,   61,   44,   44,   44,   41,   44,
   43,   97,   45,   44,   44,  139,   41,  123,   44,   89,
   33,   33,   40,  152,   92,   -1,   61,   60,   40,   62,
   -1,   -1,   -1,   44,   -1,   -1,   -1,   -1,   -1,  123,
   -1,   -1,   -1,   -1,   -1,   -1,   58,   -1,   -1,   -1,
   61,   -1,   -1,   -1,   66,   44,   68,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  123,   -1,   -1,   81,
   82,   -1,   61,   85,   44,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   95,   96,  257,  258,  259,  260,   -1,
  125,   61,   -1,   -1,  266,  267,   -1,  269,  270,  271,
  272,   -1,  268,   -1,  268,  277,  278,  257,  258,  259,
  260,  273,  274,  275,  125,  277,  266,  267,  277,  269,
  270,  271,  272,   -1,   -1,   -1,  268,  277,  278,  257,
  258,  259,  260,  273,  274,  275,  125,  277,  266,  267,
   -1,  269,  270,  271,  272,   -1,  263,  264,  265,  277,
  278,  257,  258,  259,  260,  273,  274,  275,   -1,  277,
  266,  267,   44,  269,  270,  271,  272,  269,  270,  271,
  272,  277,  278,  257,  258,  259,  260,   -1,   -1,   61,
  256,  257,  266,  267,  260,  261,  262,  263,  264,  265,
  266,   -1,   -1,  277,  278,   61,   -1,   44,   -1,  256,
  257,  277,  278,  260,  261,  262,  263,  264,  265,  266,
   -1,  273,  274,  275,   61,  277,   -1,   -1,   -1,   -1,
  277,  256,  257,   -1,   -1,  260,  261,  262,  263,  264,
  265,  266,   -1,   -1,   -1,   61,  269,  270,  271,  272,
   61,   -1,  277,  125,   -1,  256,  257,   -1,   61,  260,
  261,  262,  263,  264,  265,  266,   -1,  123,   -1,   -1,
   -1,   -1,   61,   -1,   61,   -1,  277,  256,  257,   -1,
   -1,  260,  261,  262,  263,  264,  265,  266,  125,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  256,  257,  277,   61,
  260,  261,  262,  263,  264,  265,  266,  123,   -1,   -1,
   -1,   -1,  123,   -1,   -1,   -1,   -1,  277,   -1,   -1,
  123,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  123,   -1,   -1,   -1,  125,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  125,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  256,  257,   -1,   -1,  260,  261,
  262,  263,  264,  265,  266,   -1,   -1,   -1,   -1,   -1,
   -1,  257,  258,  259,  260,  277,   -1,   -1,   -1,   -1,
  266,  267,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  256,
  257,  277,  278,  260,  261,  262,  263,  264,  265,  266,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  277,  257,  258,  259,  260,   -1,  257,  258,  259,  260,
  266,  267,   -1,   -1,  257,  266,  259,  260,   -1,   -1,
   -1,  277,  278,  266,   -1,   -1,  277,  278,  257,   -1,
  257,  260,   -1,  260,  277,  278,    2,  266,   -1,  266,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   13,  277,  278,
  277,  278,   -1,   -1,   -1,  257,   -1,   -1,  260,  261,
  262,  263,  264,  265,  266,   -1,   -1,   33,   -1,   -1,
   -1,   -1,   -1,   -1,   40,  277,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   58,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   66,   -1,   68,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   81,   82,   -1,   -1,   85,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   95,
   96,
};
#define YYFINAL 14
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
"sentence : error ','",
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
"executable : lessless",
"declaration : variableDeclaration",
"declaration : objectDeclaration",
"variableDeclaration : type variableList",
"objectDeclaration : ID objectList",
"objectList : objectList ';' ID",
"objectList : ID",
"variableList : variableList ';' ID",
"variableList : ID",
"assignment : nesting '=' expression",
"assignment : nesting '='",
"assignment : '=' expression",
"nesting : nesting '.' ID",
"nesting : ID",
"function : functionHeader '{' functionBody '}'",
"functionHeader : VOID ID '(' formalParameter ')'",
"functionHeader : VOID ID '(' ')'",
"functionBody : sentenceList return",
"functionBody : return",
"formalParameter : type ID",
"functionCall : nesting '(' ')'",
"functionCall : nesting '(' realParameter ')'",
"realParameter : expression",
"ifStatement : IF condition iterativeBody else iterativeBody ENDIF",
"ifStatement : IF condition iterativeBody ENDIF",
"ifStatement : IF condition ENDIF",
"ifStatement : IF condition iterativeBody else ENDIF",
"ifStatement : IF condition else iterativeBody ENDIF",
"else : ELSE",
"whileStatement : while condition DO iterativeBody",
"whileStatement : while condition DO",
"while : WHILE",
"iterativeBody : '{' executableList '}'",
"iterativeBody : '{' executableList return '}'",
"iterativeBody : executable ','",
"iterativeBody : return",
"iterativeBody : '{' '}'",
"condition : '(' comparison ')'",
"condition : '(' comparison",
"condition : comparison ')'",
"condition : comparison",
"class : classHeader '{' sentenceList '}'",
"class : classHeader '{' sentenceList heredity '}'",
"class : classHeader",
"class : classHeader '{' sentenceList heredity sentenceList '}'",
"classHeader : CLASS ID",
"heredity : ID ','",
"comparison : expression operatorsLogics expression",
"expression : expression '+' termino",
"expression : expression '-' termino",
"expression : termino",
"expression : '(' expression ')'",
"termino : termino '*' factor",
"termino : termino '/' factor",
"termino : factor",
"factor : nesting",
"factor : constant",
"factor : lessless",
"lessless : nesting LESSLESS",
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
#line 440 ".\Gramaticas\gramaticaLenguaje.y"

// ============================== Mensajes ==============================

void yymenssage(string menssage){
    cout  << endl  << BLUE << "Estructura detectada: " << menssage  << RESET << endl;
}

void yyerror(string menssage){
	cout << endl  << RED << "Linea " << AccionesSemanticas::lineaInicioToken <<": " << menssage << RESET << endl;
    ContErrWar::sumErr();
}

void yywarning(string menssage){
    cout << endl << YELLOW << "Warning - Linea " << AccionesSemanticas::lineaInicioToken <<": " << menssage << RESET << endl;
    ContErrWar::sumWar();
}

// ============================== Chequeo Rango ==============================

void chequearRangoSHORT(string valor){
    int chequear = stoi(TablaDeSimbolos::getValor(valor));
    if (chequear >= 128){
        yyerror("Constante SHORT fuera de rango");
        TablaDeSimbolos::del(valor);
    } else {
        TablaDeSimbolos::chequearPositivos(valor);
    }
}

// ============================== Tercetos Sentencias de Control ==============================

void jumpEndWhile(){
    int tercetoFalse = EstructuraTercetos::desapilar();
    EstructuraTercetos::addTerceto("BI","["+to_string(EstructuraTercetos::desapilar())+"]","");
    EstructuraTercetos::updateTerceto(tercetoFalse,EstructuraTercetos::nroSigTerceto());
    EstructuraTercetos::addLabel();
}

void jumpEndThen(){
    int tercetoFalse = EstructuraTercetos::desapilar();
    EstructuraTercetos::apilar();
    EstructuraTercetos::addTerceto("BI","","");
    EstructuraTercetos::updateTerceto(tercetoFalse,EstructuraTercetos::nroSigTerceto());
    EstructuraTercetos::addLabel();
}

void jumpEndIf(){
    EstructuraTercetos::updateTerceto(EstructuraTercetos::desapilar(),EstructuraTercetos::nroSigTerceto());
    EstructuraTercetos::addLabel();
}

string partEndID(string nesting){

    // Encuentra la posición del último punto
    size_t dot_index = nesting.find_last_of('.');

    // Si no hay punto, devuelve cadena vacía
    if (dot_index == string::npos)
        return nesting;

    // Devuelve la cadena desde el punto hasta el final
    return nesting.substr(dot_index + 1);
}

// ============================== Conversiones Implicitas ==============================

void dividirStringPorArroba(const string &input, string &nombreLlamado, string &nombraAtri) {
    size_t posicionArroba = input.find('@');
    if (posicionArroba != std::string::npos) {
        string comNom = input;
        nombreLlamado = input.substr(0, posicionArroba);
        nombraAtri = comNom.substr(posicionArroba + 1);
    } else {
        nombreLlamado = input;
        nombraAtri = input;
    }
}

string tipoOperando(string operando){
    if (operando[0] != '['){
        return TablaDeSimbolos::getTipo(operando);
    } else {
        operando.erase(0, 1);
        operando.erase(operando.size() - 1, 1);
        return EstructuraTercetos::getTipo(operando);
    }
}

bool converAsig(string izq, string der, string & tipo){
    string atrIzq, atrDer;
    dividirStringPorArroba(izq, izq, atrIzq);
    dividirStringPorArroba(der, der, atrDer);
    string tipoIzq = TablaDeSimbolos::getTipo(atrIzq);
    string tercetoDer = der; //Se hace una copia para el caso de tener que sacarle los corchetes
    string tipoDer = tipoOperando(atrDer);
    if (tipoIzq == " " || tipoDer == " "){
    		tipo = " ";
    		return false;
    }
    string valido = Conversion::asignacion(tipoIzq,tipoDer);
    tipo = tipoIzq;
    if (valido == "ERROR"){
        yyerror("No es posible asignarle un tipo "+tipoDer+" a un tipo "+tipoIzq);
    }else if (tipoIzq != tipoDer){
            string conversion = string(1,tipoDer[0])+"to"+string(1,tipoIzq[0]); 
            EstructuraTercetos::addTerceto(conversion,tercetoDer,"",tipoIzq);
            return true;
    }
    return false;
}

bool cambiarTipoOp1(string op1, string op2){
    if ((op1 == "SHORT") || (op1 == "ULONG")) {
        return true;
    } else {
        return false;
    }
}

bool converOp(string op1, string op2, string & opAConvertir, string & tipo){
    string tipoOp1, tipoOp2, atrOp1, atrOp2;
    dividirStringPorArroba(op1, op1, atrOp1);
    dividirStringPorArroba(op2, op2, atrOp2);
    tipoOp1 = tipoOperando(atrOp1);
    tipoOp2 = tipoOperando(atrOp2);
    if (tipoOp1 == " " || tipoOp2 == " "){
		tipo = " ";
		return false;
    }
    string valido = Conversion::operacion(tipoOp1,tipoOp2);
    if (valido == "ERROR"){
        yyerror("No es posible operar entre un "+tipoOp1+" y un "+tipoOp2);
    }else if (tipoOp1 != tipoOp2){
            if (cambiarTipoOp1(tipoOp1, tipoOp2)){
                opAConvertir = "op1";
                tipo = tipoOp2;
                string conversion = string(1,tipoOp1[0])+"to"+string(1,tipoOp2[0]);
                EstructuraTercetos::addTerceto(conversion,op1,"",tipoOp2);
            }else{
                opAConvertir = "op2";
                tipo = tipoOp1;
                string conversion = string(1,tipoOp2[0])+"to"+string(1,tipoOp1[0]);
                EstructuraTercetos::addTerceto(conversion,op2,"",tipoOp1);
            }
            return true;
    } 
    tipo = tipoOp1;
    return false;
}

// ============================== Cargar tipos Lista de variables ==============================

void setearTipos(string tipo, string listVariable){
    string var;
    std::istringstream variableStream(listVariable);  // Asegúrate de inicializar el istringstream
    while (getline(variableStream, var, '&')) {
        TablaDeSimbolos::setTipo(var, tipo);
    }
}

// ============================== Chequeo Variable NO declarada ==============================

string sigID(string & var){
    size_t indicePunto = var.find('.');       
    if (indicePunto != std::string::npos) {
        string primeraParte = var.substr(0, indicePunto);
        string segundaParte = var.substr(indicePunto + static_cast<size_t>(1));
        var=segundaParte;
        return primeraParte;
    } else {
        string aux=var;
        var.clear();
        return aux;
    }
}

bool ChequearDeclaracion(string var, string & nomEncontrada, string uso, bool chequeoFormal = false){
    string ambito=Ambito::get();
    bool final = false;
    bool encontrada = false;
    if (chequeoFormal){
        if (TablaDeSimbolos::usoAsignado(var+ambito) == "PF"){
            encontrada = true;
        }
    }
    while(! final && ! encontrada){
        if (TablaDeSimbolos::usoAsignado(var+ambito) == uso){
            nomEncontrada = var+ambito;
            encontrada = true;
        }else{
            if (ambito.empty()){
                final = true;
                yyerror(uso + " " + var + " NO declarada");
            }
            size_t pos = ambito.find_last_of(":");
            if (pos != string::npos) {
                ambito = ambito.substr(0, pos);
            }
        }
    }
    return encontrada;
}
int contarCaracter(string cadena, char caracter) {
    int contador = 0;
    for (char c : cadena) {
        if (c == caracter) {
            contador++;
        }
    }
    return contador;
}

bool esObjeto(string nesting){
    return contarCaracter(nesting,'.') > 0;
}

bool ChequearDeclObjeto(string obj, string & nomEncontrada, string & nomAtributo, bool esAtributo = true){
    string check = sigID(obj);
    TablaDeSimbolos::del(check);
    bool encontrada = false;
    bool final = ! ChequearDeclaracion(check, nomEncontrada, "Obj");
    string antCheck = TablaDeSimbolos::getTipo(nomEncontrada)+":main";
    while (! final && ! encontrada){
        check = sigID(obj);
        TablaDeSimbolos::del(check);
        if (TablaDeSimbolos::usoAsignado(check+":main") == "Clase"){
        	if (TablaDeSimbolos::getHerencia(antCheck) != check+":main"){
                if (check+":main" == antCheck){
                    yyerror("Invocacion incorrecta de la clase " + check);
                } else {
                    yyerror("Clase " + antCheck + " No hereda de " + check);
                }
        		final = true;
        	} else {
				antCheck = check+":main";
				nomEncontrada = check + "." + nomEncontrada;
				if (obj.length() == 0){
					yyerror("Objeto esta intentando utilizar una clase "+ check +" en lugar de un atributo");
					final = true;
				}
        	}
        } else if (TablaDeSimbolos::usoAsignado(check+"-"+antCheck) == "Atr"){
            string tipo = TablaDeSimbolos::getTipo(check+"-"+antCheck);
        	nomEncontrada = check + "." + nomEncontrada;
            if (tipo != "SHORT" && tipo != "ULONG" && tipo != "FLOAT"){
                antCheck = tipo+":main";
                if (obj.length() == 0){
                    yyerror("Uso no valido de atributo");
                    final = true;
                }
            } else {
                if (esAtributo){
                    if (obj.length() == 0){
                        nomAtributo = check+"-"+antCheck;
                        encontrada = true;
                    }
                } else {
                    yyerror("Uso no valido de atributo en el llamado a metodo");
                    final = true;
                }
            }
        }else if (TablaDeSimbolos::usoAsignado(check+"-"+antCheck) == "Metodo"){
            if (esAtributo){
                yyerror("Uso no valido de atributo en la invocacion a metodo");
                final = true;
            } else {
                if (obj.length() == 0){
                    nomEncontrada = check+"-"+antCheck;
                    encontrada = true;
                } else {
                    yyerror("Uso no valido de invocacion a metodo");
                    final = true;
                }
            }
        } else {
            yyerror("Clase/atributo no existente");
            final = true;
        }
        
    }
    return encontrada;
}

// ============================== Chequeo Re declaradas ==============================

bool noReDeclarada(string decl, string usoOriginal){
    string ambito=Ambito::get();
    string uso = TablaDeSimbolos::usoAsignado(decl+ambito);
    if (uso == "Var" || uso == "Funcion" || uso == "Obj" || uso == "Clase" && usoOriginal != "Clase" || uso == "Atr" || uso == "Metodo"){
    	yyerror(uso + " " + decl + " se encuentra re-declarada como " + usoOriginal);
    	return false;
    } else if (uso == "Clase" && usoOriginal == "Clase" ){
        if (TablaDeSimbolos::getForwDecl(decl+ambito) == 1){
            yyerror(uso + " " + decl + " se encuentra re-declarada como " + usoOriginal);
        }   
        return false;
    }
    return true;
}

// ============================== Sobrescritura de metodos ==============================

void ChequearSobrescritura(string clase, string herencia){
    string metodoActual, uso;
    if (!(herencia == " ")){
        while (InsideClass::moreMethods()){
        metodoActual = InsideClass::getMethod();
        uso = TablaDeSimbolos::usoAsignado(metodoActual+"-"+herencia);
        if (uso == "Metodo"){
            yyerror("No es posible en la clase "+clase+" sobreescribir el metodo "+metodoActual+" de la clase "+herencia+" de la cual hereda");
        }
        InsideClass::outMethod();
        }
    }
    InsideClass::unstackMethods(); //En el caso de no haber herencia se vacia la pila llena de metodos
}

// ============================== Forward Declaration ==============================

void claseSinimplementar(string clase){
    string name = clase;
    if (TablaDeSimbolos::getForwDecl(name) != -1){
        yyerror("Clase " + clase + " se encuentra re-declarada");
    } else {
        TablaDeSimbolos::inicForwDecl(name);
    }
}

void ChequearForwardDeclarations(){
    if(!(TablaDeSimbolos::forwDeclAll())){
        string forwDecl = "";
        while (!(TablaDeSimbolos::forwDeclAll())){
            forwDecl = forwDecl + TablaDeSimbolos::nextForwDecl() + ", ";
        }
        forwDecl.pop_back();
        forwDecl.pop_back();
        yyerror("No se completo la declaracion de las siguientes clases: "+forwDecl);
    }
}

// ============================== Pasos a seguir al detectar una operacion ==============================

string obtenerUltimaParte(string cadena, char separador) {
    size_t ultimaPosicion = cadena.find_last_of(separador);
    if (ultimaPosicion != std::string::npos) {
        return cadena.substr(ultimaPosicion + 1);
    }
    // Si no se encuentra el separador, devolver toda la cadena
    return cadena;
}

bool revisarLessLess(string & op){
    if (op[0] == '#'){
        op = obtenerUltimaParte(op,'#');
        
        return true;
    } else {
        return false;
    }
}

void crearTerLessLess(string op){
    EstructuraTercetos::addTerceto("-",op,TablaDeSimbolos::getUno(op),TablaDeSimbolos::getTipo(op));
    EstructuraTercetos::addTerceto("=",op,EstructuraTercetos::nroActualTerceto());
}

string stepsOperation(string op1, string op2, string operador){
    string op, tipo, salida; //Aca se almacena el operando a convertir en caso de ser necesario
    
    bool lessLessOp1 = revisarLessLess(op1);
    bool lessLessOp2 = revisarLessLess(op2);
    bool conversion = converOp(op1,op2,op,tipo);
    salida = EstructuraTercetos::nroSigTerceto();
    string nom1, nom2, tip1, tip2;
    dividirStringPorArroba(op1, nom1, tip1);
    dividirStringPorArroba(op2, nom2, tip2);
    if (!conversion){
        EstructuraTercetos::addTerceto(operador,nom1,nom2,tipo);
    } else if (op == "op1") {
        EstructuraTercetos::addTerceto(operador,EstructuraTercetos::nroActualTerceto(),nom2,tipo);
    } else {
        EstructuraTercetos::addTerceto(operador,nom1,EstructuraTercetos::nroActualTerceto(),tipo);
    }
    if (lessLessOp1) crearTerLessLess(nom1);
    if (lessLessOp2) crearTerLessLess(nom2);
    return salida;
}

bool classInFunction(string nombre){
    string ambito = Ambito::get();
    char caracterBuscado = ':';
    int cantidad = contarCaracter(ambito, caracterBuscado);
    if ( cantidad >= 2 ){
        yyerror("No es posible declarar una clase dentro de una funcion - Clase " + nombre + " dentro de funcion " + obtenerUltimaParte(ambito,caracterBuscado));
        return true;
    }else{
        return false;
    }
}

bool classInClass(string nombre){
    if (InsideClass::insideClass()){
        yyerror("No es posible declarar una clase dentro de otra - Clase " + nombre + " dentro de clase " + InsideClass::getClass());
        return true;
    } else{
        return false;
    }
}

// ======================== Pasos en declaracion de objetos y variables ========================

string stepsDeclVarAndObj(string declarado, string uso ,string declaraciones = ""){
    string key;
    if ((InsideClass::insideClass()) && (!InsideClass::insideMethod())){
        if (declarado == InsideClass::getClassSinMain()){
            yyerror("El nombre del atributo "+declarado+" es igual al nombre de la clase");
        }else{
            if (noReDeclarada(declarado+"-"+InsideClass::getClassSinMain(), "Atr")){
                key = TablaDeSimbolos::changeKeyClass(declarado,InsideClass::getClass());
                TablaDeSimbolos::setUso(key, "Atr");
                TablaDeSimbolos::setClass(key,InsideClass::getClass());
            }
        }
    } else {
        if (noReDeclarada(declarado, uso)) {
            key = TablaDeSimbolos::changeKey(declarado);
            VarSinInic::addVar(key);
            TablaDeSimbolos::setUso(key, uso);
        }
    }
    string salida;
    if (declaraciones != ""){
        salida = declaraciones+"&"+key;
    } else {
        salida = key;
    }
    return salida;
}

// ======================== Pasos cuando se reconoce un factor ========================

string stepsFactor(string fact, bool lessLess = false){
    string nomEncontrada, nomAtributo = "<NoExiste>";
    bool chequeoOK;
    string salida;
    if (esObjeto(fact)){
        chequeoOK = ChequearDeclObjeto(fact,nomEncontrada, nomAtributo);
        if (chequeoOK)  salida = nomEncontrada+"@"+nomAtributo;
    } else if (Ambito::insideMethod()){
        chequeoOK = ChequearDeclaracion(fact, nomEncontrada, "Var", true);
        if (chequeoOK) salida = nomEncontrada;
    }else{
        chequeoOK = ChequearDeclaracion(fact,nomEncontrada,"Var");
        if (chequeoOK) salida = nomEncontrada;
    }
    TablaDeSimbolos::del(fact);
    if (chequeoOK && lessLess) salida = "#"+salida;
    return salida;
}
#line 891 "y.tab.c"
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
case 1:
#line 27 ".\Gramaticas\gramaticaLenguaje.y"
{ChequearForwardDeclarations();
                             list<string> varSinUsar = VarSinInic::listVarTop();
                             for (const string& var : varSinUsar){
                                yywarning("Variable/Objeto " + var + " Sin asignacion de un valor en el main");
                             }
                            }
break;
case 2:
#line 33 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Programa vacio");}
break;
case 3:
#line 34 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta llaves delimitadores de programa");}
break;
case 8:
#line 43 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Sentencia vacia");}
break;
case 9:
#line 44 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Sin coma");}
break;
case 15:
#line 54 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Sentencia declarativa en lugar de una ejecutable");}
break;
case 21:
#line 62 ".\Gramaticas\gramaticaLenguaje.y"
{crearTerLessLess(obtenerUltimaParte(yyvsp[0], '#'));}
break;
case 24:
#line 69 ".\Gramaticas\gramaticaLenguaje.y"
{setearTipos(yyvsp[-1],yyvsp[0]);}
break;
case 25:
#line 72 ".\Gramaticas\gramaticaLenguaje.y"
{  
                                    if (InsideClass::insideClass() && yyvsp[-1] == InsideClass::getClassSinMain()){
                                        yyerror("No es posible declarar un atributo el cual su tipo sea la misma clase a la que pertenece");
                                    }else{
                                        string name;
                                        ChequearDeclaracion(yyvsp[-1], name, "Clase");
                                        setearTipos(yyvsp[-1],yyvsp[0]);
                                        TablaDeSimbolos::del(yyvsp[-1]); /*El ID al declarar un objeto se agrega automaticamente por error en el lexico*/
                                    }
                                   }
break;
case 26:
#line 84 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsDeclVarAndObj(yyvsp[0], "Obj", yyvsp[-2]);}
break;
case 27:
#line 85 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = stepsDeclVarAndObj(yyvsp[0], "Obj");}
break;
case 28:
#line 88 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = stepsDeclVarAndObj(yyvsp[0], "Var", yyvsp[-2]);}
break;
case 29:
#line 89 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsDeclVarAndObj(yyvsp[0], "Var");}
break;
case 30:
#line 92 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("Asignacion");
                                    string nomEncontrada, nomAtributo;
                                    if (esObjeto(yyvsp[-2]) && (ChequearDeclObjeto(yyvsp[-2],nomEncontrada, nomAtributo)) || !esObjeto(yyvsp[-2]) && (ChequearDeclaracion(yyvsp[-2],nomEncontrada, "Var",true))){
                                        string tipo;
                                        TablaDeSimbolos::del(yyvsp[-2]);
                                        bool conversion;
                                        string op = yyvsp[0];
                                        bool lessLessOp1 = revisarLessLess(op);
                                        if (esObjeto(yyvsp[-2]) ){
                                            conversion = converAsig(nomAtributo,op,tipo);
                                            VarSinInic::delVar(sigID(yyvsp[-2])+Ambito::get());
                                        } else {
                                            conversion = converAsig(nomEncontrada,op,tipo);
                                            VarSinInic::delVar(nomEncontrada);
                                        } 
                                        if (!conversion){
                                            if (yyvsp[0][0] == '['){
                                                EstructuraTercetos::addTerceto("=",nomEncontrada,op,tipo);
                                            } else {
                                                if (esObjeto(yyvsp[0])){
                                                    string atributo, objeto;
                                                    dividirStringPorArroba(op,objeto, atributo);
                                                    EstructuraTercetos::addTerceto("=",nomEncontrada,objeto,tipo);
                                                }else{
                                                    EstructuraTercetos::addTerceto("=",nomEncontrada,op,tipo);
                                                }
                                            }
                                        }else{
                                            EstructuraTercetos::addTerceto("=",nomEncontrada,EstructuraTercetos::nroActualTerceto(),tipo);
                                        }
                                        if (lessLessOp1) crearTerLessLess(op);
                                    }
                                    }
break;
case 31:
#line 125 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta asignacion");}
break;
case 32:
#line 126 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta nesting");}
break;
case 33:
#line 129 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[-2] + "." + yyvsp[0];}
break;
case 34:
#line 130 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 35:
#line 133 ".\Gramaticas\gramaticaLenguaje.y"
{Ambito::del();
                                            EstructuraTercetos::setAmbito(Ambito::get());
                                            if (!(InsideClass::insideClass())){
                                                yymenssage("Funcion");
                                            }
                                            if ((InsideClass::insideClass()) && (InsideClass::insideMethod()) && (InsideClass::insideFuncionMethod())){
                                                InsideClass::insideFuncionMethod(false);
                                                yymenssage("Funcion");
                                            }else{
                                                if ((InsideClass::insideClass()) && (InsideClass::insideMethod()) && !(InsideClass::insideFuncionMethod())){
                                                    InsideClass::insideMethod(false);
                                                    yymenssage("Metodo");
                                                }
                                            }
                                            list<string> varSinUsar = VarSinInic::listVarTop();
                                            for (const string& var : varSinUsar){
                                                yywarning("Variable/Objeto " + var + " Sin asignacion de un valor dentro de la funcion donde se declaro");
                                            }
                                            VarSinInic::delTop();
                                        ;}
break;
case 36:
#line 155 ".\Gramaticas\gramaticaLenguaje.y"
{ if (InsideClass::insideClass()){
                                                    string key; 
                                                    if ((InsideClass::insideMethod())){ /*Se trata de una funcion dentro de un metodo*/
                                                        if (!(InsideClass::insideFuncionMethod())){
                                                            if (noReDeclarada(yyvsp[-3], "Funcion")) {
                                                                VarSinInic::addTop(); 
                                                                key = TablaDeSimbolos::changeKey(yyvsp[-3]);
                                                                TablaDeSimbolos::setUso(key, "Funcion");
                                                                Ambito::add(yyvsp[-3]);
                                                                InsideClass::insideFuncionMethod(true);
                                                            }
                                                        }else{
                                                            yyerror("No es posible anidar otra funcion, excede los niveles permitidos");
                                                        }
                                                    }else{ /*Se trata de un metodo*/
                                                        if (yyvsp[-3] == InsideClass::getClassSinMain()){
                                                            yyerror("No es posible declarar un metodo con el mismo nombre al de la clase a la que pertenece");
                                                        }else{
                                                            if (noReDeclarada(yyvsp[-3]+"-"+InsideClass::getClassSinMain(), "Metodo")) {
                                                                InsideClass::addMethod(yyvsp[-3]);
                                                                VarSinInic::addTop();
                                                                key = TablaDeSimbolos::changeKeyClass(yyvsp[-3],InsideClass::getClass());
                                                                TablaDeSimbolos::setUso(key, "Metodo");
                                                                Ambito::add(yyvsp[-3]+"-"+InsideClass::getClassSinMain());
                                                                InsideClass::insideMethod(true);
                                                        }
                                                        }
                                                    }
                                                    TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                                    string keyFormal = TablaDeSimbolos::changeKey(yyvsp[-1]);
                                                    TablaDeSimbolos::setParametroFormal(key,keyFormal);
                                                    EstructuraTercetos::setAmbito(Ambito::get()); 
                                            }else{
                                                if (noReDeclarada(yyvsp[-3], "Funcion")) {
                                                    string key = TablaDeSimbolos::changeKey(yyvsp[-3]);
                                                    TablaDeSimbolos::setUso(key, "Funcion");
                                                    VarSinInic::addTop();
                                                    Ambito::add(yyvsp[-3]);
                                                    string keyFormal = TablaDeSimbolos::changeKey(yyvsp[-1]);
                                                    TablaDeSimbolos::setParametroFormal(key,keyFormal);
                                                    EstructuraTercetos::setAmbito(Ambito::get());
                                                }
                                              }
                                            }
break;
case 37:
#line 199 ".\Gramaticas\gramaticaLenguaje.y"
{if (InsideClass::insideClass()){
                                        string key; 
                                        if ((InsideClass::insideMethod())){ /*Se trata de una funcion dentro de un metodo*/
                                            if (!(InsideClass::insideFuncionMethod())){
                                                if (noReDeclarada(yyvsp[-2], "Funcion")) { 
                                                    key = TablaDeSimbolos::changeKey(yyvsp[-2]);
                                                    VarSinInic::addTop();
                                                    TablaDeSimbolos::setUso(key, "Funcion");
                                                    Ambito::add(yyvsp[-2]);
                                                    InsideClass::insideFuncionMethod(true);
                                                }
                                            }else{
                                                yyerror("No es posible anidar otra funcion, excede los niveles permitidos");
                                            }
                                        }else{ /*Se trata de un metodo*/
                                            if (yyvsp[-2] == InsideClass::getClassSinMain()){
                                                yyerror("No es posible declarar un metodo con el mismo nombre al de la clase a la que pertenece");
                                            }else{
                                                if (noReDeclarada(yyvsp[-2]+"-"+InsideClass::getClassSinMain(), "Metodo")) {
                                                    InsideClass::addMethod(yyvsp[-2]);
                                                    VarSinInic::addTop(); 
                                                    key = TablaDeSimbolos::changeKeyClass(yyvsp[-2],InsideClass::getClass());
                                                    TablaDeSimbolos::setUso(key, "Metodo");
                                                    Ambito::add(yyvsp[-2]+"-"+InsideClass::getClassSinMain());
                                                    InsideClass::insideMethod(true);
                                            }
                                            }
                                        }
                                        TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                        EstructuraTercetos::setAmbito(Ambito::get());
                                }else{ 
                                        if (noReDeclarada(yyvsp[-2], "Funcion")) {
                                            string key = TablaDeSimbolos::changeKey(yyvsp[-2]);
                                            VarSinInic::addTop();
                                            TablaDeSimbolos::setUso(key, "Funcion");
                                            Ambito::add(yyvsp[-2]);
                                            EstructuraTercetos::setAmbito(Ambito::get());
                                        }
                                    }
                                }
break;
case 39:
#line 242 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Funcion vacia");}
break;
case 40:
#line 245 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0]; TablaDeSimbolos::setUso(yyvsp[0], "PF"); setearTipos(yyvsp[-1],yyvsp[0]);}
break;
case 41:
#line 248 ".\Gramaticas\gramaticaLenguaje.y"
{
                            string name;
                            string tipo;
                            if (esObjeto(yyvsp[-2])){
                                if (ChequearDeclObjeto(yyvsp[-2],name,tipo,false)){
                                    if (!TablaDeSimbolos::tieneParametros(name)){
                                        EstructuraTercetos::addTerceto("Call",name,"");
                                    } else {
                                        yyerror("El metodo " + name + " requiere parametro");
                                    }
                                }
                            } else {
                                if (ChequearDeclaracion(yyvsp[-2],name,"Funcion")){
                                    if (!TablaDeSimbolos::tieneParametros(name)){
                                        EstructuraTercetos::addTerceto("Call",name,"");
                                    } else {
                                        yyerror("La funcion " + name + " requiere parametro");
                                    }
                                }
                            }
                            TablaDeSimbolos::del(yyvsp[-2]);
                            }
break;
case 42:
#line 270 ".\Gramaticas\gramaticaLenguaje.y"
{
                                            string name;
                                            string tipo;
                                            if (esObjeto(yyvsp[-3])){
                                                if (ChequearDeclObjeto(yyvsp[-3],name,tipo,false)){
                                                    string tipo;
                                                    if (TablaDeSimbolos::tieneParametros(name)){
                                                        if (converAsig(TablaDeSimbolos::getParametroFormal(name), yyvsp[-1], tipo)){
                                                            EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),EstructuraTercetos::nroActualTerceto());
                                                        } else {
                                                            EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),yyvsp[-1]);
                                                        }
                                                        EstructuraTercetos::addTerceto("Call",name,"");
                                                    } else {
                                                        yyerror("El metodo " + name + " NO requiere parametro");
                                                    }
                                                }
                                            }else{
                                                if (ChequearDeclaracion(yyvsp[-3],name,"Funcion")){
                                                    TablaDeSimbolos::del(yyvsp[-3]);
                                                    string tipo;
                                                    if (TablaDeSimbolos::tieneParametros(name)){
                                                        if (converAsig(TablaDeSimbolos::getParametroFormal(name), yyvsp[-1], tipo)) {
                                                            EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),EstructuraTercetos::nroActualTerceto());
                                                        } else {
                                                            EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),yyvsp[-1]);
                                                        }
                                                        EstructuraTercetos::addTerceto("Call",name,"");
                                                    } else {
                                                        yyerror("La funcion " + name + " NO requiere parametro");
                                                    }
                                                }
                                            }
                                            TablaDeSimbolos::del(yyvsp[-3]);
                                         }
break;
case 44:
#line 310 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");jumpEndIf();}
break;
case 45:
#line 311 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("IF");jumpEndIf();}
break;
case 46:
#line 312 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");jumpEndIf();}
break;
case 47:
#line 313 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Else vacio");yymenssage("IF");jumpEndIf();}
break;
case 48:
#line 314 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("If vacio");yymenssage("IF");jumpEndIf();}
break;
case 49:
#line 317 ".\Gramaticas\gramaticaLenguaje.y"
{jumpEndThen();}
break;
case 50:
#line 320 ".\Gramaticas\gramaticaLenguaje.y"
{yymenssage("While");jumpEndWhile();}
break;
case 51:
#line 321 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("While vacio");yymenssage("While");jumpEndWhile();}
break;
case 52:
#line 324 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::apilar();EstructuraTercetos::addLabel();}
break;
case 57:
#line 331 ".\Gramaticas\gramaticaLenguaje.y"
{yywarning("Bloque vacio");}
break;
case 58:
#line 334 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",yyvsp[-1],"");}
break;
case 59:
#line 335 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta segundo parentesis en la condicion");}
break;
case 60:
#line 336 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Falta primer parentesis en la condicion");}
break;
case 61:
#line 337 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Faltan  parentesis en la condicion");}
break;
case 62:
#line 340 ".\Gramaticas\gramaticaLenguaje.y"
{ yymenssage("Clase");
                                        TablaDeSimbolos::forwDeclComp(InsideClass::getClass());
                                        InsideClass::unstackMethods();
                                        InsideClass::outClass();
                                      }
break;
case 63:
#line 345 ".\Gramaticas\gramaticaLenguaje.y"
{
                                                 yymenssage("Clase");
                                                 TablaDeSimbolos::setHerencia(InsideClass::getClass(),yyvsp[-1]);
                                                 if (TablaDeSimbolos::nivelHerencia(InsideClass::getClass()) > 3){
                                                    yyerror("La clase ha excedido el nivel de herencia (maximo nivel = 3)");
                                                 }
                                                 TablaDeSimbolos::forwDeclComp(InsideClass::getClass());
                                                 string clase = InsideClass::getClass();
                                                 string herencia = TablaDeSimbolos::getHerencia(clase);
                                                 int foward = TablaDeSimbolos::getForwDecl(herencia);
                                                 ChequearSobrescritura(clase,herencia);
                                                 InsideClass::outClass();
                                                 }
break;
case 64:
#line 358 ".\Gramaticas\gramaticaLenguaje.y"
{claseSinimplementar(InsideClass::getClass());InsideClass::outClass();}
break;
case 65:
#line 359 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("La herencia debe ir al final de la declaracion de la clase");}
break;
case 66:
#line 362 ".\Gramaticas\gramaticaLenguaje.y"
{ if ((!classInFunction(yyvsp[0])) && !classInClass(yyvsp[0])){
                            if (noReDeclarada(yyvsp[0], "Clase")){
                                string name =  TablaDeSimbolos::changeKey(yyvsp[0]);
                                TablaDeSimbolos::setUso(name,"Clase");
                                TablaDeSimbolos::inicNivelHer(name);
                                InsideClass::inClass(name);
                            } else {
                                InsideClass::inClass(yyvsp[0]+Ambito::get());
                                TablaDeSimbolos::del(yyvsp[0]);
                            }
                        }
                      }
break;
case 67:
#line 376 ".\Gramaticas\gramaticaLenguaje.y"
{ string name = "<NoExiste>";
                ChequearDeclaracion(yyvsp[-1],name,"Clase");
                TablaDeSimbolos::del(yyvsp[-1]);
                if (name == InsideClass::getClass()){
                    yyerror("La clase hereda de ella misma.");
                } else {
                    yyval = name;
                }
                }
break;
case 68:
#line 387 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = stepsOperation(yyvsp[-2], yyvsp[0], yyvsp[-1]);}
break;
case 69:
#line 390 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "+"); }
break;
case 70:
#line 391 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "-"); }
break;
case 71:
#line 392 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 72:
#line 393 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Expresion no puede ir entre parentesis");}
break;
case 73:
#line 396 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "*"); }
break;
case 74:
#line 397 ".\Gramaticas\gramaticaLenguaje.y"
{ yyval = stepsOperation(yyvsp[-2], yyvsp[0], "/"); }
break;
case 75:
#line 398 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 76:
#line 401 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = stepsFactor(yyvsp[0]);}
break;
case 77:
#line 402 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 78:
#line 403 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 79:
#line 406 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = stepsFactor(yyvsp[-1], true);}
break;
case 80:
#line 409 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "==";}
break;
case 81:
#line 410 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "!!";}
break;
case 82:
#line 411 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = ">=";}
break;
case 83:
#line 412 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "<=";}
break;
case 84:
#line 413 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = "<";}
break;
case 85:
#line 414 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = ">";}
break;
case 86:
#line 417 ".\Gramaticas\gramaticaLenguaje.y"
{chequearRangoSHORT(yyvsp[0]); yyval = yyvsp[0];}
break;
case 87:
#line 418 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = "-"+yyvsp[0];}
break;
case 88:
#line 419 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearPositivos(yyvsp[0]); yyval = yyvsp[0];}
break;
case 89:
#line 420 ".\Gramaticas\gramaticaLenguaje.y"
{TablaDeSimbolos::chequearNegativos(yyvsp[0]);yyval = "-"+yyvsp[0];}
break;
case 90:
#line 421 ".\Gramaticas\gramaticaLenguaje.y"
{yyval = yyvsp[0];}
break;
case 91:
#line 422 ".\Gramaticas\gramaticaLenguaje.y"
{yyerror("Una constante ULONG no puede ser negativa");}
break;
case 92:
#line 425 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="SHORT";}
break;
case 93:
#line 426 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="ULONG";}
break;
case 94:
#line 427 ".\Gramaticas\gramaticaLenguaje.y"
{yyval="FLOAT";}
break;
case 95:
#line 430 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::addTerceto("Print",yyvsp[0],"");}
break;
case 97:
#line 436 ".\Gramaticas\gramaticaLenguaje.y"
{EstructuraTercetos::addTerceto("Return","","");}
break;
#line 1564 "y.tab.c"
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
