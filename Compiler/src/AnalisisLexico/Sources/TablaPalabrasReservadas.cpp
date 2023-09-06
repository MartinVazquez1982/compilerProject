

#include<string>
#include "../Headers/TablaPalabrasReservadas.h"
using namespace std;

const unordered_map<string, int> TablaPalabrasReservadas::PalabrasReservadas= {
            {"IF",0},{"ELSE",1},{"END_IF",2},{"PRINT",3},{"CLASS",4},
            {"VOID",5},{"SHORT",6},{"ULONG",7},{"FLOAT",8},{"WHILE",9},{"DO",10}
};

int TablaPalabrasReservadas::buscar(string palabra){
    try{
        return TablaPalabrasReservadas::PalabrasReservadas.at(palabra);
    }catch(out_of_range & PalabraNoEncontrada){
        return -1;
    }
};
