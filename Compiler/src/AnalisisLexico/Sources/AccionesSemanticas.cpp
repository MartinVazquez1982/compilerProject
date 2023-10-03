/*
 * AccionesSemanticas.cpp
 *
 *  Created on: Aug 29, 2023
 *      Author: Martin
 */

#include "../Headers/AccionesSemanticas.h"
#include "../Headers/Automata.h"
#include "../Headers/TablaPalabrasReservadas.h"
#include "../../TablaDeSimbolos/TablaDeSimbolos.h"
#include <iostream>
#include <cfloat>
using namespace std;

#define RESET   "\x1B[0m"
#define YELLOW  "\x1B[33m"
#define RED "\x1B[31m"

int AccionesSemanticas::nroLineas = 1;
string AccionesSemanticas::entrada = "";
bool AccionesSemanticas::habilitarLectura = true;
bool AccionesSemanticas::enviarWarning = true;
bool AccionesSemanticas::tokenIdentificado = false;
int AccionesSemanticas::nroToken;
char AccionesSemanticas::caracterAnterior;
int AccionesSemanticas::lineaInicioToken;

char AccionesSemanticas::caracterLeido(){
	return caracterAnterior;
}

bool AccionesSemanticas::tokenReconocido(){
	if (tokenIdentificado){
		tokenIdentificado = false;
		return true;
	}
	return false;
}

bool AccionesSemanticas::LeerCaracter(){
	if(!habilitarLectura){
		habilitarLectura = true;
		return false;
	}
	return true;
}

void AccionesSemanticas::AS1(char caracter){
	if (caracter == '\n') nroLineas++;
}

void AccionesSemanticas::AS2(char caracter){
	AS13(caracter);
	switch(Automata::getEstadoError()){
		case 0:
			cout << RED << "Linea " + to_string(nroLineas) + ": caracter '" + caracter + "' invalido" << RESET << endl;
			habilitarLectura = true;
			break;
		case 1:
			cout << RED << "Linea " + to_string(nroLineas) + ": falta sufijo en la definicion de la constante entera" << RESET << endl;
			break;
		case 2:
		case 3:
			cout << RED << "Linea " + to_string(nroLineas) + ": se encuetra mal definido o falta el subfijo a la contante entera" << RESET << endl;
			break;
		case 8:
		case 9:
			cout << RED << "Linea " + to_string(lineaInicioToken) + ": comentario sin finalizacion" << RESET << endl;
			break;
		case 11:
			cout << RED << "Linea " + to_string(nroLineas) + ": identificador distinto (!!) mal definido" << RESET << endl;
			break;
		case 15:
		case 16:
			cout << RED << "Linea " + to_string(nroLineas) + ": constante flotante mal definida" << RESET << endl;
			break;
		case 18:
			cout << RED << "Linea " + to_string(lineaInicioToken) + ": cadena de texto mal definida" << RESET << endl;
			break;
	}
}

void AccionesSemanticas::AS3(char caracter){
	entrada.clear();
}

void AccionesSemanticas::AS4(char caracter){
	if (caracter != '\n'){
		entrada+=caracter;
	} else {
		AS1(caracter);
	}
}

void AccionesSemanticas::AS5(char caracter){
	habilitarLectura = false;
	caracterAnterior = caracter;
}

void AccionesSemanticas::AS6(char caracter){
	TablaDeSimbolos::add(entrada);
	//cout << TablaDeSimbolos::imprimir() << endl;
}

void AccionesSemanticas::AS7(char caracter){
	// 1.17549435E-38 < x 3.40282347E+38 U -3.40282347E+38 < x < -1.17549435E-38 U 0.0
	try{
		float numero = stof(entrada);
	} catch(const out_of_range & exception){
		throw runtime_error("Linea: " + to_string(nroLineas) + ": Constante FLOAT fuera del rango permitido");
	}
}

void AccionesSemanticas::AS8(char caracter){
	//0 < x < 2^32-1
	try{
		size_t pos = entrada.find('_');
		string numeroStr = entrada.substr(0, pos);
		unsigned long numero = stoul(numeroStr);
	}catch(const out_of_range & exception){
		throw runtime_error("Linea: " + to_string(nroLineas) + ": Constante ULONG fuera del rango permitido");
	}
}

