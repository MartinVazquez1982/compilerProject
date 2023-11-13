#include "Assembler.h"
#include "../AnalisisSemantico/EstructuraTercetos.h"
#include "./Headers/EstructurasAssembler.h"
#include "../TablaDeSimbolos/TablaDeSimbolos.h"
#include "./Headers/Instrucciones.h"
#include "./Headers/EstrDeclObj.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>


using namespace std;

ofstream generarArchivoASM(string path,const string& nombreArchivo) {
    ofstream archivoASM(path+"/"+nombreArchivo);

    if (archivoASM.is_open()) {
    	archivoASM << ".586" << std::endl;
		archivoASM << ".model flat, stdcall" << std::endl;
		archivoASM << "option casemap :none" << std::endl;
		archivoASM << "include \\masm32\\include\\windows.inc" << std::endl;
		archivoASM << "include \\masm32\\include\\kernel32.inc" << std::endl;
		archivoASM << "include \\masm32\\include\\user32.inc" << std::endl;
		archivoASM << "includelib \\masm32\\lib\\kernel32.lib" << std::endl;
		archivoASM << "includelib \\masm32\\lib\\user32.lib" << std::endl;
        archivoASM << ".data" << endl;
        cout << "Se ha generado el archivo " << nombreArchivo << " exitosamente." << endl;
    } else {
        cout << "No se pudo abrir el archivo " << nombreArchivo << endl;
    }

    return archivoASM;
}

fstream generarASM(string path,const string& nombreArchivo) {
    fstream archivoASM(path+"/"+nombreArchivo, ios::out | ios::in | ios::app);

    if (archivoASM.is_open()) {
        archivoASM << ".code" << endl;
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
        fstream archivoASMCODE = generarASM(path,"code.asm");
        const auto listaTercetos = EstructuraTercetos::getLista();

        // Iterar sobre el unordered_map
        for (auto it = listaTercetos.begin(); it != listaTercetos.end(); ++it) {
            string claveTS = it->first;
            vector<EstructuraTercetos::terceto> tercetos = it->second;
            string opComp, tipoComp;
            string clave = invertirCadena(claveTS);
            archivoASMCODE << clave << endl;
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
					archivoASMCODE << EstructurasAssembler::getFuntion(op)(ftOp, scOp, aux) << endl;
					tercetos[i].varAux = aux;
					if (aux!="nada"){
						TablaDeSimbolos::add(aux," ",EstructuraTercetos::getTipo(claveTS,i),"Var");
					}
            	} else {
            		archivoASMCODE << tercetos[i].operador+clave << endl;
            	}
            }
            if (clave == "main:"){
            	archivoASMCODE << "main_end" << endl;
            }
            archivoASMCODE << "\n";
        }
        TablaDeSimbolos::inic();
        while(!TablaDeSimbolos::fin()){
        	string clave = TablaDeSimbolos::getClave();
        	string uso = TablaDeSimbolos::usoAsignado(clave);
        	if (uso == "Var" || uso == "PF"){
        		if(TablaDeSimbolos::getTipo(clave)=="SHORT"){
        			archivoASM << clave+DB << endl;
				} else {
					archivoASM << clave+DD << endl;
				}
        	} else if(uso == "Obj"){
        		string clase1 = TablaDeSimbolos::getTipo(clave)+":main";
				string clase2 = "", clase3 = "";
        		if(TablaDeSimbolos::nivelHerencia(clase1) > 1){
        			clase2 = TablaDeSimbolos::getHerencia(clase1);
        			if(TablaDeSimbolos::nivelHerencia(clase2) > 1){
        				clase3 = TablaDeSimbolos::getHerencia(clase2);
        			}
        		}
        		EstrDeclObj::addObj(clave,clase1,clase2,clase3);
        	} else if (uso == "Atr"){
        		EstrDeclObj::addAtr(TablaDeSimbolos::getClass(clave),clave);
        	} else if(uso == "Clase"){
        		EstrDeclObj::addClase(clave);
        	} else if(uso =="Const"){
        		//falta constantes string
        	}
        	TablaDeSimbolos::avanzar();
        }
        EstrDeclObj::inic();
        while(!EstrDeclObj::fin()){
        	string atr = EstrDeclObj::getObjeto();
        	vector<string> clases = EstrDeclObj::getClases();
        	for(int i=0; i < clases.size(); i++){
        		string clase = clases[i];
        		if (i > 0){ atr = clase.substr(0,clase.find(':'))+"."+atr;}
        		vector<string> atributos = EstrDeclObj::getAtributos(clases[i]);
        		for(string & atributo: atributos){
        			string nuevoObj = atributo.substr(0,atributo.find('-'))+"."+atr;
        			if (TablaDeSimbolos::getTipo(atributo) == "SHORT"){
        				archivoASM << nuevoObj+DB << endl;
        			} else {
        				archivoASM << nuevoObj+DD << endl;
        			}
        		}
        	}
        	EstrDeclObj::avanzar();
        }
		string linea;
		archivoASMCODE.seekg(0, ios::beg);
		while (getline(archivoASMCODE, linea)) {
			archivoASM << linea << endl;
		}
        archivoASM.close();

}

