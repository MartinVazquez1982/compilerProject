#include "../Headers/EstructurasAssembler.h"
#include "../Headers/Instrucciones.h"
#include "../../TablaDeSimbolos/TablaDeSimbolos.h"
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
		{"StoFFLOAT", EstructurasAssembler::getConverShort},
		{"UtoFFLOAT", EstructurasAssembler::getConverUlong},
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
		{"BI", EstructurasAssembler::getJump},
		{"compSHORT",EstructurasAssembler::getCompShort},
		{"compULONG",EstructurasAssembler::getCompUlong},
		{"compFLOAT", EstructurasAssembler::getCompFloat},
		{"CALL", EstructurasAssembler::getCall},
		{"RETURN", EstructurasAssembler::getReturn},
		{"PRINT", EstructurasAssembler::getPrint}
};


string EstructurasAssembler::generarVariable(){
	string aux = "@aux"+to_string(EstructurasAssembler::nroVar);
	EstructurasAssembler::nroVar++;
	return aux;
}

EstructurasAssembler::FunctionType EstructurasAssembler::getFuntion(string clave){
	return EstructurasAssembler::codigos.at(clave);
}

string EstructurasAssembler::getSumaShort(string operando1, string operando2, string & varAux, bool error[]){
	string salida = MOV+AH+", "+operando1;
	salida = salida + "\n" + ADD+AH+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+AH;
	return salida;
}

string EstructurasAssembler::getRestaShort(string operando1, string operando2, string & varAux, bool error[]){
	string salida = MOV+AL+", "+operando1;
	salida = salida + "\n" + SUB+AL+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+AL;
	return salida;
}

string EstructurasAssembler::getMultShort(string operando1, string operando2, string & varAux, bool error[]){
	string salida = MOV+AL+", "+operando1;
	salida = salida + "\n" + IMUL+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+AL;
	salida = salida + "\n" + JO + "overflow_mulEnt";
	error[2]=true;
	return salida;
}

string EstructurasAssembler::getDivShort(string operando1, string operando2, string & varAux, bool error[]){
	string salida = MOV+AL+", "+operando1;
	salida = salida + "\n" + CBW;
	if (isdigit(operando2[0])){
		salida = salida + "\n" + MOV+BL+", "+operando2;
		salida = salida + "\n" + CMP + BL + ", " + "0";
	}else{
		salida = salida + "\n" + CMP + operando2 + ", " + "0";
	}
	salida = salida + "\n" + JE + "etiqueta_divcero";
	if (isdigit(operando2[0])){
			salida = salida + "\n" + MOV+CL+", "+operando2;
			salida = salida + "\n" + IDIV + CL;
	}else{
			salida = salida + "\n" + IDIV+operando2;
	}
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+AL;
	error[0]=true;
	return salida;
}

string EstructurasAssembler::getEqualShort(string operando1, string operando2, string & varAux, bool error[]){
	string salida = MOV+AH+", "+operando2;
	salida = salida + "\n" + MOV+operando1+", "+AH;
	return salida;
}

string EstructurasAssembler::getSumaUlong(string operando1, string operando2, string & varAux, bool error[]){
	string salida = MOV+EAX+", "+operando1;
	salida = salida + "\n" + ADD+EAX+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+EAX;
	return salida;
}

string EstructurasAssembler::getRestaUlong(string operando1, string operando2, string & varAux, bool error[]){
	string salida = MOV+EAX+", "+operando1;
	salida = salida + "\n" + SUB+EAX+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+EAX;
	return salida;
}

string EstructurasAssembler::getMultUlong(string operando1, string operando2, string & varAux, bool error[]){
	string salida = MOV+EAX+", "+operando1;
	salida = salida + "\n" + MUL+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+EAX;
	salida = salida + "\n" + JO + "overflow_mulEnt";
	error[2]=true;
	return salida;
}

