
#include <string>
#include <unordered_map>
#ifndef ANALISISLEXICO_TABLAPALABRASRESERVADAS_H_
#define ANALISISLEXICO_TABLAPALABRASRESERVADAS_H_
using namespace std;

class TablaPalabrasReservadas {
    private:
        static const unordered_map<string, int> PalabrasReservadas = {
            {"IF",0},{"ELSE",1},{"END_IF",2},{"PRINT",3},{"CLASS",4},
            {"VOID",5},{"SHORT",6},{"ULONG",7},{"FLOAT",8},{"WHILE",9},{"DO",10}
        };

    public:
        static int buscar(string palabra);
};

#endif /* ANALISISLEXICO_TABLAPALABRASRESERVADAS_H_ */
