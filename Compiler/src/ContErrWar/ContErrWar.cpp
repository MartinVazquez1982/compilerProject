#include "ContErrWar.h"

int ContErrWar::contErrores=0;
int ContErrWar::contWarning=0;

void ContErrWar::sumErr(){
	ContErrWar::contErrores++;
}

void ContErrWar::sumWar(){
	ContErrWar::contWarning++;
}

bool ContErrWar::generarCodigo(){
	return (ContErrWar::contErrores == 0);
}

int ContErrWar::getError(){
	return ContErrWar::contErrores;
}

int ContErrWar::getWarning(){
	return ContErrWar::contWarning;
}
