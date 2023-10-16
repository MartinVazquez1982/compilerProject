#include "EstructuraTercetos.h"

using namespace std;

vector<EstructuraTercetos::terceto> EstructuraTercetos::listaTercetos;

stack<int> EstructuraTercetos::pilaTercetos;

void EstructuraTercetos::add(string operador, string operando1, string operando2){
	EstructuraTercetos::terceto nuevoTerceto;
	nuevoTerceto.operador = operador;
	nuevoTerceto.operando1 = operando1;
	nuevoTerceto.operando2 = operando2;
	listaTercetos.push_back(nuevoTerceto);
}

void EstructuraTercetos::addJump(string operador){
	EstructuraTercetos::terceto nuevoTerceto;
	nuevoTerceto.operador = operador;
	int nro = listaTercetos.size();
	pilaTercetos.push(nro);
	listaTercetos.push_back(nuevoTerceto);
}
