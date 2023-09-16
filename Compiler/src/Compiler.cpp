//============================================================================
// Name        : Compiler.cpp
// Authors     : Burckhardt, David | Benecier, Joaquin | Vazquez Arispe, Martin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include "./AnalisisSintactico/yTab.c"


using namespace std;

ifstream codigoFuente;

int main(int argc, char *argv[]) {
	if (argc > 2) {
		throw runtime_error("Demasiados argumentos.");
	} else if (argc < 2){
		throw runtime_error("Falta codigo fuente a compilar.");
	}

	const char* nombreArchivo = argv[1];
	codigoFuente.open(nombreArchivo);

	if (!codigoFuente.is_open()) {
		throw runtime_error("No se ha podido abrir el codigo fuente.");
	}

	yyparse();

	/*
	int nro;

	do {
		nro = yylex();
		cout << "\nNro de Token Reconocido: " << nro << endl;
	} while (nro != 0);
	*/
	codigoFuente.close();

	return 0;
}
