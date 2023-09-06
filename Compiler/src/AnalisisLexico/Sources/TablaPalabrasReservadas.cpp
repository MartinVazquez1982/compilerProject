

#include<string>
#include "../Headers/TablaPalabrasReservadas.h"
using namespace std;


static int TablaPalabrasReservadas::buscar(string palabra){
    try{
        return TablaPalabrasReservadas::PalabrasReservadas.at(palabra);
    }catch(out_of_range & PalabraNoEncontrada){
        return -1;
    }
};
