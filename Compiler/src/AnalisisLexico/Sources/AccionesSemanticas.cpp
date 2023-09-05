/*
 * AccionesSemanticas.cpp
 *
 *  Created on: Aug 29, 2023
 *      Author: Martin
 */

#include "../Headers/AccionesSemanticas.h"
#include<iostream>
using namespace std;

int AccionesSemanticas::nroLineas = 0;
string AccionesSemanticas::entrada = " ";
bool AccionesSemanticas::rango;

void AccionesSemanticas::AS1(char caracter){
	if (caracter == '\n') AccionesSemanticas::nroLineas++;
	cout << AccionesSemanticas::nroLineas << endl;
}

void AccionesSemanticas::AS3(char caracter){
	entrada.clear();
	cout << "String inicializado" << endl;
}
void AccionesSemanticas::AS4(char caracter){
	entrada+=caracter;
}
void AccionesSemanticas::AS6(char caracter){
	//Agregar a la TS
}

void AccionesSemanticas::AS9(char caracter){
	size_t pos = entrada.find('_');
	if (pos != string::npos && pos > 0) {
		string numeroStr = entrada.substr(0, pos);
		unsigned long long numero = std::strtoull(numeroStr.c_str(), nullptr, 10);
		if (numero >= 0 && numero <= UINT32_MAX) {//UINT32_MAX=4,294,967,295=2^32 - 1
			cout << "El número " << numero << " está dentro del rango 0 a 2^32 - 1." << endl;
			rango=true;
		} else {
			cout << "El número " << numero << " está fuera del rango." << endl;
			rango=false;
		}
	}
}
void AccionesSemanticas::AS12(char caracter){
	//AccionesSemanticas::AS7(caracter);
	if (rango){
		AccionesSemanticas::AS6(caracter);
		//AccionesSemanticas::AS10(caracter);
		//AccionesSemanticas::AS5(caracter);
	}
}

void AccionesSemanticas::AS15(char caracter){
	//AccionesSemanticas::AS4(caracter);
	//AccionesSemanticas::AS6(caracter);
	//AccionesSemanticas::AS10(caracter);
}
void AccionesSemanticas::AS18(char caracter){
	//chequear tabla de palabras reservadas
}
