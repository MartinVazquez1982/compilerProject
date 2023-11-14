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
		{"BI", EstructurasAssembler::getJump},
		{"compSHORT",EstructurasAssembler::getCompInt},
		{"compULONG",EstructurasAssembler::getCompInt},
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

string EstructurasAssembler::getSumaShort(string operando1, string operando2, string & varAux, bool & error){
	string salida = MOV+AH+", "+operando1;
	salida = salida + "\n" + ADD+AH+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+AH;
	return salida;
}

string EstructurasAssembler::getRestaShort(string operando1, string operando2, string & varAux, bool & error){
	string salida = MOV+AL+", "+operando1;
	salida = salida + "\n" + SUB+AL+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+AL;
	return salida;
}

string EstructurasAssembler::getMultShort(string operando1, string operando2, string & varAux, bool & error){
	string salida = MOV+AL+", "+operando1;
	salida = salida + "\n" + IMUL+AL+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+AL;
	salida = salida + "\n" + JO + "ERROR";
	error=true;
	return salida;
}

string EstructurasAssembler::getDivShort(string operando1, string operando2, string & varAux, bool & error){
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
	error=true;
	return salida;
}

string EstructurasAssembler::getEqualShort(string operando1, string operando2, string & varAux, bool & error){
	string salida = MOV+AH+", "+operando2;
	salida = salida + "\n" + MOV+operando1+", "+AH;
	return salida;
}

string EstructurasAssembler::getSumaUlong(string operando1, string operando2, string & varAux, bool & error){
	string salida = MOV+EAX+", "+operando1;
	salida = salida + "\n" + ADD+EAX+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+EAX;
	return salida;
}

string EstructurasAssembler::getRestaUlong(string operando1, string operando2, string & varAux, bool & error){
	string salida = MOV+EAX+", "+operando1;
	salida = salida + "\n" + SUB+EAX+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+EAX;
	return salida;
}

string EstructurasAssembler::getMultUlong(string operando1, string operando2, string & varAux, bool & error){
	string salida = MOV+EAX+", "+operando1;
	salida = salida + "\n" + MUL+EAX+", "+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+EAX;
	salida = salida + "\n" + JO + "ERROR";
	error=true;
	return salida;
}

string EstructurasAssembler::getDivUlong(string operando1, string operando2, string & varAux, bool & error){
	string salida = MOV+EAX+", "+operando1;
	salida = salida + "\n" + XOR+EDX+", "+EDX;
	salida = salida + "\n" + CMP + operando2 + ", " + "0";
	salida = salida + "\n" + JE + "ERROR";
	salida = salida + "\n" + DIV+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + MOV+varAux+", "+EAX;
	error=true;
	return salida;
}

string EstructurasAssembler::getEqualUlong(string operando1, string operando2, string & varAux, bool & error){
	string salida = MOV+EAX+", "+operando2;
	salida = salida + "\n" + MOV+operando1+", "+EAX;
	return salida;
}

string EstructurasAssembler::getSumaFloat(string operando1, string operando2, string & varAux, bool & error){
	string salida = FLD+operando1;
	salida = salida + "\n" + FADD+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + FSTP+varAux;
	salida = salida + "\n" + FSTSW+AX;
	salida = salida + "\n" + SAHF;
	salida = salida + "\n" + JO + "ERROR";
	error=true;
	return salida;
}

string EstructurasAssembler::getRestaFloat(string operando1, string operando2, string & varAux, bool & error){
	string salida = FLD+operando1;
	salida = salida + "\n" + FSUB+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + FSTP+varAux;
	return salida;
}

string EstructurasAssembler::getMultFloat(string operando1, string operando2, string & varAux, bool & error){
	string salida = FLD+operando1;
	salida = salida + "\n" + FMUL+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + FSTP+varAux;
	return salida;
}

string EstructurasAssembler::getDivFloat(string operando1, string operando2, string & varAux, bool & error){
	string salida = FLD+operando1;
	salida = getCompFloat(operando2,"0.0",varAux,error);
	salida = salida + "\n" + JE + "ERROR";
	salida = salida + "\n" + FDIV+operando2;
	varAux = generarVariable();
	salida = salida + "\n" + FSTP+varAux;
	error=true;
	return salida;
}

