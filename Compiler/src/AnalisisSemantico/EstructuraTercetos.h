#ifndef ANALISISSEMANTICO_ESTRUCTURATERCETOS_H_
#define ANALISISSEMANTICO_ESTRUCTURATERCETOS_H_

#include <vector>
#include <string>
#include <stack>

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

		static void add(string operador,string operando1,string operando2);

		static void addJump(string operador);

};

#endif /* ANALISISSEMANTICO_ESTRUCTURATERCETOS_H_ */
