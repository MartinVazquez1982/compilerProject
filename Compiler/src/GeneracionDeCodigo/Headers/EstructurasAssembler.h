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


    	using FunctionType = function<string(string operando1, string operando2, string& varAux,bool error[])>;

		static string getSumaShort(string operando1, string operando2, string & varAux,bool error[]);
		static string getRestaShort(string operando1, string operando2, string & varAux,bool error[]);
		static string getMultShort(string operando1, string operando2, string & varAux,bool error[]);
		static string getDivShort(string operando1, string operando2, string & varAux,bool error[]);
		static string getEqualShort(string operando1, string operando2, string & varAux,bool error[]);

		static string getSumaUlong(string operando1, string operando2, string & varAux,bool error[]);
		static string getRestaUlong(string operando1, string operando2, string & varAux,bool error[]);
		static string getMultUlong(string operando1, string operando2, string & varAux,bool error[]);
		static string getDivUlong(string operando1, string operando2, string & varAux,bool error[]);
		static string getEqualUlong(string operando1, string operando2, string & varAux,bool error[]);

		static string getSumaFloat(string operando1, string operando2, string & varAux,bool error[]);
		static string getRestaFloat(string operando1, string operando2, string & varAux,bool error[]);
		static string getMultFloat(string operando1, string operando2, string & varAux,bool error[]);
		static string getDivFloat(string operando1, string operando2, string & varAux,bool error[]);
		static string getEqualFloat(string operando1, string operando2, string & varAux,bool error[]);

		static string getConver(string operando1, string operando2, string & varAux,bool error[]);

		static string getCompEqualShort(string operando1, string operando2, string & varAux,bool error[]);
		static string getComDifShort(string operando1, string operando2, string & varAux,bool error[]);
		static string getCompLessShort(string operando1, string operando2, string & varAux,bool error[]);
		static string getCompGreaterShort(string operando1, string operando2, string & varAux,bool error[]);
		static string getCompLessEqShort(string operando1, string operando2, string & varAux,bool error[]);
		static string getCompGreaterEqShort(string operando1, string operando2, string & varAux,bool error[]);
		static string getJump(string operando1, string operando2, string & varAux,bool error[]);

		static string getCompEqualUF(string operando1, string operando2, string & varAux,bool error[]);
		static string getComDifUF(string operando1, string operando2, string & varAux,bool error[]);
		static string getCompLessUF(string operando1, string operando2, string & varAux,bool error[]);
		static string getCompGreaterUF(string operando1, string operando2, string & varAux,bool error[]);
		static string getCompLessEqUF(string operando1, string operando2, string & varAux,bool error[]);
		static string getCompGreaterEqUF(string operando1, string operando2, string & varAux,bool error[]);

		static string getCompInt(string operando1, string operando2, string & varAux,bool error[]);
		static string getCompFloat(string operando1, string operando2, string & varAux,bool error[]);

		static string getCall(string operando1, string operando2, string & varAux,bool error[]);
		static string getReturn(string operando1, string operando2, string & varAux,bool error[]);
		static string getPrint(string operando1, string operando2, string & varAu,bool error[]);

		static FunctionType getFuntion(string clave);


	private:

		static int nroVar;
		static int label;


		static string generarVariable();
		static string generarLabel();

		static unordered_map<string,FunctionType> codigos;


};

#endif /* GENERACIONDECODIGO_HEADERS_ESTRUCTURASASSEMBLER_H_ */
