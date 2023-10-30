#ifndef ANALISISSEMANTICO_ESTRUCTURATERCETOS_H_
#define ANALISISSEMANTICO_ESTRUCTURATERCETOS_H_

#include <unordered_map>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

class EstructuraTercetos {

	private:

		struct terceto{
			string operador;
			string operando1;
			string operando2;
			string tipo="";
		};

		static unordered_map<string,vector<terceto>> listaTercetos;

		static stack<int> pilaTercetos;

		static string ambito;

	public:

		static void addTerceto(string operador,string operando1,string operando2);

		static void addTerceto(string operador,string operando1,string operando2, string tipoTerceto);

		static void addLabel();

		static void addJump(string operador);

		static string nroSigTerceto();

		static void apilar();

		static int desapilar();

		static void updateTerceto(int nro, string nroLabel);

		static void mostrarTercetos();

		static void setAmbito(string ambito);

		static string getTipo(string terceto);
};

#endif /* ANALISISSEMANTICO_ESTRUCTURATERCETOS_H_ */
