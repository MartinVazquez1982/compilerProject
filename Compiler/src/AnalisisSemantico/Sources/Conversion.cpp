#include "../Headers/Conversion.h"
#include<string>
#include<tuple>
#include<iostream>

using namespace std;

const unordered_map<string, tuple<string, string, string>> Conversion::asignaciones = {
    {"SHORT", make_tuple("SHORT", "ERROR", "ERROR")},
    {"ULONG", make_tuple("ERROR", "ULONG", "ERROR")},
    {"FLOAT", make_tuple("FLOAT", "FLOAT", "FLOAT")}
};

const unordered_map<string, tuple<string, string, string>> Conversion::operaciones = {
    {"SHORT", make_tuple("SHORT", "ERROR", "SHORT")},
    {"ULONG", make_tuple("ERROR", "ULONG", "FLOAT")},
    {"FLOAT", make_tuple("FLOAT", "FLOAT", "FLOAT")}
};

string Conversion::asignacion(string tipoIzq, string tipoDer){
	cout << tipoIzq << "  " << tipoDer;
	if (tipoDer == "SHORT" ){
		return get<0>(Conversion::asignaciones.at(tipoIzq));
	}else if (tipoDer == "ULONG" ){
		return get<1>(Conversion::asignaciones.at(tipoIzq));
	}else{
		return get<2>(Conversion::asignaciones.at(tipoIzq));
	}
}

string Conversion::operacion(string tipoIzq, string tipoDer){
	if (tipoDer == "SHORT" ){
		return get<0>(Conversion::operaciones.at(tipoIzq));
	}else if (tipoDer == "ULONG" ){
		return get<1>(Conversion::operaciones.at(tipoIzq));
	}else{
		return get<2>(Conversion::operaciones.at(tipoIzq));
	}
}


