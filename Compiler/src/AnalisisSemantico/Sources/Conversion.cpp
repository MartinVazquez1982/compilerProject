#include "../Headers/Conversion.h"
#include<string>
#include<tuple>
#include<iostream>

using namespace std;

const unordered_map<string, tuple<string, string, string>> Conversion::asignaciones = {
    {"SHORT", make_tuple("IGUAL", "ERROR", "ERROR")},
    {"ULONG", make_tuple("ERROR", "IGUAL", "ERROR")},
    {"FLOAT", make_tuple("FLOAT", "FLOAT", "IGUAL")}
};

const unordered_map<string, tuple<string, string, string>> Conversion::operaciones = {
    {"SHORT", make_tuple("IGUAL", "ERROR", "FLOAT")},
    {"ULONG", make_tuple("ERROR", "IGUAL", "FLOAT")},
    {"FLOAT", make_tuple("FLOAT", "FLOAT", "IGUAL")}
};

string Conversion::asignacion(string tipoIzq, string tipoDer){
	try {
		if (tipoDer == "SHORT" ){
			return get<0>(Conversion::asignaciones.at(tipoIzq));
		}else if (tipoDer == "ULONG" ){
			return get<1>(Conversion::asignaciones.at(tipoIzq));
		}else{
			return get<2>(Conversion::asignaciones.at(tipoIzq));
		}
	} catch (out_of_range & tipoNoEncontrado){
		return "ERROR";
	}
}

string Conversion::operacion(string tipoIzq, string tipoDer){
	try {
	if (tipoDer == "SHORT" ){
		return get<0>(Conversion::operaciones.at(tipoIzq));
	}else if (tipoDer == "ULONG" ){
		return get<1>(Conversion::operaciones.at(tipoIzq));
	}else{
		return get<2>(Conversion::operaciones.at(tipoIzq));
	}
	} catch (out_of_range & err){
		return "ERROR";
	}
}


