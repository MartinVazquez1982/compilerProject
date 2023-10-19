#ifndef ANALISISSEMANTICO_ESTRUCTURATERCETOS_H_
#define ANALISISSEMANTICO_ESTRUCTURATERCETOS_H_

#include <vector>
#include <string>
#include <stack>
#include <iostream>

using namespace std;

class EstructuraTercetos {

	private:


		struct terceto{
			string operador;
			string operando1;
			string operando2;
		};

		static vector<terceto> listaTercetos;

		static stack<int> pilaTercetos;

	public:

		static void addTerceto(string operador,string operando1,string operando2);

		static void addJump(string operador);

		static string nroSigTerceto();

};

#endif /* ANALISISSEMANTICO_ESTRUCTURATERCETOS_H_ */
