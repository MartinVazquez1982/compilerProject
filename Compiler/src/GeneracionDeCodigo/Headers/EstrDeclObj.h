#ifndef GENERACIONDECODIGO_HEADERS_ESTRDECLOBJ_H_
#define GENERACIONDECODIGO_HEADERS_ESTRDECLOBJ_H_

#include <vector>
#include <tuple>
#include <unordered_map>

using namespace std;

class EstrDeclObj {

	private:

		static vector<tuple<string, vector<string>>> objetos;

		static unordered_map<string, vector<string>> atributos;

		static int i;

	public:

		static void addObj(string obj, string clase1, string clase2, string clase3);

		static void addClase(string clase);

		static void addAtr(string clase, string atr);

		static void imprimir();

		static void inic();

		static void avanzar();

		static vector<string>& getClases();

		static string getObjeto();

		static bool fin();

		static vector<string>& getAtributos(string clase);
};


#endif /* GENERACIONDECODIGO_HEADERS_ESTRDECLOBJ_H_ */
