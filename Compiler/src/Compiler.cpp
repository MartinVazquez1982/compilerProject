//============================================================================
// Name        : Compilador
// Authors     : Burckhardt, David | Benecier, Joaquin | Vazquez Arispe, Martin
// Description : Compilador de lenguaje provisto por la catedra Diseño de Compiladores - FCEx - UNICEN
//============================================================================

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <unistd.h>
#include "./AnalisisSintactico/Parse.h"
#include "./ContErrWar/ContErrWar.h"
#include "./AnalisisSemantico/EstructuraTercetos.h"
#include "./TablaDeSimbolos/TablaDeSimbolos.h"
#include "./AnalisisSemantico/Headers/VarSinInic.h"
#include "./GeneracionDeCodigo/Assembler.h"

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
    string nombreSinPath = nombreArchivoEntrada.substr(found + 1);
    found = nombreSinPath.find_last_of(".");
    string nombreArchivoAssembler = nombreSinPath.substr(0, found);
    string nombreArchivoSalida = nombreArchivoAssembler + " - con lineas.txt";
    
    

    //ofstream archivo_salida(path + "/" + nombreArchivoSalida);

    //if (archivo_salida.is_open()) {
        string linea;
        int numero_linea = 1;

        /*while (getline(codigoFuente, linea)) {
            archivo_salida << numero_linea << " " << linea << "\n";
            numero_linea++;
        }*/

        cout << "Se ha generado el archivo con las líneas numeradas como: " << path + "/" + nombreArchivoSalida << endl;
        codigoFuente.close();
        codigoFuente.clear();
        codigoFuente.open(nombreArchivo);
        VarSinInic::addTop();
        yyparse();
        codigoFuente.close();
        //archivo_salida.close();
        ContErrWar::mostrarMensajes();
        cout << endl << YELLOW << "Warnings - " << ContErrWar::getWarning() << "		" << RED << "Errores - " << ContErrWar::getError() << RESET << endl << endl;
        EstructuraTercetos::mostrarTercetos();
        if (ContErrWar::getError() == 0){
            generarCodigo(path, nombreArchivoAssembler);
            string comandoObj= "\\masm32\\bin\\ml /c /Zd /coff " + path + "\\" + nombreArchivoAssembler + ".asm";
            cout << endl << endl;
            chdir(path.c_str());
            int resultado = system(comandoObj.c_str());
            cout << endl << endl;
            if (resultado == 0){
            	cout << "OBJ creado exitosamente" << endl << endl << endl;
            	string comandoExe = "\\masm32\\bin\\Link /SUBSYSTEM:CONSOLE " + path + "\\" + nombreArchivoAssembler + ".obj";
            	resultado = system(comandoExe.c_str());
            	if (resultado == 0){
            		cout << "EXE creado exitosamente" << endl << endl << endl;
            	} else {
            		cout << "No Ejecutado correctamente" << endl;
            	}
            } else {
            	cout << "No Ejecutado correctamente" << endl;
            }

        }
        TablaDeSimbolos::imprimir();
    //} else {
    //    cout << "No se pudo abrir el archivo de salida." << endl;
    //}

    return 0;
}