string EstructurasAssembler::getDivUlong(string operando1, string operando2, string & varAux, bool error[]){
	string salida = MOV+EAX+", "+operando1;
	salida = salida + "\n" + XOR+EDX+", "+EDX;
	if (isdigit(operando2[0])){
		salida = salida + "\n" + MOV+EBX+", "+operando2;
		salida = salida + "\n" + CMP + EBX + ", " + "0";
	}else{
		salida = salida + "\n" + CMP + operando2 + ", " + "0";
	}
	salida = salida + "\n" + JE + "etiqueta_divcero";
	if (isdigit(operando2[0])){
		salida = salida + "\n" + MOV+ECX+", "+operando2;
		salida = salida + "\n" + DIV+ECX;
	} else {
		salida = salida + "\n" + DIV+operando2;
	}
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+EAX;
	error[0]=true;
	return salida;
}

string EstructurasAssembler::getEqualUlong(string operando1, string operando2, string & varAux, bool error[]){
	string salida = MOV+EAX+", "+operando2;
	salida = salida + "\n" + MOV+operando1+", "+EAX;
	return salida;
}

string EstructurasAssembler::getSumaFloat(string operando1, string operando2, string & varAux, bool error[]){
	string salida = FLD+operando1;
	salida = salida + "\n" + FADD+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + FCOM+" CERO"+"\n"+FSTSW+AX+"\n"+SAHF+"\n"+JE+"realizarAsignacion"+to_string(label);
	salida = salida + "\n" + FCOM+" MAXPOSITIVO"+"\n"+FSTSW+AX+"\n"+SAHF+"\n"+JA+"overflow_add_float";
	salida = salida + "\n" + FCOM+" MINNEGATIVO"+"\n"+FSTSW+AX+"\n"+SAHF+"\n"+JB+"overflow_add_float";
	salida = salida + "\n" + FCOM+" MINPOSITIVO"+"\n"+FSTSW+AX+"\n"+SAHF+"\n"+JA+"realizarAsignacion"+to_string(label);
	salida = salida + "\n" + FCOM+" MAXNEGATIVO"+"\n"+FSTSW+AX+"\n"+SAHF+"\n"+JA+"overflow_add_float";
	salida = salida + "\n" + "realizarAsignacion"+to_string(label)+":" + "\n" + FSTP+varAux;
	error[1]=true;
	label++;
	return salida;
}

string EstructurasAssembler::getRestaFloat(string operando1, string operando2, string & varAux, bool error[]){
	string salida = FLD+operando1;
	salida = salida + "\n"+ FLD+operando2+"\n"+FSUB;
	varAux = generarVariable();
	salida = salida + "\n" + FSTP+varAux;
	return salida;
}

string EstructurasAssembler::getMultFloat(string operando1, string operando2, string & varAux, bool error[]){
	string salida = FLD+operando1;
	salida = salida + "\n" + FMUL+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + FSTP+varAux;
	return salida;
}

string EstructurasAssembler::getDivFloat(string operando1, string operando2, string & varAux, bool error[]){
	string salida = FLD+operando1;
	string varAuxComp;
	salida = salida + "\n" + getCompFloat("000",operando2,varAuxComp,error);
	salida = salida + "\n" + JE + "etiqueta_divcero";
	varAux = generarVariable();
	salida = salida + "\n" + FDIV+operando2;
	salida = salida + "\n" + FSTP+varAux;
	error[0]=true;
	return salida;
}

string EstructurasAssembler::getEqualFloat(string operando1, string operando2, string & varAux, bool error[]){
	string salida = FLD+operando2;
	salida = salida + "\n" + FSTP+operando1;
	return salida;
}

string EstructurasAssembler::getConverShort(string operando1, string operando2, string & varAux, bool error[]){
	varAux = generarVariable();
	string salida = MOV+AL+", "+operando1;
	salida = salida + "\n" + CBW + "\n" + CWDE;
	salida = salida + "\n" + MOV + varAux + ", " + EAX;
	salida = salida + "\n" + FILD + varAux;
	salida = salida + "\n" + FSTP+varAux;
	return salida;
}

