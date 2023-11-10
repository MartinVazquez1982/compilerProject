#ifndef ANALISISSEMANTICO_HEADERS_CONVERSION_H_
#define ANALISISSEMANTICO_HEADERS_CONVERSION_H_

#include <string>
#include <unordered_map>
#include <tuple>

using namespace std;

class Conversion {

	private:

		// El orden de los tipos para las comparaciones es | SHORT | ULONG | FLOAT |
		static const unordered_map<string, tuple<string, string, string>> asignaciones;
		static const unordered_map<string, tuple<string, string, string>> operaciones;

	public:

		static string operacion(string izq, string der);
		static string asignacion(string izq, string der);

};

#endif /* ANALISISSEMANTICO_HEADERS_CONVERSION_H_ */
