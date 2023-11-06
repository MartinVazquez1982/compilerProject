#include "../Headers/InsideClass.h"

using namespace std;

string InsideClass::clase = " ";
stack<string> InsideClass::metodos;
bool InsideClass::funcionEnMetodo = false;
bool InsideClass::nivelValido = true;


void InsideClass::inClass(string clase){
	InsideClass::clase = clase;
}

void InsideClass::addMethod(string metodo){
	InsideClass::metodos.push(metodo);
}

void InsideClass::outClass(){
	InsideClass::clase = " ";
}

string InsideClass::getClass(){
	return InsideClass::clase;
}

string InsideClass::getClassSinMain(){
	string salida = InsideClass::clase;
	size_t posDosPuntos = salida.find(':');
	return salida.substr(0, posDosPuntos);
}

bool InsideClass::insideClass(){
	return clase != " ";
}

bool InsideClass::moreMethods(){
	return !InsideClass::metodos.empty();
}

string InsideClass::getMethod(){
	return InsideClass::metodos.top();
}

void InsideClass::outMethod(){
	InsideClass::metodos.pop();
}

void InsideClass::unstackMethods(){
	while(InsideClass::moreMethods()){
		InsideClass::metodos.pop();
	}
}

bool InsideClass::getFuncInMethod(){
	return InsideClass::funcionEnMetodo;
}

void InsideClass::setFuncInMethod(bool valor){
	InsideClass::funcionEnMetodo = valor;
}

bool InsideClass::getNivelValido(){
	return InsideClass::nivelValido;
}

void InsideClass::setNivelValido(bool valor){
	InsideClass::nivelValido = valor;
}
