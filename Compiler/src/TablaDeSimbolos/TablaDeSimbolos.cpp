#include "TablaDeSimbolos.h"
#include <iostream>
#include <string>

using namespace std;

unordered_map<string, TablaDeSimbolos::Datos> TablaDeSimbolos::table;

/**
 * Agrega una entrada a la tabla de simbolos
 *
 * @param Clave de la entrada en la tabla de simbolos
 */
void TablaDeSimbolos::add(string lexema){
	auto existe = TablaDeSimbolos::table.find(lexema);
	if (existe == TablaDeSimbolos::table.end()){
		TablaDeSimbolos::Datos info;
		info.consultado = false;
		TablaDeSimbolos::table[lexema]=info;
	}
}

/**
 * Agrega entrada a la tabla de simbolo
 *
 * @param 1 Clave de la entrada en la tabla de simbolos
 *
 * @param 2 Valor de la entrada
 *
 * @param 3 Tipo de la entrada
 */
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

/**
 * @return Valor de esa entrada en la tabla de simbolos
 */
string TablaDeSimbolos::getValor(string lexema){
	return table.at(lexema).valor;
}

/**
 * @return String con lo que tiene almacenado la tabla de simbolos
 */
string TablaDeSimbolos::imprimir() {
	string salida = "\n			Tabla de Simbolos\n";
	for (const auto& par : TablaDeSimbolos::table) {
		salida = salida + "Clave: " + par.first + " | Valor: " + par.second.valor + " | Tipo: " + par.second.tipo + "\n";
	}
	return salida;
}

/**
 * Chequea si hay una entrada en la tabla de simbolos con ese numero negativo, si
 * no la hay revisa si el positivo de ese numero fue consultado. Si no lo fue, ocupa la
 * entrada dicho numero, sino, crea una nueva
 *
 * @param numero negativo a revisar en la tabla
 */
void TablaDeSimbolos::chequearNegativos(string nro){
	string nroConSigno = "-"+nro;
	auto existe = TablaDeSimbolos::table.find(nroConSigno);
	if (existe == TablaDeSimbolos::table.end()){
		TablaDeSimbolos::Datos& info = TablaDeSimbolos::table.at(nro);
		if (!info.consultado){
			TablaDeSimbolos::table.erase(nro);
		}
		add(nroConSigno, "-"+info.valor, info.tipo);
	} else {
		TablaDeSimbolos::table.erase(nro);
	}
	//cout << imprimir();
}

/**
 * Revisa si un numero negativo ocupo su celda en la tabla de simbolo y crea una nueva, si no
 * fue asi marca la celda como usada.
 *
 * @param numero positivo a revisar en la tabla
 */
void TablaDeSimbolos::chequearPositivos(string nro){
	auto existe = TablaDeSimbolos::table.find(nro);
	if (existe == TablaDeSimbolos::table.end()){
		string valor = nro.substr(0,nro.find("_"));
		add(nro, valor, TablaDeSimbolos::table["-"+nro].tipo);
	}
	TablaDeSimbolos::table[nro].consultado = true;
	//cout << imprimir();
}

/**
 * Elimina una entrada de la tabla de simbolo
 *
 * @param clave de la entrada a eliminar
 */
void TablaDeSimbolos::del(string lexema){
	TablaDeSimbolos::table.erase(lexema);
}



