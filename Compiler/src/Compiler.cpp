//============================================================================
// Name        : Compilador
// Authors     : Burckhardt, David | Benecier, Joaquin | Vazquez Arispe, Martin
// Description : Compilador de lenguaje provisto por la catedra Diseño de Compiladores - FCEx - UNICEN
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include "./AnalisisSintactico/Parse.h"
#include "./ContErrWar/ContErrWar.h"
#include "./AnalisisSemantico/EstructuraTercetos.h"
#include "./TablaDeSimbolos/TablaDeSimbolos.h"
#include "./AnalisisSemantico/Headers/VarSinInic.h"

#define RESET   "\x1B[0m"
#define YELLOW  "\x1B[33m"
#define RED "\x1B[31m"

//Archivo con el codigo fuente
ifstream codigoFuente;

using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cout << "Uso: " << argv[0] << " <nombre del archivo>" << endl;
        return 1;
    }

    const char* nombreArchivo = argv[1];
    codigoFuente.open(nombreArchivo);

    if (!codigoFuente.is_open()) {
        cout << "No se pudo abrir el archivo de entrada." << endl;
        return 1;
    }

    string nombreArchivoEntrada = string(argv[1]);
    size_t found = nombreArchivoEntrada.find_last_of("/\\");
    string path = nombreArchivoEntrada.substr(0, found);

    string nombreArchivoSalida = nombreArchivoEntrada.substr(found + 1) + " - con lineas.txt";

    ofstream archivo_salida(path + "/" + nombreArchivoSalida);

    if (archivo_salida.is_open()) {
        string linea;
        int numero_linea = 1;

        while (getline(codigoFuente, linea)) {
            archivo_salida << numero_linea << " " << linea << "\n";
            numero_linea++;
        }

        cout << "Se ha generado el archivo con las líneas numeradas como: " << path + "/" + nombreArchivoSalida << endl;
        codigoFuente.close();
        codigoFuente.clear();
        codigoFuente.open(nombreArchivo);
        VarSinInic::addTop();
        yyparse();
        codigoFuente.close();
        archivo_salida.close();

        cout << endl << YELLOW << "Warnings - " << ContErrWar::getWarning() << "		" << RED << "Errores - " << ContErrWar::getError() << RESET << endl << endl;
        TablaDeSimbolos::imprimir();
        EstructuraTercetos::mostrarTercetos();
    } else {
        cout << "No se pudo abrir el archivo de salida." << endl;
    }

    return 0;
}
