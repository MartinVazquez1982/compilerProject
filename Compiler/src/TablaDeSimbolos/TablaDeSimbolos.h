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

		// Datos que se almacenan en cada entrada de la tabla de simbolos
		struct Datos{
			string tipo;
			string valor;
			bool consultado;

			string uso;
		};

		// Tabla de Simbolos
		static unordered_map<string, Datos> table;

		static void fueConsultado(string lexema);

		static void addConsultado(string lexema, string atributo, string valor);

	public:
		static void add(string lexema, string valor, string tipo);

		static void add(string lexema);

		static string getValor(string lexema);

		static void addAtributo(string lexema, string atributo, string valor);

		static void chequearNegativos(string nro);

		static void chequearPositivos(string nro);

		static string imprimir();

		static void del(string lexema);

		static void changeKey(string lexema);

		// Setters

		static void setUso(string lexema, string uso);
};

#endif /* TABLADESIMBOLOS_TABLADESIMBOLOS_H_ */
