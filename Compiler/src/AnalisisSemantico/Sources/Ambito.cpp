#include "../Headers/Ambito.h"

string Ambito::ambito="";

void Ambito::add(string nuevoAmbito){
	Ambito::ambito = Ambito::ambito + ":" + nuevoAmbito;
}

void Ambito::del(){
	int i = Ambito::ambito.length()-1;
	while(Ambito::ambito[i] != ':'){i--;}
	if(i > 0){
		Ambito::ambito = Ambito::ambito.substr(0,i);
	} else {
		Ambito::ambito="";
	}
}

string Ambito::get(){
	return Ambito::ambito;
}
