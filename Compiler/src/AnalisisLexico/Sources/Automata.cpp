/*
 * Automata.cpp
 *
 *  Created on: Sep 3, 2023
 *      Author: Martin
 */

#include "../Headers/Automata.h"
#include<iostream>
#include "../Headers/AccionesSemanticas.h"
using namespace std;

int Automata::estadoActual = 0;
const Dato constexpr Automata::AutomataMatriz[FILAS][COLUMNAS] = {
	/*0*/	{{1, nullptr },{5, nullptr},{6, nullptr},{5, nullptr},{13, nullptr},{-1, nullptr},{4, nullptr},{7, nullptr},{-1, nullptr},{-1, nullptr},{10, nullptr},{11, nullptr},{12, nullptr},{18, nullptr},{0, AccionesSemanticas::AS1},{-1, nullptr},{5, nullptr},{5, nullptr},{5, nullptr},{5, nullptr},{6, nullptr},{-2, nullptr},{-1, nullptr}},
	/*1*/	{{1, nullptr},{-2, nullptr},{-2, nullptr},{2, nullptr},{13, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr}},
	/*2*/	{{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{3, nullptr},{-2, nullptr},{-1, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr}},
	/*3*/	{{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-1, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr}},
	/*4*/	{{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
	/*5*/	{{5, nullptr},{5, nullptr},{-1, nullptr},{5, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{5, nullptr},{5, nullptr},{5, nullptr},{5, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
	/*6*/	{{-1, nullptr},{-1, nullptr},{6, nullptr},{6, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
	/*7*/	{{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{8, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
	/*8*/	{{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{9, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{-2, nullptr}},
	/*9*/	{{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{0, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{8, nullptr},{-2, nullptr}},
	/*10*/	{{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
	/*11*/	{{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-1, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr}},
	/*12*/	{{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
	/*13*/	{{14, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
	/*14*/	{{14, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{15, nullptr},{15, nullptr},{-2, nullptr},{-1, nullptr}},
	/*15*/	{{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{16, nullptr},{16, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr}},
	/*16*/	{{17, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr},{-2, nullptr}},
	/*17*/	{{17, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-1, nullptr},{-2, nullptr},{-1, nullptr}},
	/*18*/	{{18, nullptr},{18, nullptr},{18,nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{-1, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{18, nullptr},{-2, nullptr}}
};

const unordered_map<char, int> Automata::hashIndices = {
		{'a',1},{'0',0},{'A',2},{'_',3},{'.',4},{'+',5},{'-',6},{'*',7},{'{',8},{'}',9},{'=',10},
		{'!',11},{'<',12},{'>',12},{'%',13},{' ',14},{'\n',14},{'	',14},{';',15},{'/',15},{'(',15},
		{')',15},{',',15},{'u',16},{'l',17},{'s',18},{'e',19},{'E',20}
};

int Automata::indiceCaracter(char caracter){
	if(isalpha(caracter)){
		if(isupper(caracter)){
			if (caracter == 'E'){
				return Automata::hashIndices.at('E');
			} else {
				return Automata::hashIndices.at('A');
			}
		} else {
			switch (caracter){
				case 'u':
					return Automata::hashIndices.at('u')
							;
				case 'l':
					return Automata::hashIndices.at('l');
				case 's':
					return Automata::hashIndices.at('s');
				case 'e':
					return Automata::hashIndices.at('e');
				default:
					return Automata::hashIndices.at('a');
			}
		}
	} else if (isdigit(caracter)){
		return Automata::hashIndices.at('0');
	} else {
		return Automata::hashIndices.at(caracter);
	}
}

Dato Automata::pasoAutomata(char caracter){
	Dato celda = Automata::AutomataMatriz[Automata::estadoActual][Automata::indiceCaracter(caracter)];
	Automata::estadoActual = celda.estadoSiguiente;
	return celda;
}
