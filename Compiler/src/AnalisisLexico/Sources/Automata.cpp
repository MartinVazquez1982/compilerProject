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
	/*0*/	{{1, AccionesSemanticas::AS11 },{5, AccionesSemanticas::AS11},{6, AccionesSemanticas::AS11},{5, AccionesSemanticas::AS11},{13, AccionesSemanticas::AS11},{-1, AccionesSemanticas::AS18},{4, AccionesSemanticas::AS11},{7, AccionesSemanticas::AS11},{-1, AccionesSemanticas::AS18},{-1, AccionesSemanticas::AS18},{10, AccionesSemanticas::AS11},{11, AccionesSemanticas::AS11},{12, AccionesSemanticas::AS11},{18, AccionesSemanticas::AS11},{0, AccionesSemanticas::AS1},{-1, AccionesSemanticas::AS18},{5, AccionesSemanticas::AS11},{5, AccionesSemanticas::AS11},{5, AccionesSemanticas::AS11},{5, AccionesSemanticas::AS11},{6, AccionesSemanticas::AS11},{-2, AccionesSemanticas::AS2},{-1, nullptr}},
	/*1*/	{{1, AccionesSemanticas::AS4},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{2, AccionesSemanticas::AS4},{13, AccionesSemanticas::AS4},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2}},
	/*2*/	{{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{3, AccionesSemanticas::AS14},{-2, AccionesSemanticas::AS2},{-1, AccionesSemanticas::AS16},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2}},
	/*3*/	{{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-1, AccionesSemanticas::AS15},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2}},
	/*4*/	{{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21},{-1, AccionesSemanticas::AS21}},
	/*5*/	{{5, AccionesSemanticas::AS22},  {5, AccionesSemanticas::AS22},{-1, AccionesSemanticas::AS28},{5, AccionesSemanticas::AS22},{-1, AccionesSemanticas::AS28},{-1, AccionesSemanticas::AS28},{-1, AccionesSemanticas::AS28},{-1, AccionesSemanticas::AS28},{-1, AccionesSemanticas::AS28},{-1, AccionesSemanticas::AS28},{-1, AccionesSemanticas::AS28},{-1, AccionesSemanticas::AS28},{-1, AccionesSemanticas::AS28},{-1, AccionesSemanticas::AS28},{-1, AccionesSemanticas::AS28},{-1, AccionesSemanticas::AS28},{5, AccionesSemanticas::AS22},{5, AccionesSemanticas::AS22},{5, AccionesSemanticas::AS22},{5, AccionesSemanticas::AS22},{-1, AccionesSemanticas::AS28},{-1, AccionesSemanticas::AS28},{-1, AccionesSemanticas::AS28}},
	/*6*/	{{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{6, AccionesSemanticas::AS4},{6, AccionesSemanticas::AS4},{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{-1, AccionesSemanticas::AS19},{6, AccionesSemanticas::AS4},{-2, AccionesSemanticas::AS2},{-1, AccionesSemanticas::AS19}},
	/*7*/	{{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{8, AccionesSemanticas::AS4},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30},{-1, AccionesSemanticas::AS30}},
	/*8*/	{{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{9, nullptr},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{-2, AccionesSemanticas::AS2}},
	/*9*/	{{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{0, nullptr},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{8, AccionesSemanticas::AS1},{-2, AccionesSemanticas::AS2}},
	/*10*/	{{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20},{-1, AccionesSemanticas::AS20}},
	/*11*/	{{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-1, AccionesSemanticas::AS27},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2}},
	/*12*/	{{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26},{-1, AccionesSemanticas::AS26}},
	/*13*/	{{14, AccionesSemanticas::AS4},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29},{-1, AccionesSemanticas::AS29}},
	/*14*/	{{14, AccionesSemanticas::AS4},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{15, AccionesSemanticas::AS4},{15, AccionesSemanticas::AS4},{-2, AccionesSemanticas::AS2},{-1, AccionesSemanticas::AS12}},
	/*15*/	{{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{16, AccionesSemanticas::AS4},{16, AccionesSemanticas::AS4},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2}},
	/*16*/	{{17, AccionesSemanticas::AS4},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2},{-2, AccionesSemanticas::AS2}},
	/*17*/	{{17, AccionesSemanticas::AS4},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-1, AccionesSemanticas::AS12},{-2, AccionesSemanticas::AS2},{-1, AccionesSemanticas::AS12}},
	/*18*/	{{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18,AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{-1, AccionesSemanticas::AS15},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{18, AccionesSemanticas::AS4},{-2, AccionesSemanticas::AS2}}
};

const unordered_map<char, int> Automata::hashIndices = {
		{'a',1},{'0',0},{'A',2},{'_',3},{'.',4},{'+',5},{'-',6},{'*',7},{'{',8},{'}',9},{'=',10},
		{'!',11},{'<',12},{'>',12},{'%',13},{' ',14},{'\n',14},{'	',14},{';',15},{'/',15},{'(',15},
		{')',15},{',',15},{'u',16},{'l',17},{'s',18},{'e',19},{'E',20},{'\0',22}
};

int Automata::indiceCaracter(char caracter){
	if(isalpha(caracter)){
		if(isupper(caracter)){
			if (caracter == 'E'){
				return hashIndices.at('E');
			} else {
				return hashIndices.at('A');
			}
		} else {
			switch (caracter){
				case 'u':
					return hashIndices.at('u');
				case 'l':
					return hashIndices.at('l');
				case 's':
					return hashIndices.at('s');
				case 'e':
					return hashIndices.at('e');
				default:
					return hashIndices.at('a');
			}
		}
	} else if (isdigit(caracter)){
		return hashIndices.at('0');
	} else {
		try {
			return hashIndices.at(caracter);
		} catch (out_of_range & exception){
			return 21;
		}
	}
}

Dato Automata::pasoAutomata(char caracter){
	Dato celda = AutomataMatriz[estadoActual][indiceCaracter(caracter)];
	estadoActual = celda.estadoSiguiente;
	return celda;
}

void Automata::reiniciarRecorrido(){
	estadoActual=0;
}
