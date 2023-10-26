#include "EstructuraTercetos.h"

using namespace std;

#define MAGENTA "\x1B[35m"
#define RESET "\x1B[37m"

vector<EstructuraTercetos::terceto> EstructuraTercetos::listaTercetos;

stack<int> EstructuraTercetos::pilaTercetos;


void EstructuraTercetos::addTerceto(string operador, string operando1, string operando2){
	EstructuraTercetos::terceto nuevoTerceto;
	nuevoTerceto.operador = operador;
	nuevoTerceto.operando1 = operando1;
	nuevoTerceto.operando2 = operando2;
	listaTercetos.push_back(nuevoTerceto);
}

void EstructuraTercetos::addLabel(){
	EstructuraTercetos::terceto nuevoTerceto;
	nuevoTerceto.operador = "label"+to_string(listaTercetos.size());
	listaTercetos.push_back(nuevoTerceto);
}

void EstructuraTercetos::addJump(string operador){
	EstructuraTercetos::terceto nuevoTerceto;
	nuevoTerceto.operador = operador;
	int nro = listaTercetos.size();
	pilaTercetos.push(nro);
	listaTercetos.push_back(nuevoTerceto);
}

string EstructuraTercetos::nroSigTerceto(){
	return "["+to_string(listaTercetos.size())+"]";
}

void EstructuraTercetos::apilar(){
	pilaTercetos.push(listaTercetos.size());
}

int EstructuraTercetos::desapilar(){
	int output = EstructuraTercetos::pilaTercetos.top();
	EstructuraTercetos::pilaTercetos.pop();
	return output;
}

void EstructuraTercetos::updateTerceto(int nro, string nroLabel){
	EstructuraTercetos::terceto info = listaTercetos[nro];
	if (info.operando1.length() == 0){
		info.operando1 = nroLabel;
	} else {
		info.operando2 = nroLabel;
	}
	listaTercetos[nro] = info;
}

void EstructuraTercetos::mostrarTercetos(){
	cout << endl;
	for (int i=0; i<listaTercetos.size();i++){
		cout << MAGENTA << i << "	( " << listaTercetos[i].operador << " , " << listaTercetos[i].operando1 << " , " << listaTercetos[i].operando2 << " )" << RESET << endl;
	}
}
