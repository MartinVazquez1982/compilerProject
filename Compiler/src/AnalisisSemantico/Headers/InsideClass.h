#ifndef ANALISISSEMANTICO_SOURCES_INSIDECLASS_H_
#define ANALISISSEMANTICO_SOURCES_INSIDECLASS_H_

#include <string>

using namespace std;

class InsideClass {

	private:
		static string clase;

	public:

		static void inClass(string clase);

		static void outClass();

		static bool insideClass();

		static string getClass();

		static string getClassSinMain();

};

#endif /* ANALISISSEMANTICO_SOURCES_INSIDECLASS_H_ */
