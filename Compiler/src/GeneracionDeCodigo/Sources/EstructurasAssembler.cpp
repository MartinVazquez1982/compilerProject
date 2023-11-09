#include "../Headers/EstructurasAssembler.h"
#include <tuple>
#include <unordered_map>
#include <string>
#include<functional>

using namespace std;


// Inicializa el miembro estático "codigos" en el archivo .cpp
unordered_map<tuple<string, string>, function<string(string, string, string&)>> EstructurasAssembler::codigos = {
    {make_tuple("+", "SHORT"), "Valor1"},
    {make_tuple("-", "SHORT"), "Valor2"},
};

