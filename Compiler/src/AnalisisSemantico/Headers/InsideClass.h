#ifndef ANALISISSEMANTICO_SOURCES_INSIDECLASS_H_
#define ANALISISSEMANTICO_SOURCES_INSIDECLASS_H_

#include <string>
#include <stack>

using namespace std;

class InsideClass {

	private:
		static stack<string> clase;

	public:

		static void inClass(string clase);

		static void outClass();

		static bool insideClass();

		static string getClass();

};

#endif /* ANALISISSEMANTICO_SOURCES_INSIDECLASS_H_ */
