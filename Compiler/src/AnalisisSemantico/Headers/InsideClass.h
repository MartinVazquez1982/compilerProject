#ifndef ANALISISSEMANTICO_SOURCES_INSIDECLASS_H_
#define ANALISISSEMANTICO_SOURCES_INSIDECLASS_H_

#include <string>
#include <stack>
#include <vector>
#include <iostream>

using namespace std;

class InsideClass {

	private:

		struct tercetosIncompletos{
			string metodo;
			string nroTerceto;
			string pilaTerceto;
		};

		static string clase;
		static stack<string> metodos;
		static bool Method;
		static bool FuncionMethod;
		static vector<tercetosIncompletos> tercetosVacios;
		static int it;
	public:

		static void inClass(string clase);

		static void outClass();

		static bool insideClass();

		static string getClass();

		static string getClassSinMain();

		static void addMethod(string metodo);

		static bool moreMethods();

		static string getMethod();

		static void outMethod();

		static void unstackMethods();

		static bool insideMethod();

		static void insideMethod(bool valor);

		static bool insideFuncionMethod();

		static void insideFuncionMethod(bool valor);

		// Manejo vactor de tercetos vacios

		static void inicTerVacios();

		static tercetosIncompletos getTerVacio();

		static void avanzarTerVacios();

		static bool finTerVacios();

		static void addTerVacios(string metodo,string nroTerceto,string pila);

		static void delTerVacios();

		static void imprimir();
};

#endif /* ANALISISSEMANTICO_SOURCES_INSIDECLASS_H_ */
