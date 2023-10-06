#ifndef ANALIZADORLEXICO_H
#define ANALIZADORLEXICO_H

#include <fstream>

using namespace std;

// Archico donde se encuentra el codigo fuente
extern ifstream codigoFuente;

/**
 * Variable donde se coloca la entrada a la tabla de simbolos para
 * que el parser pueda acceder
 */
extern string yylval;

int yylex();


#endif /* ANALISISLEXICO_ANALIZADORLEXICO_H_ */
