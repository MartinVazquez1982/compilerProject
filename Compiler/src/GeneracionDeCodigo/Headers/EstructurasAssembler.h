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

		static FunctionType getFuntion(string clave);


	private:

		static int nroVar;



		static string generarVariable();

		static unordered_map<string,FunctionType> codigos;


};

#endif /* GENERACIONDECODIGO_HEADERS_ESTRUCTURASASSEMBLER_H_ */
