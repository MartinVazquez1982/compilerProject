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

			//Funciones
			string parametro_formal;

			//Clases
			string clase;
			string hereda;
		};

		// Tabla de Simbolos
		static unordered_map<string, Datos> table;

		static void fueConsultado(string lexema);

		static void addConsultado(string lexema, string atributo, string valor);

	public:
		static void add(string lexema, string valor, string tipo);

		static void add(string lexema);

		static string getValor(string lexema);

		static void chequearNegativos(string nro);

		static void chequearPositivos(string nro);

		static string imprimir();

		static void del(string lexema);

		static string changeKey(string lexema);

		// Setters

		static void setUso(string lexema, string uso);

		static void setParametroFormal(string lexema, string parametro);

		static void setTipo(string lexema, string tipo);

		static void setClass(string lexema, string clase);

		static void setHerencia(string lexema, string clase);

		// Getters

		static string usoAsignado(string lexema);

		static string getParametroFormal(string lexema);

		static string getTipo(string lexema);

		static string getUno(string lexema);

		static string getHerencia(string lexema);

		static string getClass(string lexema);
};

#endif /* TABLADESIMBOLOS_TABLADESIMBOLOS_H_ */
