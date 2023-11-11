#include "../Headers/EstructurasAssembler.h"
#include "../Headers/Instrucciones.h"
#include <unordered_map>
#include <string>
#include <functional>

using namespace std;

int EstructurasAssembler::nroVar = 0;
int EstructurasAssembler::label = 0;

// Inicializa el miembro estático "codigos" en el archivo .cpp
unordered_map<string,EstructurasAssembler::FunctionType> EstructurasAssembler::codigos = {
		{"+SHORT", EstructurasAssembler::getSumaShort},
		{"-SHORT", EstructurasAssembler::getRestaShort},
		{"*SHORT", EstructurasAssembler::getMultShort},
		{"/SHORT", EstructurasAssembler::getDivShort},
		{"=SHORT", EstructurasAssembler::getEqualShort},
		{"+ULONG", EstructurasAssembler::getSumaUlong},
		{"-ULONG", EstructurasAssembler::getRestaUlong},
		{"*ULONG", EstructurasAssembler::getMultUlong},
		{"/ULONG", EstructurasAssembler::getDivUlong},
		{"=ULONG", EstructurasAssembler::getEqualUlong},
		{"+FLOAT", EstructurasAssembler::getSumaFloat},
		{"-FLOAT", EstructurasAssembler::getRestaFloat},
		{"*FLOAT", EstructurasAssembler::getMultFloat},
		{"/FLOAT", EstructurasAssembler::getDivFloat},
		{"=FLOAT", EstructurasAssembler::getEqualFloat},
		{"StoFFLOAT", EstructurasAssembler::getConver},
		{"UtoFFLOAT", EstructurasAssembler::getConver},
		{"==SHORT", EstructurasAssembler::getCompEqualShort},
		{"!!SHORT", EstructurasAssembler::getComDifShort},
		{"<SHORT", EstructurasAssembler::getCompLessShort},
		{">SHORT", EstructurasAssembler::getCompGreaterShort},
		{"<=SHORT", EstructurasAssembler::getCompLessEqShort},
		{">=SHORT", EstructurasAssembler::getCompGreaterEqShort},
		{"==ULONG", EstructurasAssembler::getCompEqualUF},
		{"!!ULONG", EstructurasAssembler::getComDifUF},
		{"<ULONG", EstructurasAssembler::getCompLessUF},
		{">ULONG", EstructurasAssembler::getCompGreaterUF},
		{"<=ULONG", EstructurasAssembler::getCompLessEqUF},
		{">=ULONG", EstructurasAssembler::getCompGreaterEqUF},
		{"==FLOAT", EstructurasAssembler::getCompEqualUF},
		{"!!FLOAT", EstructurasAssembler::getComDifUF},
		{"<FLOAT", EstructurasAssembler::getCompLessUF},
		{">FLOAT", EstructurasAssembler::getCompGreaterUF},
		{"<=FLOAT", EstructurasAssembler::getCompLessEqUF},
		{">=FLOAT", EstructurasAssembler::getCompGreaterEqUF},
		{"BI", EstructurasAssembler::getJump}
};



string EstructurasAssembler::generarVariable(){
	string aux = "@aux"+to_string(EstructurasAssembler::nroVar);
	EstructurasAssembler::nroVar++;
	return aux;
}

string EstructurasAssembler::generarLabel(){
	string label = "@label"+to_string(EstructurasAssembler::label);
	EstructurasAssembler::label++;
	return label;
}

EstructurasAssembler::FunctionType EstructurasAssembler::getFuntion(string clave){
	return EstructurasAssembler::codigos.at(clave);
}

string EstructurasAssembler::getSumaShort(string operando1, string operando2, string & varAux){
	string salida = MOV+AH+", "+operando1;
	salida = salida + "\n" + ADD+AH+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+AH;
	return salida;
}

string EstructurasAssembler::getRestaShort(string operando1, string operando2, string & varAux){
	string salida = MOV+AL+", "+operando1;
	salida = salida + "\n" + SUB+AL+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+AL;
	return salida;
}

string EstructurasAssembler::getMultShort(string operando1, string operando2, string & varAux){
	string salida = MOV+AL+", "+operando1;
	salida = salida + "\n" + IMUL+AL+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+AL;
	return salida;
}

string EstructurasAssembler::getDivShort(string operando1, string operando2, string & varAux){
	string salida = MOV+AL+", "+operando1;
	salida = salida + "\n" + CBW;
	salida = salida + "\n" + IDIV+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+AL;
	return salida;
}

string EstructurasAssembler::getEqualShort(string operando1, string operando2, string & varAux){
	string salida = MOV+AH+", "+operando2;
	salida = salida + "\n" + MOV+operando1+", "+AH;
	return salida;
}

