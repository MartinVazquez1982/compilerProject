/*
 * AccionesSemanticas.cpp
 *
 *  Created on: Aug 29, 2023
 *      Author: Martin
 */

#include "../Headers/AccionesSemanticas.h"
#include<iostream>
using namespace std;

int AccionesSemanticas::nroLineas = 0;

void AccionesSemanticas::AS1(char caracter){
	if (caracter == '\n') AccionesSemanticas::nroLineas++;
	cout << AccionesSemanticas::nroLineas << endl;
}
