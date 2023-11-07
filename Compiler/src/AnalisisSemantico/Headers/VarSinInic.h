#ifndef ANALISISSEMANTICO_HEADERS_VARSININIC_H_
#define ANALISISSEMANTICO_HEADERS_VARSININIC_H_

#include <stack>
#include <unordered_set>
#include <string>
#include <list>

using namespace std;

class VarSinInic {

	private:
		static stack<unordered_set<string>> varSinUsar;

	public:

		static void addTop();

		static void delTop();

		static void addVar(string lexema);

		static void delVar(string lexema);

		static list<string> listVarTop();
};


#endif /* ANALISISSEMANTICO_HEADERS_VARSININIC_H_ */
