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

int AccionesSemanticas::nroLineas = 0;
string AccionesSemanticas::entrada = "";
bool AccionesSemanticas::habilitarLectura = true;
bool AccionesSemanticas::enviarWarning = true;
bool AccionesSemanticas::tokenIdentificado = false;
int AccionesSemanticas::nroToken;
char AccionesSemanticas::caracterAnterior;

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
	throw runtime_error("Linea: " + to_string(nroLineas) + "Error al reconocer el Token");
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
	TablaDeSimbolos::imprimir();
}

void AccionesSemanticas::AS7(char caracter){
	try{
		float numero = stof(entrada);
	} catch(const out_of_range & exception){
		throw runtime_error("Flotante Fuera de rango - Linea " + to_string(nroLineas));
	}
}

void AccionesSemanticas::AS8(char caracter){
	try{
		size_t pos = entrada.find('_');
		string numeroStr = entrada.substr(0, pos);
		unsigned long numero = stoul(numeroStr);
	}catch(const out_of_range & exception){
		throw runtime_error("Entero Largo sin signo fuera de rango - Linea " + to_string(nroLineas));
	}
}

void AccionesSemanticas::AS9(char caracter){
	try{
		size_t pos = entrada.find('_');
		string numeroStr = entrada.substr(0, pos);
		int numero = stoi(numeroStr);
		if (numero < 0 || numero > 128){
			throw out_of_range("");
		}
	}catch(const out_of_range & exception){
		throw runtime_error("Entero Corto con signo fuera de rango - Linea " + to_string(nroLineas));
	}
}

void AccionesSemanticas::AS10(char caracter){
	Automata::reiniciarRecorrido();
}

void AccionesSemanticas::AS11(char caracter){
	AS3(caracter);
	AS4(caracter);
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
	AS4(caracter);
	AS23(caracter);
	AS10(caracter);
	AS24(caracter);
}

void AccionesSemanticas::AS17(char caracter){
	AS5(caracter);
	AS6(caracter);
	AS10(caracter);
}

void AccionesSemanticas::AS18(char caracter){
	AccionesSemanticas::nroToken = int(caracter);
	tokenIdentificado = true;
	AS10(caracter);
}

void AccionesSemanticas::AS19(char caracter){
	nroToken = TablaPalabrasReservadas::buscar(entrada);
	if(nroToken == -1){
        throw runtime_error("No existe esa palabra reservada - Linea " + to_string(nroLineas));
	}
    tokenIdentificado = true;
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
		cout << "Warning: Identificador Linea " + to_string(nroLineas) + " contiene mas de 20 caracteres" << endl;
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
	TablaDeSimbolos::imprimir();
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
}
