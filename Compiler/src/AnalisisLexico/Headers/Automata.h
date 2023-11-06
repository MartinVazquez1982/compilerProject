#ifndef ANALISISLEXICO_HEADERS_AUTOMATA_H_
#define ANALISISLEXICO_HEADERS_AUTOMATA_H_

#include <unordered_map>

using namespace std;

using FuncPtr = void (*)(char caracter);

// Estructura de cada celda de la matriz
struct Dato{
	int estadoSiguiente;
	FuncPtr AS;
};

class Automata{

	private:

		// Cantidad de filas de la matriz del automata
		const static int FILAS = 22;

		// Cantidad de columnas de la matriz del automata
		const static int COLUMNAS = 23;

		// Estado actual del automata
		static int estadoActual;

		// Estado en el que se produjo un error
		static int estadoError;

	public:

		//Matriz donde se representa el comportamiento del automata
		const static Dato AutomataMatriz[FILAS][COLUMNAS];

		//Hash donde se almacena la columna de cada caracter que se reconoce
		const static unordered_map<char, int> hashIndices;

		Dato static pasoAutomata(char caracter);

		void static reiniciarRecorrido();

		int static getEstadoError();

	private:

		int static indiceCaracter(char caracter);
};



#endif /* ANALISISLEXICO_HEADERS_AUTOMATA_H_ */
