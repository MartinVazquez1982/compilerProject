/*
 * TablaDeSimbolos.h
 *
 *  Created on: Sep 7, 2023
 *      Author: Martin
 */

#ifndef TABLADESIMBOLOS_TABLADESIMBOLOS_H_
#define TABLADESIMBOLOS_TABLADESIMBOLOS_H_

#include <unordered_map>
#include <string>

using namespace std;

class TablaDeSimbolos {

	private:

		struct Datos{
			string tipo;
			string valor;
		};

		static unordered_map<string, Datos> table;


	public:
		static void add(string lexema, string valor, string tipo);
		static void add(string lexema);

		static string getDato(string lexema, string atributo);
		static void addAtributo(string lexema, string atributo, string valor);
		static void imprimir();
};

#endif /* TABLADESIMBOLOS_TABLADESIMBOLOS_H_ */
