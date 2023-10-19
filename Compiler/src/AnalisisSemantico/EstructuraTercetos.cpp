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
	cout << endl << MAGENTA << listaTercetos.size() << "	( " << operador << " , " << operando1 << " , " << operando2 << " )" << RESET << endl;
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
