
#include <string>

using namespace std;

// INSTRUCCIONES ENTEROS

// Definiciones de instrucciones
const string MOV = "MOV ";
const string ADD = "ADD ";
const string SUB = "SUB ";
const string IMUL = "IMUL ";
const string CBW = "CBW ";
const string IDIV = "IDIV ";
const string MUL = "MUL ";
const string DIV = "DIV ";
const string XOR = "XOR ";
const string CMP = "CMP ";
const string TEST = "TEST ";

// SALTOS

const string JMP = "JMP ";
const string JNE = "JNE ";
const string JE = "JE ";
const string JGE = "JGE ";
const string JLE = "JLE ";
const string JG = "JG ";
const string JL = "JL ";
const string JAE = "JAE ";
const string JBE = "JBE ";
const string JA = "JA ";
const string JB = "JB ";
const string JO = "JO ";
const string JNZ = "JNZ ";

// REGISTROS

const string AH = "AH ";
const string AL = "AL ";
const string AX = "AX ";
const string EAX = "EAX ";
const string EDX = "EDX ";
const string EBX = "EBX ";
const string ECX = "ECX ";
const string BL = "BL ";
const string CL = "CL ";

// INSTRUCCIONES FLOTANTE

const string FLD = "FLD ";
const string FSTP = "FSTP ";
const string FADD = "FADD ";
const string FSUB = "FSUB ";
const string FMUL = "FMUL ";
const string FDIV = "FDIV ";
const string FILD = "FILD ";
const string FCOM = "FCOM ";
const string FSTSW = "FSTSW ";
const string SAHF = "SAHF ";
const string FLDZ = "FLDZ ";
const string FNSTSW = "FNSTSW ";

// RETURN

const string RET = "RET ";

// FUNCIONES

const string CALL = "CALL ";

// PRINT

const string INVOKE = "invoke ";

// DECLARACION

const string DB = " DB ?";
const string DD = " DD ?";
const string DDFloat = " DD ";
const string DBString = " DB ";

// FIN DE EJECUCION

const string FINEJEC = "invoke ExitProcess, 0";
