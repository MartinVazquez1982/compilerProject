#ifndef GENERACIONDECODIGO_HEADERS_ESTRUCTURASASSEMBLER_H_
#define GENERACIONDECODIGO_HEADERS_ESTRUCTURASASSEMBLER_H_


#define sumaShort "CMD"

#include <unordered_map>
#include <string>
#include <tuple>
#include<iostream>
#include<functional>

using namespace std;


class EstructurasAssembler {

	public:


    	using FunctionType = function<string(string operando1, string operando2, string& varAux)>;

		static string getSumaShort(string operando1, string operando2, string & varAux);
		static string getRestaShort(string operando1, string operando2, string & varAux);
		static string getMultShort(string operando1, string operando2, string & varAux);
		static string getDivShort(string operando1, string operando2, string & varAux);
		static string getEqualShort(string operando1, string operando2, string & varAux);

		static string getSumaUlong(string operando1, string operando2, string & varAux);
		static string getRestaUlong(string operando1, string operando2, string & varAux);
		static string getMultUlong(string operando1, string operando2, string & varAux);
		static string getDivUlong(string operando1, string operando2, string & varAux);
		static string getEqualUlong(string operando1, string operando2, string & varAux);

		static string getSumaFloat(string operando1, string operando2, string & varAux);
		static string getRestaFloat(string operando1, string operando2, string & varAux);
		static string getMultFloat(string operando1, string operando2, string & varAux);
		static string getDivFloat(string operando1, string operando2, string & varAux);
		static string getEqualFloat(string operando1, string operando2, string & varAux);

		static string getConver(string operando1, string operando2, string & varAux);

		static string getCompEqualShort(string operando1, string operando2, string & varAux);
		static string getComDifShort(string operando1, string operando2, string & varAux);
		static string getCompLessShort(string operando1, string operando2, string & varAux);
		static string getCompGreaterShort(string operando1, string operando2, string & varAux);
		static string getCompLessEqShort(string operando1, string operando2, string & varAux);
		static string getCompGreaterEqShort(string operando1, string operando2, string & varAux);
		static string getJump(string operando1, string operando2, string & varAux);

		static string getCompEqualUF(string operando1, string operando2, string & varAux);
		static string getComDifUF(string operando1, string operando2, string & varAux);
		static string getCompLessUF(string operando1, string operando2, string & varAux);
		static string getCompGreaterUF(string operando1, string operando2, string & varAux);
		static string getCompLessEqUF(string operando1, string operando2, string & varAux);
		static string getCompGreaterEqUF(string operando1, string operando2, string & varAux);

		static FunctionType getFuntion(string clave);


	private:

		static int nroVar;
		static int label;


		static string generarVariable();
		static string generarLabel();

		static unordered_map<string,FunctionType> codigos;


};

#endif /* GENERACIONDECODIGO_HEADERS_ESTRUCTURASASSEMBLER_H_ */