void AccionesSemanticas::AS9(char caracter){
	//-2^7 < x < 2^7-1
	try{
		size_t pos = entrada.find('_');
		string numeroStr = entrada.substr(0, pos);
		int numero = stoi(numeroStr);
		if (numero > 128){
			throw out_of_range("");
		}
	}catch(const out_of_range & exception){
		throw runtime_error("Linea: " + to_string(nroLineas) + ": Constante SHORT fuera del rango permitido");
	}
}

void AccionesSemanticas::AS10(char caracter){
	Automata::reiniciarRecorrido();
}

void AccionesSemanticas::AS11(char caracter){
	AS3(caracter);
	AS4(caracter);
	lineaInicioToken = nroLineas;
}

void AccionesSemanticas::AS12(char caracter){
	AS7(caracter);
	AS10(caracter);
	AS5(caracter);
	AS25(caracter);
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
	AS23(caracter);
	AS10(caracter);
	AS24(caracter);
}

void AccionesSemanticas::AS16(char caracter){
	AS9(caracter);
	AS15(caracter);
}

void AccionesSemanticas::AS17(char caracter){
	AS5(caracter);
	AS6(caracter);
	AS10(caracter);
}

void AccionesSemanticas::AS18(char caracter){
	nroToken = int(caracter);
	tokenIdentificado = true;
	AS10(caracter);
}

void AccionesSemanticas::AS19(char caracter){
	nroToken = TablaPalabrasReservadas::buscar(entrada);
	if(nroToken == -1){
        cout << RED << "Linea: " + to_string(nroLineas) + ": NO existe la palabra reservada " + entrada << RESET << endl;
	} else {
		tokenIdentificado = true;
	}
    AS13(caracter);
}

void AccionesSemanticas::AS20(char caracter){
	tokenIdentificado = true;
	if (caracter=='='){
		nroToken = 269;
		AS10(caracter);
	} else {
		nroToken = int('=');
		AS13(caracter);
	}
}

void AccionesSemanticas::AS21(char caracter){
	tokenIdentificado = true;
	if (caracter=='-'){
		nroToken = 268;
		AS10(caracter);
	} else {
		nroToken = int('-');
		AS13(caracter);
	}
}

void AccionesSemanticas::AS22(char caracter){
	if (entrada.length() < 20){
		AS4(caracter);
		enviarWarning = true;
	} else if (enviarWarning){
		enviarWarning = false;
		cout << YELLOW <<"Warning - Linea " + to_string(nroLineas) + ": El Identificador contiene mas de 20 caracteres" << RESET << endl;
	}
}

void AccionesSemanticas::AS23(char caracter){
	if (caracter == '%'){
		TablaDeSimbolos::add(entrada, entrada.substr(1,entrada.length()-2),"STRING");
	} else {
		size_t pos = entrada.find('_');
		string valor = entrada.substr(0, pos);
		if (caracter == 's'){
			TablaDeSimbolos::add(entrada, valor ,"SHORT");
		} else {
			TablaDeSimbolos::add(entrada, valor ,"ULONG");
		}
	}
	//cout << TablaDeSimbolos::imprimir() << endl;
}

void AccionesSemanticas::AS24(char caracter){
	tokenIdentificado = true;
	if(caracter == '%'){
		nroToken = 276;
	} else if (caracter == 's'){
		nroToken = 273;
	} else {
		nroToken = 274;
	}
}

void AccionesSemanticas::AS25(char caracter){
	TablaDeSimbolos::add(entrada, entrada,"FLOAT");
	tokenIdentificado = true;
	nroToken = 275;
	//cout << TablaDeSimbolos::imprimir() << endl;
}

void AccionesSemanticas::AS26(char caracter){
	tokenIdentificado = true;
	if (caracter == '='){
		if (entrada == ">"){
			nroToken = 271;
		} else {
			nroToken = 272;
		}
		AS10(caracter);
	} else {
		nroToken = int(entrada[0]);
		AS13(caracter);
	}
}

void AccionesSemanticas::AS27(char caracter){
	nroToken = 270;
	tokenIdentificado = true;
	AS10(caracter);
}

void AccionesSemanticas::AS28(char caracter){
	AS17(caracter);
	nroToken = 277;
	tokenIdentificado = true;
}

void AccionesSemanticas::AS29(char caracter){
	AS5(caracter);
	AS18('.');
}

void AccionesSemanticas::AS30(char caracter){
	AS5(caracter);
	AS18('*');
}

