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
	auto existe = TablaDeSimbolos::table.find(lexema);
	if (existe == TablaDeSimbolos::table.end()){
		TablaDeSimbolos::Datos info;
		info.consultado = false;
		TablaDeSimbolos::table[lexema]=info;
	}
}

void TablaDeSimbolos::add(string lexema, string valor, string tipo){
	auto existe = TablaDeSimbolos::table.find(lexema);
	if (existe == TablaDeSimbolos::table.end()){
		TablaDeSimbolos::Datos info;
		info.tipo = tipo;
		info.valor = valor;
		info.consultado = false;
		TablaDeSimbolos::table[lexema]=info;
	}
}

string TablaDeSimbolos::getValor(string lexema){
	return table.at(lexema).valor;
}

string TablaDeSimbolos::imprimir() {
	string salida = "\n			Tabla de Simbolos\n";
	for (const auto& par : TablaDeSimbolos::table) {
		salida = salida + "Clave: " + par.first + " | Valor: " + par.second.valor + " | Tipo: " + par.second.tipo + "\n";
	}
	return salida;
}

void TablaDeSimbolos::chequearNegativos(string nro){
	string nroConSigno = "-"+nro;
	auto existe = TablaDeSimbolos::table.find(nroConSigno);
	if (existe == TablaDeSimbolos::table.end()){
		TablaDeSimbolos::Datos& info = TablaDeSimbolos::table.at(nro);
		if (!info.consultado){
			TablaDeSimbolos::table.erase(nro);
		}
		add(nroConSigno, "-"+info.valor, info.tipo);
	}
	cout << imprimir();
}

void TablaDeSimbolos::chequearPositivos(string nro){
	auto existe = TablaDeSimbolos::table.find(nro);
	if (existe == TablaDeSimbolos::table.end()){
		string valor = nro.substr(0,nro.find("_"));
		add(nro, valor, TablaDeSimbolos::table["-"+nro].tipo);
	}
	TablaDeSimbolos::table[nro].consultado = true;
	cout << imprimir();
}



