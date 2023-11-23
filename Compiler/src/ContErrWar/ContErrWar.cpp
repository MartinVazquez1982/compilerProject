#include "ContErrWar.h"
#include <iostream>
#include <tuple>

#define RESET   "\x1B[0m"
#define YELLOW  "\x1B[33m"
#define RED "\x1B[31m"

int ContErrWar::contErrores=0;
int ContErrWar::contWarning=0;
queue<tuple<string,string>> ContErrWar::mensajes;

void ContErrWar::sumErr(){
	ContErrWar::contErrores++;
}

void ContErrWar::sumWar(){
	ContErrWar::contWarning++;
}

bool ContErrWar::generarCodigo(){
	return (ContErrWar::contErrores == 0);
}

int ContErrWar::getError(){
	return ContErrWar::contErrores;
}

int ContErrWar::getWarning(){
	return ContErrWar::contWarning;
}

void ContErrWar::addMensaje(string msj, string tipo){
	auto mensaje = make_tuple(msj,tipo);
	mensajes.push(mensaje);
	if (tipo == "ERROR"){
		ContErrWar::sumErr();
	}else if (tipo == "WARNING"){
		ContErrWar::sumWar();
	}
}

void ContErrWar::mostrarMensajes(){
	cout << endl << endl << RED "================ Errores |" << YELLOW << "| Warnings ================ " << RESET << endl << endl;
	while (!mensajes.empty()) {
		auto elementoActual = ContErrWar::mensajes.front();
		if (get<1>(elementoActual) == "ERROR"){
			cout << RED << get<0>(elementoActual) << RESET << endl;
		}else if (get<1>(elementoActual) == "WARNING"){
			cout << YELLOW << get<0>(elementoActual) << RESET << endl;
		}
		ContErrWar::mensajes.pop();
	}
	cout << endl << RED  << "	     " << ContErrWar::getError() << " - Errores    " << YELLOW << "Warnings - " << ContErrWar::getWarning() << RESET << endl << endl;
}
