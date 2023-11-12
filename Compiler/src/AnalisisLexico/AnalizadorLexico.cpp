#include <fstream>
#include <iostream>
#include "./AnalizadorLexico.h"
#include "./Headers/Automata.h"
#include "./Headers/AccionesSemanticas.h"
using namespace std;

void impresionToken(int token){

	if ( token < 273 || token == 278 ){
		cout << endl << "=> Token: " << AccionesSemanticas::tokenAlmacenado << "  | Numero: " << token << endl;
	} else {
		cout << endl << "=> Token: " << AccionesSemanticas::tokenAlmacenado << "  | Numero: " << token << " |  Lexema: " << AccionesSemanticas::entrada << endl;
	}
}

/**
 * Se busca el proximo token del archivo fuente
 *
 * @return numero de token reconocido, si es fin de archivo retorna 0
 */
int yylex(){
	char caracter;
	while (!codigoFuente.eof()){
		if (AccionesSemanticas::LeerCaracter()){
			codigoFuente.get(caracter);
		} else {
			caracter = AccionesSemanticas::caracterLeido();
		}
		if (codigoFuente.eof()){
			caracter='\0';
		}
		Dato estado = Automata::pasoAutomata(caracter);
		if (estado.AS != nullptr) estado.AS(caracter);
		string salida;
		if(AccionesSemanticas::tokenReconocido()){
			impresionToken(AccionesSemanticas::nroToken);
			int salida = AccionesSemanticas::nroToken;
			if(salida == 277 || salida == 276 || salida == 275 || salida == 274 || salida == 273) yylval=AccionesSemanticas::entrada;
			return salida;
		}
	}
	return 0;

}
