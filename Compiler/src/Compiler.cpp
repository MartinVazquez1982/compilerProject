//============================================================================
// Name        : Compiler.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include "./AnalisisLexico/Headers/AccionesSemanticas.h"
using namespace std;

int main(int argc, char *argv[]) {
	if (argc != 2) {
		cout << "Uso: " << argv[0] << " <nombre_del_archivo>" << endl;
		return 1;
	}

	const char* nombreArchivo = argv[1];
	ifstream archivo(nombreArchivo);

	if (!archivo) {
		cout << "No se pudo abrir el archivo." << endl;
		return 1;
	}

	char caracter;
	while (archivo.get(caracter)) {
		cout << caracter << endl;
	}
	archivo.close();
	AccionesSemanticas::AS1();
	return 0;
}
