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
#include <iomanip>
#include <set>
#include <list>

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
			int nivelHerencia;
			int forwDecl;
		};

		// Tabla de Simbolos
		static unordered_map<string, Datos> table;

		static void fueConsultado(string lexema);

		static void addConsultado(string lexema, string atributo, string valor);

		static unordered_map<string, Datos>::iterator it;

	public:
		static void add(string lexema, string valor, string tipo, string uso);

		static void add(string lexema);

		static string getValor(string lexema);

		static void chequearNegativos(string nro);

		static void chequearPositivos(string nro);

		static void imprimir();

		static void del(string lexema);

		static string changeKey(string lexema);

		static string changeKeyClass(string lexema, string className);

		// Setters

		static void setUso(string lexema, string uso);

		static void setParametroFormal(string lexema, string parametro);

		static void setTipo(string lexema, string tipo);

		static void setClass(string lexema, string clase);

		static void setHerencia(string lexema, string clase);

		static void forwDeclComp(string lexema);

		// Inicializaciones

		static void inicNivelHer(string lexema);

		static void inicForwDecl(string lexema);

		// Getters

		static string usoAsignado(string lexema);

		static string getParametroFormal(string lexema);

		static string getTipo(string lexema);

		static string getUno(string lexema);

		static string getHerencia(string lexema);

		static string getClass(string lexema);

		static int nivelHerencia(string lexema);

		static int getForwDecl(string lexema);

		static bool tieneParametros(string lexema);

		// Recorrer

		static void inic();

		static string getClave();

		static void avanzar();

		static bool fin();
};

#endif /* TABLADESIMBOLOS_TABLADESIMBOLOS_H_ */
