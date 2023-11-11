#include "Assembler.h"
#include "../AnalisisSemantico/EstructuraTercetos.h"
#include "./Headers/EstructurasAssembler.h"
#include <fstream>
#include <iostream>

using namespace std;

ofstream generarArchivoASM(string path,const string& nombreArchivo) {
    ofstream archivoASM(path+"/"+nombreArchivo);

    if (archivoASM.is_open()) {
        archivoASM << ".CODE" << endl;
        cout << "Se ha generado el archivo " << nombreArchivo << " exitosamente." << endl;
    } else {
        cout << "No se pudo abrir el archivo " << nombreArchivo << endl;
    }

    return archivoASM;
}

int getNro(string numeroTerceto){
	size_t inicio = numeroTerceto.find('[');
	size_t fin = numeroTerceto.find(']');
	if (inicio != string::npos && fin != string::npos){
		return stoi(numeroTerceto.substr(inicio + 1, fin - 1));
	}
	return -1;
}

bool esComparacion(string op){
	if(op == "==" || op == "!!" || op == "<" || op == ">" || op == "<=" || op == ">="){
		return true;
	}
	return false;
}

void generarCodigo(string path, string nameFuente){

        ofstream archivoASM = generarArchivoASM(path,nameFuente+".asm");
        const auto listaTercetos = EstructuraTercetos::getLista();

        // Iterar sobre el unordered_map
        for (auto it = listaTercetos.begin(); it != listaTercetos.end(); ++it) {
            const string clave = it->first;
            const vector<EstructuraTercetos::terceto> tercetos = it->second;
            string opComp, tipoComp;
            for (EstructuraTercetos::terceto  ter: tercetos){
            	string ftOp = ter.operando1;
            	string scOp = ter.operando2;
            	if (esComparacion(ter.operador)){
            		opComp = ter.operador;
            		tipoComp = ter.tipo;
            	}
            	if (ter.operando1[0] == '['){
            		ftOp = tercetos[getNro(ter.operando1)].varAux;
            	}
            	if (ter.operando2[0] == '['){
            		scOp = tercetos[getNro(ter.operando2)].varAux;
            	}
            	string aux;
            	cout << EstructurasAssembler::getFuntion(ter.operador+ter.tipo)(ftOp, scOp, aux) << endl;
            }
            if (clave == ":main"){

            }
        }

        archivoASM.close();

}

