/*
 * AnalizadorLexico.h
 *
 *  Created on: Sep 3, 2023
 *      Author: Martin
 */

#ifndef ANALIZADORLEXICO_H
#define ANALIZADORLEXICO_H

#include <fstream>
using namespace std;

extern ifstream codigoFuente;
extern string yylval;

int yylex();


#endif /* ANALISISLEXICO_ANALIZADORLEXICO_H_ */
