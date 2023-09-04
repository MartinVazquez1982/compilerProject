/*
 * Automata.cpp
 *
 *  Created on: Sep 3, 2023
 *      Author: Martin
 */

#include "../Headers/Automata.h"
#include<iostream>
using namespace std;

int Automata::estadoActual = 0;
const Dato constexpr Automata::AutomataMatriz[FILAS][COLUMNAS] = {
			{{1, nullptr },{5, nullptr},{6, nullptr},{5, nullptr},{13, nullptr},{-1, nullptr},{4, nullptr},{7, nullptr},{-1, nullptr},{-1, nullptr},{10, nullptr},{11, nullptr},{12, nullptr},{18, nullptr},{0, nullptr},{-1, nullptr},{5, nullptr},{5, nullptr},{5, nullptr},{5, nullptr},{6, nullptr},{-2, nullptr},{-1, nullptr}},
			{{1, nullptr},{-2, nullptr},{-2, nullptr},{2, nullptr},{13, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr}},
			{{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{3, nullptr},{-2, nullptr},{-1, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr}},
			{{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-1, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr}},
			{{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
			{{-1, nullptr},{-1, nullptr},{6, nullptr},{6, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
			{{5, nullptr},{5, nullptr},{-1, nullptr},{5, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{5, nullptr},{5, nullptr},{5, nullptr},{5, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
			{{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{8, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
			{{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{9, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{-2, nullptr}},
			{{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{0, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{-2, nullptr}},
			{{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
			{{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-1, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr}},
			{{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
			{{-1, nullptr},{14, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
			{{-1, nullptr},{14, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{15, nullptr},{15, nullptr},{-2, nullptr},{-1, nullptr}},
			{{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{16, nullptr},{16, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr}},
			{{17, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr}},
			{{17, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
			{{18, nullptr},{18, nullptr},{18,nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{-1, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{-2, nullptr}}
};

const static unordered_map<char, int> Automata::hashIndices = {
		{}
};

int Automata::indiceCaracter(char caracter){
	if(isalpha(caracter)){
		if(isupper(caracter)){
			if (caracter == "E"){

			} else {

			}
		} else {
			switch (caracter){
				case "u":
					break;
				case "l":
					break;
				case "s":
					break;
				case "e":
					break;
				default:
					break;
			}
		}
	} else if (isdigit(caracter)){

	} else {

	}
	return 0;
}

Dato Automata::pasoAutomata(char caracter){
	Dato celda = Automata::AutomataMatriz[Automata::estadoActual][Automata::indiceCaracter(caracter)];
	Automata::estadoActual = celda.estadoSiguiente;
	return celda;
}
