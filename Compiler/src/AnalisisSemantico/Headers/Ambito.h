#ifndef ANALISISSEMANTICO_HEADERS_AMBITO_H_
#define ANALISISSEMANTICO_HEADERS_AMBITO_H_

#include <string>

using namespace std;

class Ambito {

	private:

		static string ambito;

		static string ambito_inverso;

	public:

		static void add(string);

		static void del();

		static string get();

		static string getTercetos();

		static bool insideMethod();
};


#endif /* ANALISISSEMANTICO_HEADERS_AMBITO_H_ */
