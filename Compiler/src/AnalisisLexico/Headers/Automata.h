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
using FuncPtr = void (*)();

struct Dato{
	int estadoSiguiente;
	FuncPtr AS;
};

class Automata{
	private:
		const static int FILAS = 19;
		const static int COLUMNAS = 23;
		const static int Final = -1;
		static int estadoActual;

	public:
		const static Dato AutomataMatriz[FILAS][COLUMNAS];
		static unordered_map<char, int> hashIndices;

		//Pensar como hacemos para transformar ese caracter en un nro de columna

	public:
		Dato static pasoAutomata(char caracter);

	private:
		void static cargarMatriz();
		int static indiceCaracter(char caraacter);
};



#endif /* ANALISISLEXICO_HEADERS_AUTOMATA_H_ */
