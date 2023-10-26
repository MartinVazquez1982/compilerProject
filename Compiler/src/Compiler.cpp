//============================================================================
// Name        : Compilador
// Authors     : Burckhardt, David | Benecier, Joaquin | Vazquez Arispe, Martin
// Copyright   : Your copyright notice
// Description : Compilador de lenguaje provisto por la catedra Diseño de Compiladores - FCEx - UNICEN
//============================================================================

#include <iostream>
#include <fstream>
#include "./AnalisisSintactico/Parse.h"
#include "./ContErrWar/ContErrWar.h"
#include "./AnalisisSemantico/EstructuraTercetos.h"

#define RESET   "\x1B[0m"
#define YELLOW  "\x1B[33m"
#define RED "\x1B[31m"

using namespace std;

//Archivo con el codigo fuente
ifstream codigoFuente;

/**
 * Main del compilador se revisa si hubo un path recibido como
 * parametro y si puede abrir dicho archivo. Luego realiza la compilacion
 */
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
	codigoFuente.close();
	cout << endl << YELLOW << "Warnings - " << ContErrWar::getWarning() << "		" << RED << "Errores - " << ContErrWar::getError() << RESET << endl << endl;
	if(ContErrWar::generarCodigo()){
		EstructuraTercetos::mostrarTercetos();
	}
	return 0;
}
