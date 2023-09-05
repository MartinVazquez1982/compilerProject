/*
 * Automata.h
 *
 *  Created on: Aug 30, 2023
 *      Author: Martin
 */

#ifndef ANALISISLEXICO_HEADERS_AUTOMATA_H_
#define ANALISISLEXICO_HEADERS_AUTOMATA_H_

#include <unordered_map>

using namespace std;
using FuncPtr = void (*)(char caracter);

struct Dato{
	int estadoSiguiente;
	FuncPtr AS;
};

class Automata{
	private:
		const static int FILAS = 19;
		const static int COLUMNAS = 23;
		static int estadoActual;

	public:
		const static Dato AutomataMatriz[FILAS][COLUMNAS];
		const static unordered_map<char, int> hashIndices;

		Dato static pasoAutomata(char caracter);
		void static reiniciarRecorrido();

	private:
		int static indiceCaracter(char caracter);
};



#endif /* ANALISISLEXICO_HEADERS_AUTOMATA_H_ */
