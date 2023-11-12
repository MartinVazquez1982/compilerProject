/*
 * ContErrWar.h
 *
 *  Created on: Oct 25, 2023
 *      Author: Martin
 */

#ifndef CONTERRWAR_CONTERRWAR_H_
#define CONTERRWAR_CONTERRWAR_H_

#include <queue>
#include <string>
#include <tuple>

using namespace std;

class ContErrWar {

	private:
		static int contErrores;
		static int contWarning;
		static queue<tuple<string,string>> mensajes;

	public:
		static void sumErr();

		static void sumWar();

		static bool generarCodigo();

		static int getError();

		static int getWarning();

		static void addMensaje(string msj, string tipo);

		static void mostrarMensajes();
};


#endif /* CONTERRWAR_CONTERRWAR_H_ */
