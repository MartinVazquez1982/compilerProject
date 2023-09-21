

#include<string>
#include "../Headers/TablaPalabrasReservadas.h"
using namespace std;

const unordered_map<string, int> TablaPalabrasReservadas::PalabrasReservadas= {
            {"IF",257},{"ELSE",258},{"END_IF",259},{"PRINT",260},{"CLASS",261},
            {"VOID",262},{"SHORT",263},{"ULONG",264},{"FLOAT",265},{"WHILE",266},{"DO",267},{"RETURN",278}
};

int TablaPalabrasReservadas::buscar(string palabra){
    try{
        return TablaPalabrasReservadas::PalabrasReservadas.at(palabra);
    }catch(out_of_range & PalabraNoEncontrada){
        return -1;
    }
};
