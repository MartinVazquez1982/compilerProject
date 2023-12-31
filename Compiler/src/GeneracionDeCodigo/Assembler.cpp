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
#include <stdexcept>

using namespace std;

string reemplazarCaracter(const string cadena, char reemplazo, char cambio) {
    string resultado = cadena;

    // Iterar sobre la cadena y reemplazar ':' por '_'
    for (char& caracter : resultado) {
        if (caracter == reemplazo) {
            caracter = cambio;
        }
    }

    return resultado;
}

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
        cout << endl << "Se ha generado el archivo " << nombreArchivo << " exitosamente." << endl;
    } else {
        cout << "No se pudo abrir el archivo " << nombreArchivo << endl;
    }

    return archivoASM;
}

fstream generarASM(string path,const string& nombreArchivo) {
    fstream archivoASM(path+"/"+nombreArchivo, ios::out | ios::in | ios::app);

    if (archivoASM.is_open()) {
        archivoASM << ".code" << endl;
    } else {
    	throw runtime_error("No se ha podido generar la seccion .code del assembler");
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

void replaceCharsFloat(string & number){
	for (char &c : number) {
		switch (c) {
			case '.':
				c = 'D';
				break;
			case '-':
				c = 'N';
				break;
			case '+':
				c = 'P';
				break;
		}
	}
	number = "_"+number;
}

string chequearOperando(vector<EstructuraTercetos::terceto> tercetos,string clave, string op){
	if (op[0] == '['){
		return tercetos[stoi(op.substr(1, op.length()-2))].varAux;
	} else if (isdigit(op[0]) || op[0]=='-'){
		if (TablaDeSimbolos::getTipo(op) == "FLOAT"){
			string valor = TablaDeSimbolos::getValor(op);
			replaceCharsFloat(valor);
			return valor;
		} else {
			return TablaDeSimbolos::getValor(op);
		}
	} else {
		return op;
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

void crearAssembler(vector<EstructuraTercetos::terceto> tercetos, string claveTS, bool error[], bool & print,fstream & archivoASMCODE){
	for (int i=0; i < tercetos.size(); i++){
		if (tercetos[i].operador != " "){
			if (tercetos[i].operador.find("label") == string::npos){
				string op;
				string ftOp;
				string scOp;
				if (tercetos[i].operador == "BF"){
					op = tercetos[getNro(tercetos[i].operando1)].operador+tercetos[getNro(tercetos[i].operando1)].tipo;
					ftOp = reemplazarCaracter(reemplazarCaracter(tercetos[getNro(tercetos[i].operando2)].operador+claveTS,':','_'),'-','_');
				} else if (tercetos[i].operador == "BI"){
					op = tercetos[i].operador;
					ftOp = reemplazarCaracter(reemplazarCaracter(tercetos[getNro(tercetos[i].operando1)].operador+claveTS,':','_'),'-','_');
				}else if (tercetos[i].operador == "Call"){
					op = "CALL";
					ftOp = reemplazarCaracter(reemplazarCaracter(tercetos[i].operando1,':','@'),'-','_');
				}else if (tercetos[i].operador == "Return"){
					op = "RETURN";
				}else if (tercetos[i].operador == "Print"){
					print=true;
					op = "PRINT";
					ftOp = tercetos[i].operando1;
				} else {
					if (esOperacion(tercetos[i].operador) || tercetos[i].operador == "StoF" || tercetos[i].operador == "UtoF"){
						op = tercetos[i].operador+tercetos[i].tipo;
					} else {
						op = "comp"+tercetos[i].tipo;
					}
					ftOp = reemplazarCaracter(reemplazarCaracter(reemplazarCaracter(chequearOperando(tercetos, claveTS, tercetos[i].operando1),':','_'),'.','@'),'-','_');
					scOp = reemplazarCaracter(reemplazarCaracter(reemplazarCaracter(chequearOperando(tercetos, claveTS, tercetos[i].operando2),':','_'),'.','@'),'-','_');
				}
				string aux="nada";
				archivoASMCODE << EstructurasAssembler::getFuntion(op)(ftOp, scOp, aux,error) << endl;
				tercetos[i].varAux = aux;
				if (aux!="nada"){
					TablaDeSimbolos::add(aux," ",EstructuraTercetos::getTipo(claveTS,i),"Var");
				}
			} else {
				archivoASMCODE << reemplazarCaracter(reemplazarCaracter(tercetos[i].operador+claveTS,':','_'),'-','_')+":" << endl;
			}
		}
	}
}

void cargarAtrObj(string atr, string obj, ofstream & archivoASM ){
	if (TablaDeSimbolos::getTipo(atr) == "SHORT" || TablaDeSimbolos::getTipo(atr) == "ULONG" || TablaDeSimbolos::getTipo(atr) == "FLOAT"){
		string nuevoObj = atr.substr(0,atr.find('-'))+"."+obj;
		string reemplazo=reemplazarCaracter(reemplazarCaracter(nuevoObj,':','_'),'.','@');
		if (TablaDeSimbolos::getTipo(atr) == "SHORT"){
			archivoASM << reemplazo+DB << endl;
		} else {
			archivoASM << reemplazo+DD << endl;
		}
	} else {
		obj = atr.substr(0,atr.find('-'))+"."+obj;
		vector<string> clases = vector<string>();
		clases.push_back(TablaDeSimbolos::getTipo(atr)+":main");
		string clase2 = "", clase3 = "";
		if(TablaDeSimbolos::nivelHerencia(clases[0]) > 1){
			clases.push_back(TablaDeSimbolos::getHerencia(clases[0]));
			if(TablaDeSimbolos::nivelHerencia(clases[1]) > 1){
				clases.push_back(TablaDeSimbolos::getHerencia(clases[1]));
			}
		}
		for(int i=0; i< clases.size(); i++){
			string clase = clases[i];
			if (i > 0){ obj = clase.substr(0,clase.find(':'))+"."+obj;}
			vector<string> atributos = EstrDeclObj::getAtributos(clases[i]);
			for (string & atributo: atributos){
				cargarAtrObj(atributo,obj,archivoASM);
			}
		}
	}
}

void generarCodigo(string path, string nameFuente){
        ofstream archivoASM = generarArchivoASM(path,nameFuente+".asm");
        fstream archivoASMCODE = generarASM(path,"code.asm");
        const auto listaTercetos = EstructuraTercetos::getLista();
		bool error[3]={false, false, false};
		bool print=false;
        // Iterar sobre el unordered_map
        for (auto it = listaTercetos.begin(); it != listaTercetos.end(); ++it) {
        	if(it->first != ":main"){
				string claveTS = it->first;
				vector<EstructuraTercetos::terceto> tercetos = it->second;
				archivoASMCODE << reemplazarCaracter(reemplazarCaracter(claveTS,':','@'),'-','_')+":" << endl;
				crearAssembler(tercetos,claveTS,error, print,archivoASMCODE);
        	}
            archivoASMCODE << "\n";
        }
        archivoASMCODE << "main:\nfinit" << endl;
        if(listaTercetos.size() > 0){
			vector<EstructuraTercetos::terceto> tercetos = listaTercetos.find(":main")->second;
			crearAssembler(tercetos,":main",error, print,archivoASMCODE);
			if (error[0]){
				archivoASMCODE << FINEJEC << endl;
				archivoASMCODE << "etiqueta_divcero:" << endl;
				archivoASMCODE << "invoke MessageBox, NULL, addr msj_div0, addr msj_div0, MB_OK" << endl;
				archivoASM << "msj_div0 db \"Error: Division por cero\", 0" << endl;
			}
			if (error[1]){
				archivoASMCODE << FINEJEC << endl;
				archivoASMCODE << "overflow_add_float:" << endl;
				archivoASMCODE << "invoke MessageBox, NULL, addr msj_addfloat, addr msj_addfloat, MB_OK" << endl;
				archivoASM << "msj_addfloat db \"Error: Overflow suma entre flotantes\", 0" << endl;
				archivoASM << CERO << endl;
				archivoASM << MAXPOSITIVO << endl;
				archivoASM << MINPOSITIVO << endl;
				archivoASM << MAXNEGATIVO << endl;
				archivoASM << MINNEGATIVO << endl;
			}
			if (error[2]){
				archivoASMCODE << FINEJEC << endl;
				archivoASMCODE << "overflow_mulEnt:" << endl;
				archivoASMCODE << "invoke MessageBox, NULL, addr msj_addEnt, addr msj_addEnt, MB_OK" << endl;
				archivoASM << "msj_addEnt db \"Error: Overflow en producto de enteros\", 0" << endl;
			}
			if (print){
				archivoASM << "SPRINTS DB \"PRINT\", 0" << endl;
			}
		}
        archivoASMCODE << FINEJEC << endl;
        archivoASMCODE << "end main" << endl;
        TablaDeSimbolos::inic();
        while(!TablaDeSimbolos::fin()){
        	string clave = TablaDeSimbolos::getClave();
        	string uso = TablaDeSimbolos::usoAsignado(clave);
        	if (uso == "Var" || uso == "PF"){
        		string reemplazo = clave;
        		if (clave[0]!='@'){
        			reemplazo=reemplazarCaracter(reemplazarCaracter(clave,':','_'),'-','_');
				}
        		if(TablaDeSimbolos::getTipo(clave)=="SHORT"){
        			archivoASM << reemplazo+DB << endl;
				} else {
        			archivoASM << reemplazo+DD << endl;
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
        		if (TablaDeSimbolos::getTipo(clave)=="FLOAT"){
        			string number = clave;
        			replaceCharsFloat(number);
        			archivoASM << number+DDFloat+TablaDeSimbolos::getValor(clave) << endl;
        		} else if (TablaDeSimbolos::getTipo(clave)=="STRING"){
        			string varAux = TablaDeSimbolos::getVarAux(clave);
        			archivoASM << varAux+DBString+"\""+TablaDeSimbolos::getValor(clave)+"\", 0" << endl;
        		}
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
        			cargarAtrObj(atributo,atr,archivoASM);
        		}
        	}
        	EstrDeclObj::avanzar();
        }
		string linea;
		archivoASMCODE.seekg(0, ios::beg);
		//archivoASM << " " << endl;
		while (getline(archivoASMCODE, linea)) {
			archivoASM << linea << endl;
		}
        archivoASM.close();
        archivoASMCODE.close();
        remove((path+"\\code.asm").c_str());
}
