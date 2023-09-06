
#include <string>
#include <unordered_map>
#ifndef ANALISISLEXICO_TABLAPALABRASRESERVADAS_H_
#define ANALISISLEXICO_TABLAPALABRASRESERVADAS_H_
using namespace std;

class TablaPalabrasReservadas {
    private:
        static const unordered_map<string, int> PalabrasReservadas;

    public:
        static int buscar(string palabra);
};

#endif /* ANALISISLEXICO_TABLAPALABRASRESERVADAS_H_ */
