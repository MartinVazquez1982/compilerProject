#include "Assembler.h"
#include "../AnalisisSemantico/EstructuraTercetos.h"
#include "./Headers/EstructurasAssembler.h"
#include "../TablaDeSimbolos/TablaDeSimbolos.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>


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
	if (op == "==" || op == "!!" || op == "<" || op == ">" || op == "<=" || op == ">="){
		return true;
	}
	return false;
}

bool esOperacion(string op){
	if( op == "+" || op == "-" || op == "*" || op == "/" || op == "="){
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

string invertirCadena(string cadena) {
    istringstream stream(cadena);
    vector<string> palabras;
    string palabra;

    // Separar la cadena en palabras
    while (getline(stream, palabra, ':')) {
        palabras.push_back(palabra);
    }

    // Construir la cadena invertida
    string resultado;
    for (auto it = palabras.rbegin(); it != palabras.rend(); ++it) {
        resultado += *it + ':';
    }

    // Eliminar el separador adicional al final
    if (!resultado.empty()) {
        resultado.pop_back();
    }

    return resultado;
}

string extraerPorcentajes(string cadena) {
	    size_t inicio = cadena.find('%');
	    size_t fin = cadena.rfind('%');
	    if (inicio != std::string::npos && fin != std::string::npos && inicio < fin) {
	        return cadena.substr(inicio + 1, fin - inicio - 1);
	    } else {
	        // Si no se encuentra el par de porcentajes, o están en el orden incorrecto, devuelve una cadena vacía.
	        return "";
	    }
	}

void generarCodigo(string path, string nameFuente){

        ofstream archivoASM = generarArchivoASM(path,nameFuente+".asm");
        const auto listaTercetos = EstructuraTercetos::getLista();

        // Iterar sobre el unordered_map
        for (auto it = listaTercetos.begin(); it != listaTercetos.end(); ++it) {
            string clave = it->first;
            vector<EstructuraTercetos::terceto> tercetos = it->second;
            string opComp, tipoComp;
            clave = invertirCadena(clave);
            cout << clave << endl;
            for (int i=0; i < tercetos.size(); i++){
            	if (tercetos[i].operador.find("label") == string::npos){
            		string op;
					string ftOp;
					string scOp;
					if (tercetos[i].operador == "BF"){
						op = tercetos[getNro(tercetos[i].operando1)].operador+tercetos[getNro(tercetos[i].operando1)].tipo;
						ftOp = tercetos[getNro(tercetos[i].operando2)].operador+clave;
					} else if (tercetos[i].operador == "BI"){
						op = tercetos[i].operador;
						ftOp = tercetos[getNro(tercetos[i].operando1)].operador+clave;
					}else if (tercetos[i].operador == "Call"){
						op = "CALL";
						ftOp = tercetos[i].operando1;
					}else if (tercetos[i].operador == "Return"){
						op = "RETURN";
					}else if (tercetos[i].operador == "Print"){
						op = "PRINT";
						ftOp = tercetos[i].operando1;
						ftOp = extraerPorcentajes(ftOp);
					} else {
						if (esOperacion(tercetos[i].operador) || tercetos[i].operador == "StoF" || tercetos[i].operador == "UtoF"){
							op = tercetos[i].operador+tercetos[i].tipo;
						} else {
							op = "comp"+tercetos[i].tipo;
						}
						ftOp = chequearOperando(tercetos, clave, tercetos[i].operando1);
						scOp = chequearOperando(tercetos, clave, tercetos[i].operando2);
					}
					string aux="nada";
					cout << EstructurasAssembler::getFuntion(op)(ftOp, scOp, aux) << endl;
					tercetos[i].varAux = aux;
					if (aux!="nada")
						TablaDeSimbolos::add(aux," ",EstructuraTercetos::getTipo(to_string(i)),"Var");
            	} else {
            		cout << tercetos[i].operador+clave << endl;
            	}
            }
            if (clave == "main:"){
            	cout << "main_end" << endl;
            }
            cout << "\n";
        }
        TablaDeSimbolos::imprimir();
        archivoASM.close();

}

