#include "../Headers/InsideClass.h"

using namespace std;

string InsideClass::clase = " ";
stack<string> InsideClass::metodos;
bool InsideClass::Method = false;
bool InsideClass::FuncionMethod = false;
vector<InsideClass::tercetosIncompletos> InsideClass::tercetosVacios = vector<InsideClass::tercetosIncompletos>();
int InsideClass::it = 0;


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

bool InsideClass::insideMethod(){
	return InsideClass::Method;
}

void InsideClass::insideMethod(bool valor){
	InsideClass::Method = valor;
}

bool InsideClass::insideFuncionMethod(){
	return InsideClass::FuncionMethod;
}

void InsideClass::insideFuncionMethod(bool valor){
	InsideClass::FuncionMethod = valor;
}

// Manejo vector tercetos vacios

void InsideClass::inicTerVacios(){
	InsideClass::it  = 0;
}

InsideClass::tercetosIncompletos InsideClass::getTerVacio(){
	return InsideClass::tercetosVacios[it];
}

void InsideClass::avanzarTerVacios(){
	InsideClass::it++;
}

bool InsideClass::finTerVacios(){
	return (it == tercetosVacios.size());
}

void InsideClass::addTerVacios(string metodo,string nroTerceto,string pila){
	InsideClass::tercetosVacios.push_back({metodo, nroTerceto, pila});
}

void  InsideClass::delTerVacios(){
	InsideClass::tercetosVacios.erase(tercetosVacios.begin()+it);
}

void InsideClass::imprimir(){
	for(int i=0; i < tercetosVacios.size(); i++){
		cout << tercetosVacios[i].nroTerceto << endl;
	}
}
