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
			bool consultado;
		};

		static unordered_map<string, Datos> table;

		static string yylval;

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
};

#endif /* TABLADESIMBOLOS_TABLADESIMBOLOS_H_ */
