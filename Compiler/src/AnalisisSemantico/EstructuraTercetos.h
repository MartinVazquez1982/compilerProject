#ifndef ANALISISSEMANTICO_ESTRUCTURATERCETOS_H_
#define ANALISISSEMANTICO_ESTRUCTURATERCETOS_H_

#include <unordered_map>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

class EstructuraTercetos {

	public:

		struct terceto{
			string operador;
			string operando1;
			string operando2;
			string tipo="";
			string varAux="";
		};

	private:

		static unordered_map<string,vector<terceto>> listaTercetos;

		static stack<int> pilaTercetos;

		static string ambito;

	public:

		static void addTerceto(string operador,string operando1,string operando2);

		static void addTerceto(string operador,string operando1,string operando2, string tipoTerceto);

		static void addLabel();

		static void addJump(string operador);

		static string nroSigTerceto();

		static string nroActualTerceto();

		static void apilar();

		static int desapilar();

		static void updateTerceto(int nro, string nroLabel);

		static void mostrarTercetos();

		static void setAmbito(string ambito);

		static string getTipo(string terceto);

		static string getTipo(string ambito, int terceto);

		static unordered_map<string, vector<terceto>>& getLista();

		static string getVarAux(string ambito, string terceto);

		static void cargarPF(string pila, int nroTer, string pf, string tipo);

		static string getPrimerOperando(string pila, int nroTer);

		static string getSegundoOperando(string pila, int nroTer);

		static void setOperador(string pila, int nroTer, string nuevoOperador);

		static void setOperando2(string pila, int nroTer, string nuevoOperador);

};

#endif /* ANALISISSEMANTICO_ESTRUCTURATERCETOS_H_ */
