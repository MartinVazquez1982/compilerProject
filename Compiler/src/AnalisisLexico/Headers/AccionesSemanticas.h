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
		static string entrada;
		static bool rango;
	public:
		/**
		 *  Cuenta cantidad de lineas del archivo fuente
		 *
		 */
		static void AS1(char caracter);
		static void AS3(char caracter);
		static void AS4(char caracter);
		static void AS6(char caracter);
		static void AS9(char caracter);
		static void AS12(char caracter);
		static void AS15(char caracter);
		static void AS18(char caracter);
};



#endif /* ANALISISLEXICO_ACCIONESSEMANTICAS_H_ */
