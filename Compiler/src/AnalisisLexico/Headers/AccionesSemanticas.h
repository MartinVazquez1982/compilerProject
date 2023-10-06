#include <string>
#ifndef ANALISISLEXICO_ACCIONESSEMANTICAS_H_
#define ANALISISLEXICO_ACCIONESSEMANTICAS_H_
using namespace std;

class AccionesSemanticas{
	private:
		// Lleva el conteo de las lineas
		static int nroLineas;

		// Habilita la lectura del proximo caracter
		static bool habilitarLectura;

		// Verifica que ya se envio un warning sobre ese ID
		static bool enviarWarning;

		// Indica que se indentifico un token
		static bool tokenIdentificado;

		// Alamcena el caracter anterior en caso que se tenga que volver a leer
		static char caracterAnterior;

	public:

		// Indica el nro de token reconocido
		static int nroToken;

		// Alamcena la entrada para luego almacenar en la tabla de simbolos
		static string entrada;

		// Alamcena la linea en donde inicio el token
		static int lineaInicioToken;


		static char caracterLeido();

		static bool LeerCaracter();

		static bool tokenReconocido();

		static void AS1(char caracter);

		static void AS2(char caracter);

		static void AS3(char caracter);

		static void AS4(char caracter);

		static void AS5(char caracter);

		static void AS6(char caracter);

		static void AS7(char caracter);

		static void AS8(char caracter);

		static void AS9(char caracter);

		static void AS10(char caracter);

		static void AS11(char caracter);

		static void AS12(char caracter);

		static void AS13(char caracter);

		static void AS14(char caracter);

		static void AS15(char caracter);

		static void AS17(char caracter);

		static void AS18(char caracter);

		static void AS19(char caracter);

		static void AS20(char caracter);

		static void AS21(char caracter);

		static void AS22(char caracter);

		static void AS23(char caracter);

		static void AS24(char caracter);

		static void AS25(char caracter);

		static void AS26(char caracter);

		static void AS27(char caracter);

		static void AS28(char caracter);

		static void AS29(char caracter);

		static void AS30(char caracter);
};



#endif /* ANALISISLEXICO_ACCIONESSEMANTICAS_H_ */
