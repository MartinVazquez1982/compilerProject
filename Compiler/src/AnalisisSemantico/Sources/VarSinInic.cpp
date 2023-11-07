#include "../Headers/VarSinInic.h"
#include <iostream>

using namespace std;

stack<unordered_set<string>> VarSinInic::varSinUsar;


void VarSinInic::addTop(){
	varSinUsar.push(unordered_set<string>());
}

void VarSinInic::delTop(){
	if (varSinUsar.size() > 1){
		varSinUsar.pop();
	}
}

void VarSinInic::addVar(string lexema){
	if (varSinUsar.size() == 0) addTop();
	varSinUsar.top().insert(lexema);
}

void VarSinInic::delVar(string lexema){
	varSinUsar.top().erase(lexema);
}

list<string> VarSinInic::listVarTop(){
	list<string> salida = list<string>();
	for(const string& var: varSinUsar.top()){
		salida.push_back(var);
	}
	return salida;
}
