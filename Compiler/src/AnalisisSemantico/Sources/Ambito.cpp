#include "../Headers/Ambito.h"

string Ambito::ambito=":main";
string Ambito::ambito_inverso=":main";

void Ambito::add(string nuevoAmbito){
	Ambito::ambito_inverso = nuevoAmbito + Ambito::ambito;
	Ambito::ambito = Ambito::ambito + ":" + nuevoAmbito;
}

void Ambito::del(){
	int i = Ambito::ambito.length()-1;
	while(Ambito::ambito[i] != ':'){i--;}
	if(i > 0){
		Ambito::ambito = Ambito::ambito.substr(0,i);
		i = Ambito::ambito.length()-1;
		if (i > 5){
			while(Ambito::ambito[i] != ':'){i--;}
			Ambito::ambito_inverso = Ambito::ambito.substr(i+1,Ambito::ambito.length()) + Ambito::ambito.substr(0,i);
		} else {
			ambito_inverso=":main";
		}
	}

}

string Ambito::get(){
	return Ambito::ambito;
}

string Ambito::getTercetos(){
	return Ambito::ambito_inverso;
}

bool Ambito::insideMethod(){
	int primeraPosicion = ambito.find(':');
	if (primeraPosicion != string::npos) {
		int segundaPosicion = ambito.find(':', primeraPosicion + 1);
		if (segundaPosicion != string::npos) {
			return true;
		}
	}
	return false;
}
