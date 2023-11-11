#include "Assembler.h"
#include "../AnalisisSemantico/EstructuraTercetos.h"
#include "./Headers/EstructurasAssembler.h"
#include "../TablaDeSimbolos/TablaDeSimbolos.h"
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

bool esOperacion(string op){
	if(op == "==" || op == "!!" || op == "<" || op == ">" || op == "<=" || op == ">=" || op == "+" || op == "-" || op == "*" || op == "/" || op == "="){
		return true;
	}
	return false;
}

string chequearOperando(vector<EstructuraTercetos::terceto> tercetos,string clave, string op){
	if (op[0] == '['){
		return tercetos[stoi(op.substr(1, op.length()-2))].varAux;
	} else if (isdigit(op[0])){
		return TablaDeSimbolos::getValor(op);
	} else {
		return "_"+op;
	}
}

void generarCodigo(string path, string nameFuente){

        ofstream archivoASM = generarArchivoASM(path,nameFuente+".asm");
        const auto listaTercetos = EstructuraTercetos::getLista();

        // Iterar sobre el unordered_map
        for (auto it = listaTercetos.begin(); it != listaTercetos.end(); ++it) {
            const string clave = it->first;
            vector<EstructuraTercetos::terceto> tercetos = it->second;
            string opComp, tipoComp;
            for (int i=0; i < tercetos.size(); i++){
            	string op;
            	string ftOp;
            	string scOp;
            	if (esOperacion(tercetos[i].operador)){
            		op = tercetos[i].operador+tercetos[i].tipo;
            		ftOp = chequearOperando(tercetos, clave, tercetos[i].operando1);
            		scOp = chequearOperando(tercetos, clave, tercetos[i].operando2);
            	} else if (tercetos[i].operador == "BF"){
            		op = tercetos[getNro(tercetos[i].operando1)].operador+tercetos[getNro(tercetos[i].operando1)].tipo;
            		ftOp = tercetos[getNro(tercetos[i].operando2)].operador+clave;
            	} else if (tercetos[i].operador == "BI"){
            		op = tercetos[i].operador;
            		ftOp = tercetos[getNro(tercetos[i].operando1)].operador+clave;
            	}
            	string aux;
            	cout << EstructurasAssembler::getFuntion(op)(ftOp, scOp, aux) << endl;

            	tercetos[i].varAux = aux;
            }
            if (clave == ":main"){

            }
        }

        archivoASM.close();

}

