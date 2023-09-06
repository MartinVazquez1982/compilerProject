/*
 * AccionesSemanticas.cpp
 *
 *  Created on: Aug 29, 2023
 *      Author: Martin
 */

#include "../Headers/AccionesSemanticas.h"
#include "../Headers/Automata.h"
#include "../Headers/TablaPalabrasReservadas.h"
#include <iostream>
#include <cfloat>
using namespace std;

int AccionesSemanticas::nroLineas = 0;
string AccionesSemanticas::entrada = "";
bool AccionesSemanticas::habilitarLectura = true;

bool AccionesSemanticas::LeerCaracter(){
	if(!habilitarLectura){
		habilitarLectura = true;
		return false;
	}
	return true;
}

void AccionesSemanticas::AS1(char caracter){
	if (caracter == '\n') AccionesSemanticas::nroLineas++;
}

void AccionesSemanticas::AS2(char caracter){
	throw runtime_error("Error al reconocer el Token");
}

void AccionesSemanticas::AS3(char caracter){
	entrada.clear();
	cout << "String inicializado" << endl;
}

void AccionesSemanticas::AS4(char caracter){
	entrada+=caracter;
}

void AccionesSemanticas::AS5(char caracter){
	habilitarLectura = false;
}

void AccionesSemanticas::AS6(char caracter){
	//Agregar a la TS
}

void AccionesSemanticas::AS7(char caracter){
	try{
		cout << "pase";
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

void AccionesSemanticas::AS19(char caracter){
	int valor = TablaPalabrasReservadas::buscar(entrada);
	if(valor == -1){
        throw runtime_error("No existe esa palabra reservada - Linea " + to_string(nroLineas));
	}
    cout << valor << endl;
    AS13();
}
