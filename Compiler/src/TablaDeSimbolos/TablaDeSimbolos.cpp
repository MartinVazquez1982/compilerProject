#include "TablaDeSimbolos.h"
#include <iostream>
#include <string>
#include "../AnalisisSemantico/Headers/Ambito.h"

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
		info.tipo = "";
		info.nivelHerencia = -1;
		info.forwDecl = -1;
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
		info.nivelHerencia = -1;
		info.forwDecl = -1;
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
		salida = salida + "Clave: " + par.first + " | Clase: " + par.second.clase  + " | Imp: " + to_string(par.second.forwDecl) + "\n";
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
}

/**
 * Elimina una entrada de la tabla de simbolo
 *
 * @param clave de la entrada a eliminar
 */
void TablaDeSimbolos::del(string lexema){
	TablaDeSimbolos::table.erase(lexema);
}


string TablaDeSimbolos::changeKey(string lexema){
	TablaDeSimbolos::Datos data = TablaDeSimbolos::table.at(lexema);
	TablaDeSimbolos::table.erase(lexema);
	TablaDeSimbolos::table[lexema+Ambito::get()] = data;
	return lexema+Ambito::get();
}

// Setters

void TablaDeSimbolos::setUso(string lexema, string uso){
	TablaDeSimbolos::table[lexema].uso = uso;
}

void TablaDeSimbolos::setParametroFormal(string lexema, string parametro){
	TablaDeSimbolos::table[lexema].parametro_formal = parametro;
}

void TablaDeSimbolos::setTipo(string lexema, string tipo){
	TablaDeSimbolos::table[lexema].tipo = tipo;
}

void TablaDeSimbolos::setClass(string lexema, string clase){
	TablaDeSimbolos::table[lexema].clase = clase;
}

void TablaDeSimbolos::setHerencia(string lexema, string clase){
	TablaDeSimbolos::table[lexema].hereda = clase;
	TablaDeSimbolos::table[lexema].nivelHerencia = TablaDeSimbolos::table[clase].nivelHerencia + 1;
}

void TablaDeSimbolos::forwDeclComp(string lexema){
	TablaDeSimbolos::table[lexema].forwDecl = 1;
}

// Inicializaciones

void TablaDeSimbolos::inicNivelHer(string lexema){
	TablaDeSimbolos::table[lexema].nivelHerencia =  1;
}

void TablaDeSimbolos::inicForwDecl(string lexema){
	TablaDeSimbolos::table[lexema].forwDecl = 0;
}

// Getters

string TablaDeSimbolos::usoAsignado(string lexema){
	auto it = TablaDeSimbolos::table.find(lexema);
	if (it == TablaDeSimbolos::table.end()){
		return "&";
	}
	return it->second.uso;
}

string TablaDeSimbolos::getParametroFormal(string lexema){
	// Falta ver caso cuando no tiene parametro formal
	return TablaDeSimbolos::table[lexema].parametro_formal;
}

string TablaDeSimbolos::getTipo(string lexema){
	try {
		string dato =  TablaDeSimbolos::table[lexema].tipo;
		if (dato.empty()){
			return " ";
		}
		return dato;
	} catch(const out_of_range & err){
		return " ";
	}
}

string TablaDeSimbolos::getUno(string lexema){
	string dato =  TablaDeSimbolos::table[lexema].tipo;
	if (dato == "SHORT"){
		return "1_s";
	}else if (dato == "ULONG"){
		return "1_ul";
	}else if (dato == "FLOAT"){
		return "1.0";
	}
	return "otro tipo";
}

string TablaDeSimbolos::getClass(string lexema){
	try {
			string dato =  TablaDeSimbolos::table[lexema].clase;
			if (dato.empty()){
				return " ";
			}
			return dato;
		} catch(const out_of_range & err){
			return " ";
		}
}

string TablaDeSimbolos::getHerencia(string lexema){
	try {
			string dato =  TablaDeSimbolos::table[lexema].hereda;
			if (dato.empty()){
				return " ";
			}
			return dato;
		} catch(const out_of_range & err){
			return " ";
		}
}

int TablaDeSimbolos::nivelHerencia(string lexema){
	return TablaDeSimbolos::table[lexema].nivelHerencia;
}

int TablaDeSimbolos::getForwDecl(string lexema){
	return TablaDeSimbolos::table[lexema].forwDecl;
}
