/*
 * AccionesSemanticas.h
 *
 *  Created on: Aug 29, 2023
 *      Author: Martin
 */

#include <string>
#ifndef ANALISISLEXICO_ACCIONESSEMANTICAS_H_
#define ANALISISLEXICO_ACCIONESSEMANTICAS_H_
using namespace std;

class AccionesSemanticas{
	private:
		static int nroLineas;
		static string cadena;
	public:
		/**
		 *  Cuenta cantidad de lineas del archivo fuente
		 *
		 */
		static void AS1(char caracter);
};



#endif /* ANALISISLEXICO_ACCIONESSEMANTICAS_H_ */
