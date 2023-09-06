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
	while (!codigoFuente.eof()){
		if (AccionesSemanticas::LeerCaracter()){
			codigoFuente.get(caracter);
		}
		if (codigoFuente.eof()){
			caracter='\0';
		}
		Dato estado = Automata::pasoAutomata(caracter);
		//cout << "Estado: " << estado.estadoSiguiente << endl;
		if (estado.AS != nullptr) estado.AS(caracter);
	}
}
