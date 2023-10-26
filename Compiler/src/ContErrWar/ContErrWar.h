/*
 * ContErrWar.h
 *
 *  Created on: Oct 25, 2023
 *      Author: Martin
 */

#ifndef CONTERRWAR_CONTERRWAR_H_
#define CONTERRWAR_CONTERRWAR_H_

class ContErrWar {

	private:
		static int contErrores;
		static int contWarning;

	public:
		static void sumErr();

		static void sumWar();

		static bool generarCodigo();
};


#endif /* CONTERRWAR_CONTERRWAR_H_ */
