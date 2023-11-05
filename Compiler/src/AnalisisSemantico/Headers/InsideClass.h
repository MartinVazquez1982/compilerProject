#ifndef ANALISISSEMANTICO_SOURCES_INSIDECLASS_H_
#define ANALISISSEMANTICO_SOURCES_INSIDECLASS_H_

#include <string>
#include <stack>

using namespace std;

class InsideClass {

	private:
		static string clase;
		static stack<string> metodos;
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

};

#endif /* ANALISISSEMANTICO_SOURCES_INSIDECLASS_H_ */