string EstructurasAssembler::getEqualFloat(string operando1, string operando2, string & varAux, bool & error){
	string salida = FLD+operando2;
	salida = salida + "\n" + FSTP+operando1;
	return salida;
}

string EstructurasAssembler::getConver(string operando1, string operando2, string & varAux, bool & error){
	string salida = FILD+operando1;
	varAux = generarVariable();
	salida = salida + "\n" + FSTP+varAux;
	return salida;
}

string EstructurasAssembler::getCompEqualShort(string operando1, string operando2, string & varAux, bool & error){
	return JNE+operando1;
}

string EstructurasAssembler::getComDifShort(string operando1, string operando2, string & varAux, bool & error){
	return JE+operando1;
}

string EstructurasAssembler::getCompLessShort(string operando1, string operando2, string & varAux, bool & error){
	return JGE+operando1;
}

string EstructurasAssembler::getCompGreaterShort(string operando1, string operando2, string & varAux, bool & error){
	return JLE+operando1;
}

string EstructurasAssembler::getCompLessEqShort(string operando1, string operando2, string & varAux, bool & error){
	return JG+operando1;
}

string EstructurasAssembler::getCompGreaterEqShort(string operando1, string operando2, string & varAux, bool & error){
	return JL+operando1;
}

string EstructurasAssembler::getCompEqualUF(string operando1, string operando2, string & varAux, bool & error){
	return JNE+operando1;
}

string EstructurasAssembler::getComDifUF(string operando1, string operando2, string & varAux,bool & error){
	return JE+operando1;
}

string EstructurasAssembler::getCompLessUF(string operando1, string operando2, string & varAux,bool & error){
	return JAE+operando1;
}

string EstructurasAssembler::getCompGreaterUF(string operando1, string operando2, string & varAux,bool & error){
	return JBE+operando1;
}

string EstructurasAssembler::getCompLessEqUF(string operando1, string operando2, string & varAux,bool & error){
	return JA+operando1;
}

string EstructurasAssembler::getCompGreaterEqUF(string operando1, string operando2, string & varAux,bool & error){
	return JB+operando1;
}

string EstructurasAssembler::getJump(string operando1, string operando2, string & varAux,bool & error){
	return JMP+operando1;
}

string EstructurasAssembler::getCompInt(string operando1, string operando2, string & varAux,bool & error){
	return CMP+operando1+" "+operando2;
}

string EstructurasAssembler::getCompFloat(string operando1, string operando2, string & varAux,bool & error){
	string salida = FLD+operando1;
	salida = salida+"\n"+FCOM+operando2;
	salida = salida+"\n"+FSTSW+AX;
	salida = salida+"\n" + SAHF;
	return salida;
}

string EstructurasAssembler::getCall(string operando1, string operando2, string & varAux,bool & error){
	return CALL+operando1;
}

string EstructurasAssembler::getReturn(string operando1, string operando2, string & varAux,bool & error){
	return RET;
}

string EstructurasAssembler::getPrint(string operando1, string operando2, string & varAux,bool & error){
	string varMensaje = operando1; //Esta variable se debe agregar a la tabla de simbolos y su valor es la cadena
    string varTitulo = "PRINT"; //Esta variable se debe agregar a la tabla de simbolos, es el titulo del cuadro de texto
	return INVOKE+"MessageBox, NULL, addr varTitulo, addr varMensaje, MB_OK";
	/*invoke MessageBox: Llama a la función MessageBox de la WinAPI. Esta función muestra un cuadro de mensaje en la pantalla.
	NULL: Es el identificador de la ventana principal para el cuadro de mensaje. En este caso, se usa NULL para indicar que no hay una ventana principal específica.
	addr varTitulo: Es la dirección de la cadena de caracteres que se mostrará en el titulo del cuadro de mensaje.
	addr varMensaje: Es la dirección de la cadena de caracteres que se mostrará en el cuadro de mensaje. En este caso, parece ser una cadena llamada "HelloWorld".
	MB_OK: Es una constante que indica que el cuadro de mensaje debe contener solo un botón "Aceptar" (OK).*/
}
