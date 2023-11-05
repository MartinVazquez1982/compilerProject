#include "../Headers/InsideClass.h"

using namespace std;

string InsideClass::clase = " ";

void InsideClass::inClass(string clase){
	InsideClass::clase = clase;
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
