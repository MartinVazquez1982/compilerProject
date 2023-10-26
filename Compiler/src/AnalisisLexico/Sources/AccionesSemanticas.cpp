#include "../Headers/AccionesSemanticas.h"
#include "../Headers/Automata.h"
#include "../Headers/TablaPalabrasReservadas.h"
#include "../../TablaDeSimbolos/TablaDeSimbolos.h"
#include "../../ContErrWar/ContErrWar.h"
#include <iostream>
#include <cfloat>
using namespace std;

#define RESET   "\x1B[0m"
#define YELLOW  "\x1B[33m"
#define RED "\x1B[31m"

int AccionesSemanticas::nroLineas = 1;
string AccionesSemanticas::entrada = "";
bool AccionesSemanticas::habilitarLectura = true;
bool AccionesSemanticas::enviarWarning = true;
bool AccionesSemanticas::tokenIdentificado = false;
int AccionesSemanticas::nroToken;
char AccionesSemanticas::caracterAnterior;
int AccionesSemanticas::lineaInicioToken;

/**
 * @return caracter almacenado en caracterAnterior
 */
char AccionesSemanticas::caracterLeido(){
	return caracterAnterior;
}

/**
 * Retorna si es que se reconocio un token o no, en caso que si.
 * Se prepara para una proxima lectura
 *
 * @return True si se reconocio un token y False si no lo hubo
 */
bool AccionesSemanticas::tokenReconocido(){
	if (tokenIdentificado){
		tokenIdentificado = false;
		return true;
	}
	return false;
}

/**
 * Funcionamiento similar al tokenReconocido(), retorna si es que
 * hay que leer un caracter del archivo o volver a usar el anterior
 *
 * @return True si hay que leer el proximo caracter, False si no
 */
bool AccionesSemanticas::LeerCaracter(){
	if(!habilitarLectura){
		habilitarLectura = true;
		return false;
	}
	return true;
}

/**
 * Todas las acciones semanticas:
 *
 * @param caracter que fue recientemente leido en el archivo o el de la iteracion anterior
 */

/**
 * LLeva la cuenta de la cantidad de lineas del archivo fuente
 */
void AccionesSemanticas::AS1(char caracter){
	if (caracter == '\n') nroLineas++;
}


/**
 * En caso de un error revisa de cual se trata
 */
void AccionesSemanticas::AS2(char caracter){
	AS13(caracter);
	cout << endl;
	switch(Automata::getEstadoError()){
		case 0:
			cout << RED << "Linea " + to_string(nroLineas) + ": caracter '" + caracter + "' invalido" << RESET << endl;
			habilitarLectura = true;
			break;
		case 1:
			cout << RED << "Linea " + to_string(nroLineas) + ": falta sufijo en la definicion de la constante entera" << RESET << endl;
			break;
		case 2:
		case 3:
			cout << RED << "Linea " + to_string(nroLineas) + ": se encuetra mal definido o falta el subfijo a la contante entera" << RESET << endl;
			break;
		case 8:
		case 9:
			cout << RED << "Linea " + to_string(lineaInicioToken) + ": comentario sin finalizacion" << RESET << endl;
			break;
		case 11:
			cout << RED << "Linea " + to_string(nroLineas) + ": identificador distinto (!!) mal definido" << RESET << endl;
			break;
		case 15:
		case 16:
			cout << RED << "Linea " + to_string(nroLineas) + ": constante flotante mal definida" << RESET << endl;
			break;
		case 18:
			cout << RED << "Linea " + to_string(lineaInicioToken) + ": cadena de texto mal definida" << RESET << endl;
			break;
		default:
			cout << RED << "Linea " + to_string(lineaInicioToken) + ": error lexico" << RESET << endl;
			break;
	}
	ContErrWar::sumErr();
}

/**
 * Inicializa string para almacenar la entrada
 */
void AccionesSemanticas::AS3(char caracter){
	entrada.clear();
}

/**
 * agrega caracter al string, mientras no sea un salto de linea.
 * Si lo es, invoca AS1 para que realice en conteo
 */
void AccionesSemanticas::AS4(char caracter){
	if (caracter != '\n'){
		entrada+=caracter;
	} else {
		AS1(caracter);
	}
}

/**
 * Coloca en falso el habilitar lectura para asi poder leer el
 * mismo caracter en la proxima vuelta
 */
void AccionesSemanticas::AS5(char caracter){
	habilitarLectura = false;
	caracterAnterior = caracter;
}

