/*
 * AccionesSemanticas.cpp
 *
 *  Created on: Aug 29, 2023
 *      Author: Martin
 */

#include "../Headers/AccionesSemanticas.h"
#include <iostream>
#include <cfloat>
using namespace std;

int AccionesSemanticas::nroLineas = 0;
string AccionesSemanticas::entrada = "";

void AccionesSemanticas::AS1(char caracter){
	if (caracter == '\n') AccionesSemanticas::nroLineas++;
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

void AccionesSemanticas::AS7(char caracter){
	float numero = stof(entrada);
	if (numero < FLT_MIN || numero > FLT_MAX) {//FLT_MAX=3.40282e+38 | FLT_MIN=1.17549e-38
		throw runtime_error("Flotante Fuera de rango - Linea" + nroLineas);
	}
}

void AccionesSemanticas::AS8(char caracter){
	size_t pos = entrada.find('_');
	if (pos != string::npos && pos > 0) {
		string numeroStr = entrada.substr(0, pos);
		unsigned long long numero = strtoull(numeroStr.c_str(), nullptr, 10);
		if (numero >= 0 && numero <= UINT32_MAX) {//UINT32_MAX=4,294,967,295=2^32 - 1
			cout << "El número " << numero << " está dentro del rango 0 a 2^32 - 1." << endl;
			rango=true;
		} else {
			cout << "El número " << numero << " está fuera del rango." << endl;
			rango=false;
		}
	}
}

void AccionesSemanticas::AS9(char caracter){
	size_t pos = entrada.find('_');
	if (pos != string::npos && pos > 0) {
		string numeroStr = entrada.substr(0, pos);
		unsigned long long numero = strtoull(numeroStr.c_str(), nullptr, 10);
		if (numero >= 0 && numero <= UINT32_MAX) {//UINT32_MAX=4,294,967,295=2^32 - 1
			cout << "El número " << numero << " está dentro del rango 0 a 2^32 - 1." << endl;
			rango=true;
		} else {
			cout << "El número " << numero << " está fuera del rango." << endl;
			rango=false;
		}
	}
}

void AccionesSemanticas::AS11(char caracter){
	AS3(caracter);
	AS4(caracter);
}

void AccionesSemanticas::AS12(char caracter){
	AS7(caracter);
	AS6(caracter);
	AS10(caracter);
	AS5(caracter);
}

void AccionesSemanticas::AS13(char caracter){
	AS5(caracter);
	AS10(caracter);
}

void AccionesSemanticas::AS14(char caracter){
	AS4(caracter);
	AS8(caracter);
}

void AccionesSemanticas::AS15(char caracter){
	AS4(caracter);
	AS6(caracter);
	AS10(caracter);
}

void AccionesSemanticas::AS16(char caracter){
	AS9(caracter);
	AS6(caracter);
	AS4(caracter);
	AS10(caracter);
}

void AccionesSemanticas::AS17(char caracter){
	AS5(caracter);
	AS6(caracter);
	AS10(caracter);
}

void AccionesSemanticas::AS18(char caracter){
	//chequear tabla de palabras reservadas
}

void AccionesSemanticas::AS19(char caracter){
	AS18(caracter);
	AS10(caracter);
}
