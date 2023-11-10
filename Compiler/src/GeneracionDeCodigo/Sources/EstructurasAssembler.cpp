#include "../Headers/EstructurasAssembler.h"
#include "../Headers/Instrucciones.h"
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

int EstructurasAssembler::nroVar = 0;

// Inicializa el miembro estático "codigos" en el archivo .cpp
unordered_map<string,EstructurasAssembler::FunctionType> EstructurasAssembler::codigos = {
		{"+SHORT", EstructurasAssembler::getSumaShort},
		{"-SHORT", EstructurasAssembler::getSumaShort},
		{"*SHORT", EstructurasAssembler::getSumaShort},
		{"/SHORT", EstructurasAssembler::getSumaShort},
		{"=SHORT", EstructurasAssembler::getSumaShort},
		{"+ULONG", EstructurasAssembler::getSumaShort},
		{"-ULONG", EstructurasAssembler::getSumaShort},
		{"*ULONG", EstructurasAssembler::getSumaShort},
		{"/ULONG", EstructurasAssembler::getSumaShort},
		{"=ULONG", EstructurasAssembler::getSumaShort},
		{"+FLOAT", EstructurasAssembler::getSumaShort},
		{"-FLOAT", EstructurasAssembler::getSumaShort},
		{"*FLOAT", EstructurasAssembler::getSumaShort},
		{"/FLOAT", EstructurasAssembler::getSumaShort},
		{"=FLOAT", EstructurasAssembler::getSumaShort},
		{"SHorULtoFL", EstructurasAssembler::getSumaShort},
		{"==SHORT", EstructurasAssembler::getSumaShort},
		{"!!SHORT", EstructurasAssembler::getSumaShort},
		{"<SHORT", EstructurasAssembler::getSumaShort},
		{">SHORT", EstructurasAssembler::getSumaShort},
		{"<=SHORT", EstructurasAssembler::getSumaShort},
		{">=SHORT", EstructurasAssembler::getSumaShort},
		{"==ULONG", EstructurasAssembler::getSumaShort},
		{"!!ULONG", EstructurasAssembler::getSumaShort},
		{"<ULONG", EstructurasAssembler::getSumaShort},
		{">ULONG", EstructurasAssembler::getSumaShort},
		{"<=ULONG", EstructurasAssembler::getSumaShort},
		{">=ULONG", EstructurasAssembler::getSumaShort},
};



string EstructurasAssembler::generarVariable(){
	string aux = "@aux"+to_string(EstructurasAssembler::nroVar);
	EstructurasAssembler::nroVar++;
	return aux;
}

EstructurasAssembler::FunctionType EstructurasAssembler::getFuntion(string clave){
	return EstructurasAssembler::codigos.at(clave);
}

string EstructurasAssembler::getSumaShort(string operando1, string operando2, string & varAux){
	string salida = MOV+AH+", _"+operando1;
	salida = salida + "\n" + ADD+AH+", _"+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+AH;
	return salida;
}
