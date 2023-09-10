//============================================================================
// Name        : Compiler.cpp
// Authors     : Burckhardt, David | Benecier, Joaquin | Vazquez Arispe, Martin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include "./AnalisisLexico/AnalizadorLexico.h"
using namespace std;


int main(int argc, char *argv[]) {
	if (argc > 2) {
		throw runtime_error("Demasiados argumentos.");
	} else if (argc < 2){
		throw runtime_error("Falta codigo fuente a compilar.");
	}

	const char* nombreArchivo = argv[1];
	ifstream archivo(nombreArchivo);

	if (!archivo.is_open()) {
		throw runtime_error("No se ha podido abrir el codigo fuente.");
	}
	while (!archivo.eof()) {
		cout << yylex(archivo) << endl;
	}
	archivo.close();
	return 0;
}