string EstructurasAssembler::getSumaUlong(string operando1, string operando2, string & varAux){
	string salida = MOV+EAX+", "+operando1;
	salida = salida + "\n" + ADD+EAX+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+EAX;
	return salida;
}

string EstructurasAssembler::getRestaUlong(string operando1, string operando2, string & varAux){
	string salida = MOV+EAX+", "+operando1;
	salida = salida + "\n" + SUB+EAX+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+EAX;
	return salida;
}

string EstructurasAssembler::getMultUlong(string operando1, string operando2, string & varAux){
	string salida = MOV+EAX+", "+operando1;
	salida = salida + "\n" + MUL+EAX+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+EAX;
	return salida;
}

string EstructurasAssembler::getDivUlong(string operando1, string operando2, string & varAux){
	string salida = MOV+EAX+", "+operando2;
	salida = salida + "\n" + XOR+EDX+", "+EDX;
	salida = salida + "\n" + DIV+operando1;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+EAX;
	return salida;
}

string EstructurasAssembler::getEqualUlong(string operando1, string operando2, string & varAux){
	string salida = MOV+EAX+", "+operando2;
	salida = salida + "\n" + MOV+operando1+", "+EAX;
	return salida;
}

string EstructurasAssembler::getSumaFloat(string operando1, string operando2, string & varAux){
	string salida = FLD+operando1;
	salida = salida + "\n" + FADD+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + FSTP+varAux;
	return salida;
}

string EstructurasAssembler::getRestaFloat(string operando1, string operando2, string & varAux){
	string salida = FLD+operando1;
	salida = salida + "\n" + FSUB+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + FSTP+varAux;
	return salida;
}

string EstructurasAssembler::getMultFloat(string operando1, string operando2, string & varAux){
	string salida = FLD+operando1;
	salida = salida + "\n" + FMUL+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + FSTP+varAux;
	return salida;
}

string EstructurasAssembler::getDivFloat(string operando1, string operando2, string & varAux){
	string salida = FLD+operando1;
	salida = salida + "\n" + FDIV+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + FSTP+varAux;
	return salida;
}

string EstructurasAssembler::getEqualFloat(string operando1, string operando2, string & varAux){
	string salida = FLD+operando2;
	salida = salida + "\n" + FSTP+operando1;
	return salida;
}

string EstructurasAssembler::getConver(string operando1, string operando2, string & varAux){
	string salida = FILD+operando1;
	varAux = generarVariable();
	salida = salida + "\n" + FSTP+varAux;
	return salida;
}

string EstructurasAssembler::getCompEqualShort(string operando1, string operando2, string & varAux){
	varAux = generarLabel();
	string salida = JNE+varAux;
	return salida;
}

string EstructurasAssembler::getComDifShort(string operando1, string operando2, string & varAux){
	varAux = generarLabel();
	string salida = JE+varAux;
	return salida;
}

string EstructurasAssembler::getCompLessShort(string operando1, string operando2, string & varAux){
	varAux = generarLabel();
	string salida = JGE+varAux;
	return salida;
}

string EstructurasAssembler::getCompGreaterShort(string operando1, string operando2, string & varAux){
	varAux = generarLabel();
	string salida = JLE+varAux;
	return salida;
}

string EstructurasAssembler::getCompLessEqShort(string operando1, string operando2, string & varAux){
	varAux = generarLabel();
	string salida = JG+varAux;
	return salida;
}

string EstructurasAssembler::getCompGreaterEqShort(string operando1, string operando2, string & varAux){
	varAux = generarLabel();
	string salida = JL+varAux;
	return salida;
}

string EstructurasAssembler::getCompEqualUF(string operando1, string operando2, string & varAux){
	varAux = generarLabel();
	string salida = JNE+varAux;
	return salida;
}

string EstructurasAssembler::getComDifUF(string operando1, string operando2, string & varAux){
	varAux = generarLabel();
	string salida = JE+varAux;
	return salida;
}

string EstructurasAssembler::getCompLessUF(string operando1, string operando2, string & varAux){
	varAux = generarLabel();
	string salida = JAE+varAux;
	return salida;
}

string EstructurasAssembler::getCompGreaterUF(string operando1, string operando2, string & varAux){
	varAux = generarLabel();
	string salida = JBE+varAux;
	return salida;
}

string EstructurasAssembler::getCompLessEqUF(string operando1, string operando2, string & varAux){
	varAux = generarLabel();
	string salida = JA+varAux;
	return salida;
}

string EstructurasAssembler::getCompGreaterEqUF(string operando1, string operando2, string & varAux){
	varAux = generarLabel();
	string salida = JB+varAux;
	return salida;
}

string EstructurasAssembler::getJump(string operando1, string operando2, string & varAux){
	return JMP+operando1;
}
