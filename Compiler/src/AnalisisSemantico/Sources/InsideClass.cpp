#include "../Headers/InsideClass.h"

using namespace std;

stack<string> InsideClass::clase = stack<string>();

void InsideClass::inClass(string clase){
	InsideClass::clase.push(clase);
}

void InsideClass::outClass(){
	InsideClass::clase.pop();
}

string InsideClass::getClass(){
	return InsideClass::clase.top();
}

bool InsideClass::insideClass(){
	return (InsideClass::clase.size() > 0);
}