/**
 * Agrega un identificador a la tabla de simbolos
 */
void AccionesSemanticas::AS6(char caracter){
	TablaDeSimbolos::add(entrada);
	cout << TablaDeSimbolos::imprimir() << endl;
}

/**
 * Chequea rango de las constantes de tipo FLOAT y si es correcto
 * llama a la AS25
 */
void AccionesSemanticas::AS7(char caracter){
	// 1.17549435E-38 < x < 3.40282347E+38 U -3.40282347E+38 < x < -1.17549435E-38 U 0.0
	try{
		float numero = stof(entrada);
		AS25(caracter);
	} catch(const out_of_range & exception){
		cout << RED << "Linea: " + to_string(nroLineas) + ": Constante FLOAT fuera del rango permitido" << RESET << endl;
		ContErrWar::sumErr();
	}
}

/**
 * Chequea rando de las constantes de tipo ULONG, si no hay overflow
 * llama a la AS23 y AS24
 */
void AccionesSemanticas::AS8(char caracter){
	//0 < x < 2^32-1
	try{
		size_t pos = entrada.find('_');
		string numeroStr = entrada.substr(0, pos);
		unsigned long numero = stoul(numeroStr);
		AS23(caracter);
		AS24(caracter);
	}catch(const out_of_range & exception){
		cout << RED << "Linea: " + to_string(nroLineas) + ": Constante ULONG fuera del rango permitido" << RESET << endl;
		ContErrWar::sumErr();
	}
}

/**
 * Chequea rando de las constantes de tipo SHORT, si hay un overflow
 * llama a la AS10 y sino a la AS15
 */
void AccionesSemanticas::AS9(char caracter){
	//-2^7 < x < 2^7-1
	try{
		size_t pos = entrada.find('_');
		string numeroStr = entrada.substr(0, pos);
		int numero = stoi(numeroStr);
		if (numero > 128){
			throw out_of_range("");
		}
		AS14(caracter);
	}catch(const out_of_range & exception){
		AS10(caracter);
		cout << RED << "Linea: " + to_string(nroLineas) + ": Constante SHORT fuera del rango permitido" << RESET << endl;
		ContErrWar::sumErr();
	}
}

/**
 * Cuando se reconoce un token, que se llego al final del automata. Se
 * Invoca al metodo que vuelve al estado actual a 0
 */
void AccionesSemanticas::AS10(char caracter){
	Automata::reiniciarRecorrido();
}

/**
 * Realiza el llamado de las acciones semanticas AS3 (incializa string)
 * y AS4 (Carga caracter en el string), coloca el nro de linea que inicio
 * el nuevo token
 */
void AccionesSemanticas::AS11(char caracter){
	AS3(caracter);
	AS4(caracter);
	lineaInicioToken = nroLineas;
}

/**
 * Vuelve al automata al estado 0, bloquea la lectura de otro caracter del
 * archivo y chequea rango de constantes FLOAT
 */
void AccionesSemanticas::AS12(char caracter){
	AS10(caracter);
	AS5(caracter);
	AS7(caracter);
}

/**
 * Bloquea la lectura de otro caracter del
 * archivo y vuelva al automata al estado 0
 */
void AccionesSemanticas::AS13(char caracter){
	AS5(caracter);
	AS10(caracter);
}

/**
 * Agrega el caracter al string, agrega a la tabla de simbolos,
 * devuelve el token de la cadena y manda al automata al estado 0
 */
void AccionesSemanticas::AS14(char caracter){
	AS4(caracter);
	AS10(caracter);
	AS23(caracter);
	AS24(caracter);
}

/**
 * Agrega caracter al string, chequea el rango y
 * devuelve al automata al estado 0
 */
void AccionesSemanticas::AS15(char caracter){
	AS4(caracter);
	AS8(caracter);
	AS10(caracter);
}

/**
 * Bloquea la lectura de otro caracter del archivo,
 * agrega un identificador a la tabla de simbolos y
 * vuelva al automata al estado 0
 */
void AccionesSemanticas::AS17(char caracter){
	AS5(caracter);
	AS6(caracter);
	AS10(caracter);
}

/**
 * Retorna el nro de token identificado (es el ASCII del caracter)
 * y manda al automata al estado 0
 */
void AccionesSemanticas::AS18(char caracter){
	nroToken = int(caracter);
	tokenIdentificado = true;
	AS10(caracter);
}

/**
 * Chequea si la palabra reservada reconocida existe y
 * luego invoca a la AS13
 */
