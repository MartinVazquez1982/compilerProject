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
		static string entrada;

	public:
		static void AS1(char caracter); // Cuenta la cantidad de lineas del archivo fuente

		static void AS2(char caracter);

		static void AS3(char caracter); // Inicializa el string - entrada

		static void AS4(char caracter); // Agrega caracter al string

		static void AS5(char caracter);

		static void AS6(char caracter); // Agregar a la tabla de simbolo

		static void AS7(char caracter); // Chequear Rango Float

		static void AS8(char caracter); // Chequear Rango Short

		static void AS9(char caracter); // Chequear Rango Ulong

		static void AS10(char caracter);

		static void AS11(char caracter);

		static void AS12(char caracter); // Cambinacion

		static void AS13(char caracter);

		static void AS14(char caracter);

		static void AS15(char caracter); // Cambinacion

		static void AS16(char caracter);

		static void AS17(char caracter);

		static void AS18(char caracter); // Chequear Tabla de palabras reservadas

		static void AS19(char caracter);
};



#endif /* ANALISISLEXICO_ACCIONESSEMANTICAS_H_ */