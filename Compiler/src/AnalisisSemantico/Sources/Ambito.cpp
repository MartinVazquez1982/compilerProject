#include "../Headers/Ambito.h"

string Ambito::ambito=":main";

void Ambito::add(string nuevoAmbito){
	Ambito::ambito = Ambito::ambito + ":" + nuevoAmbito;
}

void Ambito::del(){
	int i = Ambito::ambito.length()-1;
	while(Ambito::ambito[i] != ':'){i--;}
	if(i > 0){
		Ambito::ambito = Ambito::ambito.substr(0,i);
	}
}

string Ambito::get(){
	return Ambito::ambito;
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