void AccionesSemanticas::AS19(char caracter){
	nroToken = TablaPalabrasReservadas::buscar(entrada);
	if(nroToken == -1){
        cout << RED << "Linea: " + to_string(nroLineas) + ": NO existe la palabra reservada " + entrada << RESET << endl;
        ContErrWar::sumErr();
	} else {
		tokenIdentificado = true;
	}
    AS13(caracter);
}

/**
 * Devuelve el token correspondiente al '==' o al '=', si es
 * el '==' llama a la AS10 y sino a la AS13
 */
void AccionesSemanticas::AS20(char caracter){
	tokenIdentificado = true;
	if (caracter=='='){
		nroToken = 269;
		AS10(caracter);
	} else {
		nroToken = int('=');
		AS13(caracter);
	}
}

/**
 * Devuelve el token correspondiente al '--' o al '-', si es
 * el '--' llama a la AS10 y sino a la AS13
 */
void AccionesSemanticas::AS21(char caracter){
	tokenIdentificado = true;
	if (caracter=='-'){
		nroToken = 268;
		AS10(caracter);
	} else {
		nroToken = int('-');
		AS13(caracter);
	}
}

/*
 * Revisa que los identificadores tengan menos de
 * 20 caracteres, si no lo es da un warning
 */
void AccionesSemanticas::AS22(char caracter){
	if (entrada.length() < 20){
		AS4(caracter);
		enviarWarning = true;
	} else if (enviarWarning){
		enviarWarning = false;
		cout << YELLOW <<"Warning - Linea " + to_string(nroLineas) + ": El Identificador contiene mas de 20 caracteres" << RESET << endl;
		ContErrWar::sumWar();
	}
}

/**
 * Agrega a la tabla de simbolos una constante cadena,
 * una constante SHORT o una constante ULONG
 */
void AccionesSemanticas::AS23(char caracter){
	if (caracter == '%'){
		TablaDeSimbolos::add(entrada, entrada.substr(1,entrada.length()-2),"STRING");
		cout << TablaDeSimbolos::imprimir() << endl;
	} else {
		size_t pos = entrada.find('_');
		string valor = entrada.substr(0, pos);
		if (caracter == 's'){
			TablaDeSimbolos::add(entrada, valor ,"SHORT");
		} else {
			TablaDeSimbolos::add(entrada, valor ,"ULONG");
			cout << TablaDeSimbolos::imprimir() << endl;
		}
	}
}

/**
 * Retorna el nro de token de una constante cadena,
 * una constante SHORT o una constante ULONG
 */
void AccionesSemanticas::AS24(char caracter){
	tokenIdentificado = true;
	if(caracter == '%'){
		nroToken = 276;
	} else if (caracter == 's'){
		nroToken = 273;
	} else {
		nroToken = 274;
	}
}

/**
 * Agrega a la tabla de simbolos y retorn nro de token
 * de una constante FLOAT
 */
void AccionesSemanticas::AS25(char caracter){
	TablaDeSimbolos::add(entrada, entrada,"FLOAT");
	tokenIdentificado = true;
	nroToken = 275;
	cout << TablaDeSimbolos::imprimir() << endl;
}

/**
 * Devuelve el token correspondiente al '=>', '=<', '<' o '>'
 */
void AccionesSemanticas::AS26(char caracter){
	tokenIdentificado = true;
	if (caracter == '='){
		if (entrada == ">"){
			nroToken = 271;
		} else {
			nroToken = 272;
		}
		AS10(caracter);
	} else {
		nroToken = int(entrada[0]);
		AS13(caracter);
	}
}

/**
 * Retorna el numero de token del !!
 */
void AccionesSemanticas::AS27(char caracter){
	nroToken = 270;
	tokenIdentificado = true;
	AS10(caracter);
}

/**
 * Retorna el nro de token del identificador e
 * invoca a la AS17
 */
void AccionesSemanticas::AS28(char caracter){
	AS17(caracter);
	nroToken = 277;
	tokenIdentificado = true;
}

/**
 * Revisa si se trata de un punto o de una constante float y retorna
 * lo correcto
 */
void AccionesSemanticas::AS29(char caracter){
	if (isdigit(entrada[0])){
		AS12(caracter);
	} else {
		AS5(caracter);
		AS18('.');
	}
}

/**
 * Bloquea lectura y llama a la accion semantica
 * AS18
 */
void AccionesSemanticas::AS30(char caracter){
	AS5(caracter);
	AS18('*');
}
