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

void TablaDeSimbolos::imprimir() {
	for (const auto& par : TablaDeSimbolos::table) {
	        cout << "Clave: " << par.first << ", Valor: " << par.second.tipo << endl;
	}
	cout << "------------------------" << endl;
}
