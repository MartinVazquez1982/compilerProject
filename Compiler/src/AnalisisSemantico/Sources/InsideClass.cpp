#include "../Headers/InsideClass.h"

using namespace std;

string InsideClass::clase = " ";

void InsideClass::inClass(string clase){
	InsideClass::clase = clase;
}

void InsideClass::outClass(){
	InsideClass::clase = " ";
}

string InsideClass::getClass(){
	return InsideClass::clase;
}

bool InsideClass::insideClass(){
	return clase != " ";
}
