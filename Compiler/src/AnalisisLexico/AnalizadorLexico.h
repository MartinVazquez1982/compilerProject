/*
 * AnalizadorLexico.h
 *
 *  Created on: Sep 3, 2023
 *      Author: Martin
 */

#ifndef ANALIZADORLEXICO_H
#define ANALIZADORLEXICO_H

#ifdef __cplusplus
#include <fstream>
	using namespace std;
	extern ifstream codigoFuente;
#endif

#ifdef __cplusplus
extern "C" {
	#endif

	int yylex();
#ifdef __cplusplus
}
#endif

#endif /* ANALISISLEXICO_ANALIZADORLEXICO_H_ */
