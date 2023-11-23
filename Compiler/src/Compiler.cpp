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
    string nombreArchivoLineas = nombreArchivoAssembler + "(Lineas-Numeradas).txt";
    
    

    ofstream archivo_lineas(path + "/" + nombreArchivoLineas);

    if (archivo_lineas.is_open()) {
        string linea;
        int numero_linea = 1;

        while (getline(codigoFuente, linea)) {
        	archivo_lineas << numero_linea << " " << linea << "\n";
            numero_linea++;
        }
        archivo_lineas.close();
        codigoFuente.close();
        codigoFuente.clear();
        codigoFuente.open(nombreArchivo);
        VarSinInic::addTop();
        cout << endl << "====================== Inicio de Compilacion ======================" << endl;
        cout << endl << "=====================> Generacion de Tokens <======================" << endl;
        yyparse();
        codigoFuente.close();
        ContErrWar::mostrarMensajes();
        if (ContErrWar::getError() == 0){
            //generarCodigo(path, nombreArchivoAssembler);
            cout << endl << "Se ha generado el archivo con las lineas numeradas como: " << path + "\\" + nombreArchivoLineas << endl << endl;
            EstructuraTercetos::mostrarTercetos();
            TablaDeSimbolos::imprimir();
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
            		cout  << "EXE creado exitosamente" << endl << endl << endl;
            	} else {
            		cout << "Error al intentar realizar el assembler del codigo fuente" << endl;
            	}
            } else {
            	cout << "Error al intentar realizar el link y assembler del codigo fuente" << endl;
            }

        }
    } else {
        cout << "No se pudo abrir el archivo de salida." << endl;
    }

    return 0;
}
