#include "../Headers/EstrDeclObj.h"

#include <iostream>

using namespace std;

vector<tuple<string, vector<string>>> EstrDeclObj::objetos = vector<tuple<string, vector<string>>>();

unordered_map<string, vector<string>> EstrDeclObj::atributos;

void EstrDeclObj::addAtr(string clase, string atr){
	atributos[clase].push_back(atr);
}

void EstrDeclObj::addClase(string clase){
	if (atributos.find(clase) == atributos.end()){
		atributos[clase] = vector<string>();
	}
}

void EstrDeclObj::addObj(string obj, string clase1, string clase2, string clase3){
	vector<string> clases = vector<string>();
	clases.push_back(clase1);
	if (clase2 != ""){
		clases.push_back(clase2);
	}
	if (clase3 != ""){
		clases.push_back(clase3);
	}
	objetos.push_back(make_tuple(obj,clases));
}

void EstrDeclObj::imprimir(){
		// Imprimir el contenido de objetos
		std::cout << "Contenido de objetos:" << std::endl;
		for (const auto& obj : objetos) {
			std::string nombre = std::get<0>(obj);
			std::vector<std::string> atributos = std::get<1>(obj);

			std::cout << "Nombre: " << nombre << ", Atributos: ";
			for (const auto& atributo : atributos) {
				std::cout << atributo << " ";
			}
			std::cout << std::endl;
		}

		// Imprimir el contenido de atributos
		std::cout << "\nContenido de atributos:" << std::endl;
		for (const auto& pair : atributos) {
			std::string clave = pair.first;
			std::vector<std::string> valores = pair.second;

			std::cout << "Clave: " << clave << ", Valores: ";
			for (const auto& valor : valores) {
				std::cout << valor << " ";
			}
			std::cout << std::endl;
		}
}

void EstrDeclObj::inic(){
	i = 0;
}

void EstrDeclObj::avanzar(){
	i++;
}

vector<string>& EstrDeclObj::getClases(){
	return get<1>(objetos[i]);
}

string EstrDeclObj::getObjeto(){
	return get<0>(objetos[i]);
}

bool EstrDeclObj::fin(){
	return i >= objetos.size();
}

vector<string>& EstrDeclObj::getAtributos(string clase){
	return atributos[clase];
}
