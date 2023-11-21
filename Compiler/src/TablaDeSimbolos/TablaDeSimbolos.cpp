#include "TablaDeSimbolos.h"
#include <iostream>
#include <string>
#include "../AnalisisSemantico/Headers/Ambito.h"

using namespace std;

unordered_map<string, TablaDeSimbolos::Datos> TablaDeSimbolos::table;
unordered_map<string, TablaDeSimbolos::Datos>::iterator TablaDeSimbolos::it;

/**
 * Agrega una entrada a la tabla de simbolos
 *
 * @param Clave de la entrada en la tabla de simbolos
 */
void TablaDeSimbolos::add(string lexema){
	auto existe = TablaDeSimbolos::table.find(lexema);
	if (existe == TablaDeSimbolos::table.end()){
		TablaDeSimbolos::Datos info;
		info.valor=" ";
		info.tipo = " ";
		info.consultado = false;
		info.uso=" ";
		info.parametro_formal=" ";
		info.clase=" ";
		info.hereda=" ";
		info.varAux=" ";
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
void TablaDeSimbolos::add(string lexema, string valor, string tipo, string uso){
	auto existe = TablaDeSimbolos::table.find(lexema);
	if (existe == TablaDeSimbolos::table.end()){
		TablaDeSimbolos::Datos info;
		info.valor = valor;
		info.tipo = tipo;
		info.consultado = false;
		info.uso = uso;
		info.parametro_formal=" ";
		info.clase=" ";
		info.hereda=" ";
		info.nivelHerencia = -1;
		info.forwDecl = -1;
		info.varAux=" ";
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
void TablaDeSimbolos::imprimir() {
	cout << setw(55) << "			Tabla de Simbolos" << endl << endl;
	cout << left << setw(25) << "Lexema";
	cout << left << setw(7) << "Uso";
	cout << left << setw(17) << "Valor";
	cout << left << setw(10) << "Tipo";
	cout << left << setw(25) << "Parametro Formal";
	cout << left << setw(15) << "Clase";
	cout << left << setw(19) << "Hereda";
	cout << left << setw(10) << "Nivel Her";
	cout << left << "ForwDecl" << endl;

	cout << setfill('-') << setw(24) << "" << " ";
	cout << setfill('-') << setw(6) << "" << " ";
	cout << setfill('-') << setw(16) << "" << " ";
	cout << setfill('-') << setw(9) << "" << " ";
	cout << setfill('-') << setw(24) << "" << " ";
	cout << setfill('-') << setw(14) << "" << " ";
	cout << setfill('-') << setw(18) << "" << " ";
	cout << setfill('-') << setw(9) << "" << " ";
	cout << setfill('-') << setw(9) << "" << endl;
	cout << setfill(' ');
	for (const auto& par : TablaDeSimbolos::table) {
		cout << left << setw(25) << par.first;
			cout << left << setw(7) << par.second.uso;
			cout << left << setw(17) << par.second.valor;
			cout << left << setw(10) << par.second.tipo;
			cout << left << setw(25) << par.second.parametro_formal;
			cout << left << setw(15) << par.second.clase;
			cout << left << setw(19) << par.second.hereda;
			cout << left << setw(10) << par.second.nivelHerencia;
			cout << left << par.second.forwDecl << endl;
	}
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
		add(nroConSigno, "-"+info.valor, info.tipo, info.uso);
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
		add(nro, valor, TablaDeSimbolos::table["-"+nro].tipo, TablaDeSimbolos::table["-"+nro].uso);
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

string TablaDeSimbolos::changeKeyClass(string lexema, string className){
	TablaDeSimbolos::Datos data = TablaDeSimbolos::table.at(lexema);
	TablaDeSimbolos::table.erase(lexema);
	TablaDeSimbolos::table[lexema+"-"+className] = data;
	return lexema+"-"+className;
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
	try {
		auto it = TablaDeSimbolos::table.find(lexema);
		if (it == TablaDeSimbolos::table.end()){
			return "&";
		}
		return it->second.uso;
	}catch(const out_of_range & err){
		return "&";
	}
}

string TablaDeSimbolos::getParametroFormal(string lexema){
	auto it = TablaDeSimbolos::table.find(lexema);
	if (it == TablaDeSimbolos::table.end()){
				return " ";
	}
	return it->second.parametro_formal;
}

string TablaDeSimbolos::getTipo(string lexema){
	auto it = TablaDeSimbolos::table.find(lexema);
	if (it == TablaDeSimbolos::table.end()){
				return " ";
	}
	return it->second.tipo;
}

string TablaDeSimbolos::getUno(string lexema){
	string dato =  TablaDeSimbolos::table[lexema].tipo;
	if (dato == "SHORT"){
		add("1_s", "1", "SHORT", "Const");
		return "1_s";
	}else if (dato == "ULONG"){
		add("1_ul", "1", "ULONG", "Const");
		return "1_ul";
	}else if (dato == "FLOAT"){
		add("1.0", "1.0", "FLOAT", "Const");
		return "1.0";
	}
	return "otro tipo";
}

string TablaDeSimbolos::getClass(string lexema){
	auto it = TablaDeSimbolos::table.find(lexema);
	if (it == TablaDeSimbolos::table.end()){
				return " ";
	}
	return it->second.clase;
}

string TablaDeSimbolos::getHerencia(string lexema){
	auto it = TablaDeSimbolos::table.find(lexema);
	if (it == TablaDeSimbolos::table.end()){
				return " ";
	}
	return it->second.hereda;
}

int TablaDeSimbolos::nivelHerencia(string lexema){
	auto it = TablaDeSimbolos::table.find(lexema);
	if (it == TablaDeSimbolos::table.end()){
				return -1;
	}
	return it->second.nivelHerencia;
}

int TablaDeSimbolos::getForwDecl(string lexema){
	auto it = TablaDeSimbolos::table.find(lexema);
	if (it == TablaDeSimbolos::table.end()){
				return -1;
	}
	return it->second.forwDecl;
}


bool TablaDeSimbolos::tieneParametros(string lexema){
		auto it = TablaDeSimbolos::table.find(lexema);
		if (it == TablaDeSimbolos::table.end()){
			return false;
		}
		string parametro = it->second.parametro_formal;
		if (parametro == " "){
			return false;
		} else {
			return true;
		}
}

bool TablaDeSimbolos::existeClave(string lexema){
	auto it = TablaDeSimbolos::table.find(lexema);
	if (it == TablaDeSimbolos::table.end()){
		return false;
	}
	return true;
}

void TablaDeSimbolos::inic(){
	it = table.begin();
}

string TablaDeSimbolos::getClave(){
	return it->first;
}

void TablaDeSimbolos::avanzar(){
	it++;
}

bool TablaDeSimbolos::fin(){
	return (it == table.end());
}

void TablaDeSimbolos::setVarAux(string lexema,string var){
	TablaDeSimbolos::table[lexema].varAux = var;
}


string TablaDeSimbolos::getVarAux(string lexema){
	auto it = TablaDeSimbolos::table.find(lexema);
	if (it == TablaDeSimbolos::table.end()){
		return " ";	
	}
	return it->second.varAux;
}
