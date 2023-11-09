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

		static string getSumaShort(string operando1, string operando2, string & varAux);

	private:

		static unordered_map<tuple<string, string>,function<string(string, string, string&)>> codigos;


};

#endif /* GENERACIONDECODIGO_HEADERS_ESTRUCTURASASSEMBLER_H_ */
