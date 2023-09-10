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


int yylex(ifstream& codigoFuente){
	char caracter;
	while (!codigoFuente.eof()){
		if (AccionesSemanticas::LeerCaracter()){
			codigoFuente.get(caracter);
		} else {
			caracter = AccionesSemanticas::caracterLeido();
		}
		if (codigoFuente.eof()){
			caracter='\0';
		}
		Dato estado = Automata::pasoAutomata(caracter);
		if (estado.AS != nullptr) estado.AS(caracter);
		if(AccionesSemanticas::tokenReconocido()){
			return AccionesSemanticas::nroToken;
		}
	}
	return 0;
}
