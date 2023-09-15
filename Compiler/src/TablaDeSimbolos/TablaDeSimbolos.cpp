/*
 * TablaDeSimbolos.cpp
 *
 *  Created on: Sep 7, 2023
 *      Author: Martin
 */

#include "TablaDeSimbolos.h"
#include <iostream>
#include <string>

using namespace std;

unordered_map<string, TablaDeSimbolos::Datos> TablaDeSimbolos::table;

void TablaDeSimbolos::add(string lexema){
	TablaDeSimbolos::Datos info;
	TablaDeSimbolos::table[lexema]=info;
}

void TablaDeSimbolos::add(string lexema, string valor, string tipo){
	TablaDeSimbolos::Datos info;
	info.tipo = tipo;
	info.valor = valor;
	TablaDeSimbolos::table[lexema]=info;
}

string TablaDeSimbolos::imprimir() {
	string salida = "\n			Tabla de Simbolos\n";
	for (const auto& par : TablaDeSimbolos::table) {
		salida = salida + "Clave: " + par.first + " | Valor: " + par.second.valor + " | Tipo: " + par.second.tipo + "\n";
	}
	return salida;
}
