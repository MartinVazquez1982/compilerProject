/*
 * AnalizadorLexico.cpp
 *
 *  Created on: Aug 30, 2023
 *      Author: Martin
 */

#include <fstream>
#include <iostream>
#include "./AnalizadorLexico.h"
#include "./Headers/Automata.h"
#include "./Headers/AccionesSemanticas.h"
using namespace std;


void analisisLexico(ifstream& codigoFuente){
	char caracter;
	bool finDeArchivo = false;
	while (!finDeArchivo){
		if (AccionesSemanticas::LeerCaracter()){
			codigoFuente.get(caracter);
		}
		if (codigoFuente.eof()){
			finDeArchivo = true;
		} else {
			Dato estado = Automata::pasoAutomata(caracter);
			cout << estado.estadoSiguiente << endl;
			if (estado.AS != nullptr) estado.AS(caracter);
		}
	}
}