string EstructurasAssembler::getConverUlong(string operando1, string operando2, string & varAux, bool error[]){
	varAux = generarVariable();
	string salida = FILD+operando1;
	salida = salida + "\n" + FSTP+varAux;
	return salida;
}

string EstructurasAssembler::getCompEqualShort(string operando1, string operando2, string & varAux, bool error[]){
	return JNE+operando1;
}

string EstructurasAssembler::getComDifShort(string operando1, string operando2, string & varAux, bool error[]){
	return JE+operando1;
}

string EstructurasAssembler::getCompLessShort(string operando1, string operando2, string & varAux, bool error[]){
	return JGE+operando1;
}

string EstructurasAssembler::getCompGreaterShort(string operando1, string operando2, string & varAux, bool error[]){
	return JLE+operando1;
}

string EstructurasAssembler::getCompLessEqShort(string operando1, string operando2, string & varAux, bool error[]){
	return JG+operando1;
}

string EstructurasAssembler::getCompGreaterEqShort(string operando1, string operando2, string & varAux, bool error[]){
	return JL+operando1;
}

string EstructurasAssembler::getCompEqualUF(string operando1, string operando2, string & varAux, bool error[]){
	return JNE+operando1;
}

string EstructurasAssembler::getComDifUF(string operando1, string operando2, string & varAux,bool error[]){
	return JE+operando1;
}

string EstructurasAssembler::getCompLessUF(string operando1, string operando2, string & varAux,bool error[]){
	return JAE+operando1;
}

string EstructurasAssembler::getCompGreaterUF(string operando1, string operando2, string & varAux,bool error[]){
	return JBE+operando1;
}

string EstructurasAssembler::getCompLessEqUF(string operando1, string operando2, string & varAux,bool error[]){
	return JA+operando1;
}

string EstructurasAssembler::getCompGreaterEqUF(string operando1, string operando2, string & varAux,bool error[]){
	return JB+operando1;
}

string EstructurasAssembler::getJump(string operando1, string operando2, string & varAux,bool error[]){
	return JMP+operando1;
}

string EstructurasAssembler::getCompShort(string operando1, string operando2, string & varAux,bool error[]){
	string salida= MOV+AL+", "+operando1;
	salida= salida+ "\n"+ CMP+AL+", "+operando2;
	return salida;
}

string EstructurasAssembler::getCompUlong(string operando1, string operando2, string & varAux,bool error[]){
	string salida= MOV+EAX+", "+operando1;
	salida= salida+ "\n"+  CMP+operando1+", "+operando2;
	return salida;
}

string EstructurasAssembler::getCompFloat(string operando1, string operando2, string & varAux,bool error[]){
	string salida = FLD+operando2;
	if (operando1=="000"){
		salida = salida+"\n"+FLDZ+"\n"+FCOMPP;
	} else {
		salida = salida+"\n"+FLD+operando1+"\n"+FCOMPP;
	}
	salida = salida+"\n"+FSTSW+AX;
	salida = salida+"\n" + SAHF;
	return salida;
}

string EstructurasAssembler::getCall(string operando1, string operando2, string & varAux,bool error[]){
	return CALL+operando1;
}

string EstructurasAssembler::getReturn(string operando1, string operando2, string & varAux,bool error[]){
	return RET;
}

string EstructurasAssembler::getPrint(string operando1, string operando2, string & varAux,bool error[]){
	string var = TablaDeSimbolos::getVarAux(operando1);
	if (var == " "){
		var = generarVariable();
		TablaDeSimbolos::setVarAux(operando1, var);
	}
	return INVOKE+"MessageBox, NULL,addr "+var+", addr SPRINTS, MB_OK";
}
