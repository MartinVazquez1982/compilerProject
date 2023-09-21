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


int yylex(){
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
			cout << "\nNro de Token Reconocido: " << AccionesSemanticas::nroToken << endl;
			int salida = AccionesSemanticas::nroToken;
			if(salida == 277 || salida == 276 || salida == 275 || salida == 274 || salida == 273) yylval=AccionesSemanticas::entrada;
			return salida;
		}
	}
	return 0;

}
