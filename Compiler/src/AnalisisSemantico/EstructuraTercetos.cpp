#include "EstructuraTercetos.h"

using namespace std;

#define MAGENTA "\x1B[35m"
#define RESET "\x1B[37m"

unordered_map<string,vector<EstructuraTercetos::terceto>> EstructuraTercetos::listaTercetos;

stack<int> EstructuraTercetos::pilaTercetos;

string EstructuraTercetos::ambito = ":main";

void EstructuraTercetos::addTerceto(string operador, string operando1, string operando2){
	EstructuraTercetos::terceto nuevoTerceto;
	nuevoTerceto.operador = operador;
	nuevoTerceto.operando1 = operando1;
	nuevoTerceto.operando2 = operando2;
	nuevoTerceto.tipo ="";
	listaTercetos[ambito].push_back(nuevoTerceto);
}

void EstructuraTercetos::addTerceto(string operador, string operando1, string operando2, string tipoTerceto){
	EstructuraTercetos::terceto nuevoTerceto;
	nuevoTerceto.operador = operador;
	nuevoTerceto.operando1 = operando1;
	nuevoTerceto.operando2 = operando2;
	nuevoTerceto.tipo = tipoTerceto;
	listaTercetos[ambito].push_back(nuevoTerceto);
}

void EstructuraTercetos::addLabel(){
	EstructuraTercetos::terceto nuevoTerceto;
	nuevoTerceto.operador = "label"+to_string(listaTercetos[ambito].size());
	listaTercetos[ambito].push_back(nuevoTerceto);
}

void EstructuraTercetos::addJump(string operador){
	EstructuraTercetos::terceto nuevoTerceto;
	nuevoTerceto.operador = operador;
	int nro = listaTercetos.size();
	pilaTercetos.push(nro);
	listaTercetos[ambito].push_back(nuevoTerceto);
}

string EstructuraTercetos::nroSigTerceto(){
	return "["+to_string(listaTercetos[ambito].size())+"]";
}

string EstructuraTercetos::nroActualTerceto(){
	return "["+to_string(listaTercetos[ambito].size()-1)+"]";
}

void EstructuraTercetos::apilar(){
	pilaTercetos.push(listaTercetos[ambito].size());
}

int EstructuraTercetos::desapilar(){
	int output = EstructuraTercetos::pilaTercetos.top();
	EstructuraTercetos::pilaTercetos.pop();
	return output;
}

void EstructuraTercetos::updateTerceto(int nro, string nroLabel){
	EstructuraTercetos::terceto info = listaTercetos[ambito][nro];
	if (info.operando1.length() == 0){
		info.operando1 = nroLabel;
	} else {
		info.operando2 = nroLabel;
	}
	listaTercetos[ambito][nro] = info;
}

void EstructuraTercetos::mostrarTercetos(){
	cout << MAGENTA << endl << "=========== TERCETOS ===========" << endl << endl;
	for (const auto& entry : listaTercetos) {
		cout << "	" << entry.first << endl << endl;
		for (int i=0; i < entry.second.size(); i++) {
			cout << i << "	( " << entry.second[i].operador << " , " << entry.second[i].operando1 << " , " << entry.second[i].operando2 << " )   " << entry.second[i].tipo  << endl;
		}
		cout << endl;
	}
	cout << RESET;
}

void EstructuraTercetos::setAmbito(string ambito){
	EstructuraTercetos::ambito = ambito;
	auto it = listaTercetos.find(EstructuraTercetos::ambito);
	if (it == listaTercetos.end()){
		if (ambito == ""){
			EstructuraTercetos::ambito = "main";
		} else {
			listaTercetos[ambito] = vector<EstructuraTercetos::terceto>();
		}
	}
}

string EstructuraTercetos::getTipo(string terceto){
	EstructuraTercetos::terceto info = listaTercetos[ambito][stoi(terceto)];
	return info.tipo;
}

unordered_map<string, vector<EstructuraTercetos::terceto>> & EstructuraTercetos::getLista(){
	return EstructuraTercetos::listaTercetos;
}

string EstructuraTercetos::getVarAux(string ambito, string terceto){
	cout << terceto << " " << ambito <<endl;
	return listaTercetos[ambito][stoi(terceto)].varAux;
}
