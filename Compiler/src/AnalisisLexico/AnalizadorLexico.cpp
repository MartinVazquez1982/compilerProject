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
using namespace std;


void analisisLexico(ifstream& codigoFuente){
	char caracter;
	while (codigoFuente.get(caracter)){
		Dato estado = Automata::pasoAutomata(caracter);
		cout << estado.estadoSiguiente << endl;
	}
}
