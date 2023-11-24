%{

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include "../AnalisisLexico/AnalizadorLexico.h"
#include "../AnalisisLexico/Headers/AccionesSemanticas.h"
#include "../TablaDeSimbolos/TablaDeSimbolos.h"
#include "../AnalisisSemantico/EstructuraTercetos.h"
#include "../AnalisisSemantico/Headers/Ambito.h"
#include "../ContErrWar/ContErrWar.h"
#include "../AnalisisSemantico/Headers/Conversion.h"
#include "../AnalisisSemantico/Headers/InsideClass.h"
#include "../AnalisisSemantico/Headers/VarSinInic.h"

#define RESET   "\x1B[0m"
#define YELLOW  "\x1B[33m"
#define RED "\x1B[31m"
#define BLUE "\x1B[34m"

%}

%token IF ELSE ENDIF PRINT CLASS VOID SHORT ULONG FLOAT WHILE DO LESSLESS EQUAL NOTEQUAL GREATEREQUAL LESSEQUAL CTESHORT CTEULONG CTEFLOAT CTESTRING ID RETURN
%start program

%%

program: '{'sentenceList'}' {ChequearForwardDeclarations();
                             list<string> varSinUsar = VarSinInic::listVarTop();
                             for (const string& var : varSinUsar){
                                yywarning("Variable/Objeto " + var + " Sin asignacion de un valor en el main");
                             }
                            }
        | '{''}' {yywarning("Programa vacio");}
        | sentenceList {yyerror("Falta llaves delimitadores de programa");}
        ;

sentenceList: sentenceList sentence
            | sentence
            ;

sentence: declarative','
        | executable','
        | declarative {yyerror("Se ha detectado una falta de coma");}
        | executable {yyerror("Se ha detectado una falta de coma");}
        ;

declarative: function
           | declaration
           | class
           ;

executableList: executableList executable','
              | executable','
              | executableList declarative',' {yyerror("Sentencia declarativa en lugar de una ejecutable");}
              | declarative',' {yyerror("Sentencia declarativa en lugar de una ejecutable");}
              ;

executable: ifStatement
          | whileStatement 
          | print 
          | functionCall
          | assignment
          | lessless {
                        if (esObjeto($1)){
                            string atributo, objeto;
                            dividirStringPorArroba($1,objeto, atributo);
                            crearTerLessLessObjeto(obtenerUltimaParte(objeto, '#'),atributo);
                        }else{
                            crearTerLessLess(obtenerUltimaParte($1, '#'));
                        }
                    }
                        
declaration: variableDeclaration
           | objectDeclaration
           ;

variableDeclaration: type variableList {setearTipos($1,$2);}
                   ;

objectDeclaration: ID objectList {  
                                    string name;
                                    ChequearDeclaracion($1, name, "Clase");
                                    setearTipos($1,$2);
                                    TablaDeSimbolos::del($1); //El ID al declarar un objeto se agrega automaticamente por error en el lexico
                                   }
                 ;

objectList: objectList ';' ID { $$ = stepsDeclVarAndObj($3, "Obj", $1);} 
          | ID {$$ = stepsDeclVarAndObj($1, "Obj");} 
          ;

variableList: variableList ';' ID {$$ = stepsDeclVarAndObj($3, "Var", $1);}
            | ID { $$ = stepsDeclVarAndObj($1, "Var");}
            ;

assignment: nesting '=' expression {yymenssage("Asignacion");
                                    string nomEncontrada, nomAtributo;
                                    if (esObjeto($1) && (ChequearDeclObjeto($1,nomEncontrada, nomAtributo)) || !esObjeto($1) && (ChequearDeclaracion($1,nomEncontrada, "Var",true))){
                                        string tipo;
                                        TablaDeSimbolos::del($1);
                                        bool conversion;
                                        string op = $3;
                                        bool lessLessOp1 = revisarLessLess(op);
                                        if (esObjeto($1)){
                                            conversion = converAsig(nomAtributo,op,tipo);
                                            VarSinInic::delVar(sigID($1)+Ambito::get());
                                        } else {
                                            conversion = converAsig(nomEncontrada,op,tipo);
                                            VarSinInic::delVar(nomEncontrada);
                                        }
                                        if (!conversion){
                                            if ($3[0] == '['){
                                                EstructuraTercetos::addTerceto("=",nomEncontrada,op,tipo);
                                            } else {
                                                if (esObjeto($3)){
                                                    string atributo, objeto;
                                                    dividirStringPorArroba(op,objeto, atributo);
                                                    EstructuraTercetos::addTerceto("=",nomEncontrada,objeto,tipo);
                                                }else{
                                                    EstructuraTercetos::addTerceto("=",nomEncontrada,op,tipo);
                                                }
                                            }
                                        }else{
                                            EstructuraTercetos::addTerceto("=",nomEncontrada,EstructuraTercetos::nroActualTerceto(),tipo);
                                        }
                                        if (esObjeto($3)){
                                                    string atributo, objeto;
                                                    dividirStringPorArroba(op,objeto, atributo);
                                                    if (lessLessOp1) crearTerLessLessObjeto(objeto,atributo);
                                        }else{
                                            if (lessLessOp1) crearTerLessLess(op);
                                        }
                                    }
                                    }
          ;

nesting: nesting'.'ID {$$ = $1 + "." + $3;}
       | ID {$$ = $1;}
       ;

function: functionHeader '{'functionBody'}' {stepsFunctionOrMethod();}
        ;

functionHeader: VOID ID'('formalParameter')'{ if (InsideClass::insideClass()){
                                                    string key; 
                                                    if ((InsideClass::insideMethod())){ //Se trata de una funcion dentro de un metodo
                                                        if (!(InsideClass::insideFuncionMethod())){
                                                            if (noReDeclarada($2, "Funcion") && chequearNomPF($2,$4)) {
                                                                VarSinInic::addTop(); 
                                                                key = TablaDeSimbolos::changeKey($2);
                                                                TablaDeSimbolos::setUso(key, "Funcion");
                                                                Ambito::add($2);
                                                                InsideClass::insideFuncionMethod(true);
                                                                TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                                                string keyFormal = TablaDeSimbolos::changeKey($4);
                                                                TablaDeSimbolos::setParametroFormal(key,keyFormal);
                                                            }
                                                        }else{
                                                            yyerror("No es posible anidar otra funcion, excede los niveles permitidos");
                                                        }
                                                    }else{ //Se trata de un metodo
                                                        if ($2 == InsideClass::getClassSinMain()){
                                                            yyerror("No es posible declarar un metodo con el mismo nombre que el de la clase a la que pertenece");
                                                        }else{
                                                            bool hayForward = TablaDeSimbolos::getForwDecl(InsideClass::getClass()) == 0;
                                                            if (! hayForward || ! TablaDeSimbolos::existeClave($2+"-"+InsideClass::getClass())){
                                                                if (noReDeclarada($2+"-"+InsideClass::getClassSinMain(), "Metodo") && chequearNomPF($2,$4)) {
                                                                    InsideClass::addMethod($2);
                                                                    VarSinInic::addTop();
                                                                    key = TablaDeSimbolos::changeKeyClass($2,InsideClass::getClass());
                                                                    TablaDeSimbolos::setUso(key, "Metodo");
                                                                    TablaDeSimbolos::forwDeclComp(key);
                                                                    Ambito::add($2+"-"+InsideClass::getClassSinMain());
                                                                    InsideClass::insideMethod(true);
                                                                    TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                                                    string keyFormal = TablaDeSimbolos::changeKey($4);
                                                                    TablaDeSimbolos::setParametroFormal(key,keyFormal);
                                                                }
                                                            }else{ //Si no esta redeclarada se marca en 1 la columna de forward para ese metodo
                                                               if (noReDeclarada($2+"-"+InsideClass::getClassSinMain(), "Metodo") && chequearNomPF($2,$4)){
                                                                    if (TablaDeSimbolos::getTieneParamDF($2+"-"+InsideClass::getClass()) != 2) {
                                                                        yyerror("Metodo " + $2 + " se ha indicado que NO tiene parametro en su primer invocacion.");
                                                                    }
                                                                    InsideClass::addMethod($2);
                                                                    VarSinInic::addTop();
                                                                    TablaDeSimbolos::del($2);
                                                                    InsideClass::insideMethod(true);
                                                                    Ambito::add($2+"-"+InsideClass::getClassSinMain());
                                                                    TablaDeSimbolos::forwDeclComp($2+"-"+InsideClass::getClass());
                                                                    string keyFormal = TablaDeSimbolos::changeKey($4);
                                                                    TablaDeSimbolos::setParametroFormal($2+"-"+InsideClass::getClass(),keyFormal);
                                                                    cargarTercetosPF($2+"-"+InsideClass::getClass(),keyFormal);
                                                                } 
                                                            }     
                                                        }
                                                    }
                                                    EstructuraTercetos::setAmbito(Ambito::getTercetos()); 
                                            }else{
                                                if (noReDeclarada($2, "Funcion") && chequearNomPF($2,$4)) {
                                                    string key = TablaDeSimbolos::changeKey($2);
                                                    TablaDeSimbolos::setUso(key, "Funcion");
                                                    VarSinInic::addTop();
                                                    Ambito::add($2);
                                                    string keyFormal = TablaDeSimbolos::changeKey($4);
                                                    TablaDeSimbolos::setParametroFormal(key,keyFormal);
                                                    EstructuraTercetos::setAmbito(Ambito::getTercetos());
                                                }
                                              }
                                            }
              | VOID ID'('')'   {if (InsideClass::insideClass()){
                                        string key; 
                                        if ((InsideClass::insideMethod())){ //Se trata de una funcion dentro de un metodo
                                            if (!(InsideClass::insideFuncionMethod())){
                                                if (noReDeclarada($2, "Funcion")) { 
                                                    key = TablaDeSimbolos::changeKey($2);
                                                    VarSinInic::addTop();
                                                    TablaDeSimbolos::setUso(key, "Funcion");
                                                    Ambito::add($2);
                                                    InsideClass::insideFuncionMethod(true);
                                                    TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                                }
                                            }else{
                                                yyerror("No es posible anidar otra funcion, excede los niveles permitidos");
                                            }
                                        }else{ //Se trata de un metodo
                                            if ($2 == InsideClass::getClassSinMain()){
                                                yyerror("No es posible declarar un metodo con el mismo nombre que el de la clase a la que pertenece");
                                            }else{
                                                bool hayForward = TablaDeSimbolos::getForwDecl(InsideClass::getClass()) == 0;

                                                if (! hayForward || ! TablaDeSimbolos::existeClave($2+"-"+InsideClass::getClass())){
                                                    if (noReDeclarada($2+"-"+InsideClass::getClassSinMain(), "Metodo")) {
                                                        InsideClass::addMethod($2);
                                                        VarSinInic::addTop();
                                                        key = TablaDeSimbolos::changeKeyClass($2,InsideClass::getClass());
                                                        TablaDeSimbolos::setUso(key, "Metodo");
                                                        TablaDeSimbolos::forwDeclComp(key);
                                                        Ambito::add($2+"-"+InsideClass::getClassSinMain());
                                                        InsideClass::insideMethod(true);
                                                        TablaDeSimbolos::setClass(key,InsideClass::getClass());
                                                    }
                                                }else{ //Si no esta redeclarada se marca en 1 la columna de forward para ese metodo
                                                    if (noReDeclarada($2+"-"+InsideClass::getClassSinMain(), "Metodo")){
                                                        if (TablaDeSimbolos::getTieneParamDF($2+"-"+InsideClass::getClass()) !=1) {
                                                            yyerror("Metodo " + $2 + " se ha indicado que tiene parametro en su primer invocacion.");
                                                        }
                                                        TablaDeSimbolos::del($2);
                                                        TablaDeSimbolos::forwDeclComp($2+"-"+InsideClass::getClass());
                                                        Ambito::add($2+"-"+InsideClass::getClassSinMain());
                                                        InsideClass::insideMethod(true);
                                                        InsideClass::addMethod($2);
                                                        VarSinInic::addTop();
                                                    } 
                                                }  
                                            }
                                        }

                                        EstructuraTercetos::setAmbito(Ambito::getTercetos());
                                }else{ 
                                        if (noReDeclarada($2, "Funcion")) {
                                            string key = TablaDeSimbolos::changeKey($2);
                                            VarSinInic::addTop();
                                            TablaDeSimbolos::setUso(key, "Funcion");
                                            Ambito::add($2);
                                            EstructuraTercetos::setAmbito(Ambito::getTercetos());
                                        }
                                    }
                                }
              ;

functionBody: sentenceList return
            | return {yywarning("Funcion vacia");}
            | sentenceList {yyerror("Funcion sin RETURN obligatorio al final");}
            ;

formalParameter: type ID {$$ = $2; TablaDeSimbolos::setUso($2, "PF"); setearTipos($1,$2);}
               ;

functionCall: nesting'('')' {
                            string name;
                            string tipo;
                            if (esObjeto($1)){
                                if (ChequearDeclObjeto($1,name,tipo,false)){
                                    if (ChequearRecursion($1,true) && TablaDeSimbolos::getForwDecl(name) != 0){
                                        if (!TablaDeSimbolos::tieneParametros(name)){
                                            EstructuraTercetos::addTerceto("Call",name,"");
                                        } else {
                                            yyerror("El metodo " + name + " requiere parametro");
                                        }
                                    }else if(TablaDeSimbolos::getForwDecl(name) == 0){
                                        if (TablaDeSimbolos::getTieneParamDF(name) == 2){
                                            yyerror("Metodo " + name + " primera vez utilizado con parametro");
                                        }else{
                                            if (TablaDeSimbolos::getTieneParamDF(name) == 0){
                                                TablaDeSimbolos::setTiene_parametro(name,1);
                                            }
                                            EstructuraTercetos::addTerceto("Call",name,"");
                                        }
                                    }else{
                                        yyerror("Se esta haciendo un llamado recursivo del metodo: "+$1);
                                    }
                                }
                            } else {
                                if (ChequearDeclaracion($1,name,"Funcion")){
                                    if (ChequearRecursion($1,false)){
                                        if (!TablaDeSimbolos::tieneParametros(name)){
                                            EstructuraTercetos::addTerceto("Call",name,"");
                                        } else {
                                            yyerror("La funcion " + name + " requiere parametro");
                                        }
                                    } else{
                                        yyerror("Se esta haciendo un llamado recursivo a la funcion: "+$1);
                                    }
                                }
                            }
                            TablaDeSimbolos::del($1);
                            }
            | nesting'('realParameter')' {
                                            string name;
                                            string tipo;
                                            if (esObjeto($1)){
                                                if (ChequearDeclObjeto($1,name,tipo,false)){
                                                    if (ChequearRecursion($1,true)){
                                                        string tipo;
                                                        if (TablaDeSimbolos::tieneParametros(name) && TablaDeSimbolos::getForwDecl(name) != 0){
                                                            if (converAsig(TablaDeSimbolos::getParametroFormal(name), $3, tipo)){
                                                                EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),EstructuraTercetos::nroActualTerceto(),tipo);
                                                            } else {
                                                                if (esObjeto($3)){
                                                                        string atributo, objeto;
                                                                        dividirStringPorArroba($3,objeto, atributo);
                                                                        EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),objeto,tipo);
                                                                }else{
                                                                    EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),$3,tipo);
                                                                }
                                                            }
                                                            EstructuraTercetos::addTerceto("Call",name,"");
                                                        }else if(TablaDeSimbolos::getForwDecl(name) == 0 ){
                                                            int nroPF = TablaDeSimbolos::getTieneParamDF(name);
                                                            if (nroPF == 1){
                                                                yyerror("Metodo " + name + " primera vez utilizado sin parametro");
                                                            } else {
                                                                if (nroPF == 0){
                                                                    TablaDeSimbolos::setTiene_parametro(name,2);
                                                                }
                                                                // Guardar Numero
                                                                InsideClass::addTerVacios(name,EstructuraTercetos::nroSigTerceto(),Ambito::get());
                                                                if (esObjeto($3)){
                                                                        string atributo, objeto;
                                                                        dividirStringPorArroba($3,objeto, atributo);
                                                                        EstructuraTercetos::addTerceto(" ",objeto,atributo,"FLOAT");
                                                                        EstructuraTercetos::addTerceto("="," ",objeto," ");
                                                                }else{
                                                                    EstructuraTercetos::addTerceto(" ",$3," ","FLOAT");
                                                                    EstructuraTercetos::addTerceto("="," ",$3," ");
                                                                }
                                                                 EstructuraTercetos::addTerceto("Call",name,"");
                                                            }
                                                        }else{
                                                            yyerror("Este metodo no acepta parametros");
                                                        }
                                                    }else{
                                                        yyerror("Se esta haciendo un llamado recursivo del metodo: "+$1);
                                                    }
                                                } else {
                                                    yyerror("El metodo " + name + " NO requiere parametro");
                                                }
                                            }else{
                                                if (ChequearDeclaracion($1,name,"Funcion")){
                                                    if (ChequearRecursion($1,false)){
                                                        TablaDeSimbolos::del($1);
                                                        string tipo;
                                                        if (TablaDeSimbolos::tieneParametros(name)){
                                                            if (converAsig(TablaDeSimbolos::getParametroFormal(name), $3, tipo)) {
                                                                EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),EstructuraTercetos::nroActualTerceto(),tipo);
                                                            } else {
                                                                if (esObjeto($3)){
                                                                        string atributo, objeto;
                                                                        dividirStringPorArroba($3,objeto, atributo);
                                                                        EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),objeto,tipo);
                                                                }else{
                                                                    EstructuraTercetos::addTerceto("=",TablaDeSimbolos::getParametroFormal(name),$3,tipo);
                                                                }
                                                            }
                                                            EstructuraTercetos::addTerceto("Call",name,"");
                                                        }else{
                                                            yyerror("Esta funcion no acepta parametros");
                                                        }
                                                    }else{
                                                        yyerror("Se esta haciendo un llamado recursivo a la funcion: "+$1);
                                                    }
                                                } else {
                                                    yyerror("La funcion " + name + " NO requiere parametro");
                                                }
                                                }
                                            TablaDeSimbolos::del($1);
                                         }
            ;

realParameter: expression
             ;

ifStatement: IF condition bloque else bloque ENDIF {yymenssage("IF");jumpEndIf();}
           | IF condition bloque ENDIF {yymenssage("IF");jumpEndIf();}
           | IF condition ENDIF {yywarning("If vacio");yymenssage("IF");jumpEndIf();} 
           | IF condition bloque else ENDIF {yywarning("Else vacio");yymenssage("IF");jumpEndIf();}
           | IF condition else bloque ENDIF {yywarning("If vacio");yymenssage("IF");jumpEndIf();}
           ;

bloque: iterativeBody
       | executable','
       | return
       ;  

else: ELSE {jumpEndThen();}
    ;

whileStatement: while condition DO bloque {yymenssage("While");jumpEndWhile();} 
              ;
              
while: WHILE {EstructuraTercetos::apilar();EstructuraTercetos::addLabel();}
     ;

iterativeBody: '{' executableList '}' 
            | '{' executableList return '}'
            | '{' '}' {yywarning("Bloque vacio");}
            ;

condition: '('comparison')' {EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",$2,"");}
         | '('comparison  {yyerror("Falta segundo parentesis en la condicion");EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",$2,"");}
         | comparison')'  {yyerror("Falta primer parentesis en la condicion");EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",$1,"");}
         | comparison     {yyerror("Faltan  parentesis en la condicion");EstructuraTercetos::apilar();EstructuraTercetos::addTerceto("BF",$1,"");}
         ;

class: classHeader '{'sentenceList'}' { yymenssage("Clase");
                                        string clase = InsideClass::getClass();
                                        int foward = TablaDeSimbolos::getForwDecl(clase);
										vector<string> lista;
										if (foward==0){
											listaHerencia(clase,lista);
                                            if (!lista.empty()){
                                                while (InsideClass::moreMethods()){
                                                    cheqRedecMetForward(InsideClass::getClass(), lista, InsideClass::getMethod());
                                                    InsideClass::outMethod();
                                                }
										    }
										} else {
                                            InsideClass::unstackMethods();
                                        }
                                        TablaDeSimbolos::forwDeclComp(InsideClass::getClass());
                                        InsideClass::outClass();
                                      }
     | classHeader '{'sentenceList heredity '}' {
                                                 yymenssage("Clase");
                                                 TablaDeSimbolos::setHerencia(InsideClass::getClass(),yyvsp[-1]);
                                                 if (TablaDeSimbolos::nivelHerencia(InsideClass::getClass()) > 3){
                                                    yyerror("La clase ha excedido el nivel de herencia (maximo nivel = 3)");
                                                 }
                                                 string clase = InsideClass::getClass();
                                                 int foward = TablaDeSimbolos::getForwDecl(clase);
                                                 vector<string> lista;
                                                 if (foward==0){
                                                    listaHerencia(clase,lista);
                                                 }
                                                 TablaDeSimbolos::forwDeclComp(InsideClass::getClass());
                                                 string herencia = TablaDeSimbolos::getHerencia(clase);
                                                 ChequearSobrescritura(clase,herencia,foward==0,lista);
                                                 InsideClass::outClass();
                                                 
                                                 }
     | classHeader '{'heredity sentenceList'}' {yyerror("La herencia debe ir al final de la declaracion de la clase no al principio");}
     | classHeader {claseSinimplementar(InsideClass::getClass());InsideClass::outClass();}
     | classHeader '{'sentenceList heredity sentenceList'}'  {yyerror("La herencia debe ir al final de la declaracion de la clase no entre medio");}
     ;

classHeader: CLASS ID { if ((!classInFunction($2)) && !classInClass($2)){
                            if (noReDeclarada($2, "Clase")){
                                string name = $2+":main";
                                if (TablaDeSimbolos::getForwDecl(name) != 0){
                                    name =  TablaDeSimbolos::changeKey($2);
                                    TablaDeSimbolos::setUso(name,"Clase");
                                    TablaDeSimbolos::inicNivelHer(name);
                                } else {
                                    TablaDeSimbolos::del($2);
                                }
                                InsideClass::inClass(name);
                            } else {
                                InsideClass::inClass($2+Ambito::get());
                                TablaDeSimbolos::del($2);
                            }
                        }
                      }
            ;

heredity: ID',' { string name = "<NoExiste>";
                ChequearDeclaracion($1,name,"Clase");
                TablaDeSimbolos::del($1);
                if (name == InsideClass::getClass()){
                    yyerror("La clase hereda de ella misma.");
                } else {
                    $$ = name;
                }
                }
        ;

comparison: expression operatorsLogics expression {$$ = stepsOperation($1, $3, $2);}
         ;

expression: expression'+'termino { $$ = stepsOperation($1, $3, "+"); }
          | expression'-'termino { $$ = stepsOperation($1, $3, "-"); }
          | termino {$$ = $1;}
          ;

termino: termino'*'factor { $$ = stepsOperation($1, $3, "*"); }
       | termino'/'factor { $$ = stepsOperation($1, $3, "/"); }
       | factor {$$ = $1;}
       ;

factor: nesting          {$$ = stepsFactor($1);}
      | constant         {$$ = $1;}
      | lessless         {$$ = $1;}
      | '(' expression ')' {yyerror("Expresion no puede ir entre parentesis");$$=$2;}
      ;

lessless: nesting LESSLESS {$$ = stepsFactor($1, true);}
        ;

operatorsLogics: EQUAL {$$ = "==";}
               | NOTEQUAL {$$ = "!!";}
               | GREATEREQUAL {$$ = ">=";}
               | LESSEQUAL {$$ = "<=";}
               | '<' {$$ = "<";}
               | '>' {$$ = ">";}
               ;

constant: CTESHORT {chequearRangoSHORT($1); $$ = $1;}
        | '-'CTESHORT {TablaDeSimbolos::chequearNegativos($2);$$ = "-"+$2;}
        | CTEFLOAT {TablaDeSimbolos::chequearPositivos($1); $$ = $1;}
        | '-'CTEFLOAT {TablaDeSimbolos::chequearNegativos($2);$$ = "-"+$2;}
        | CTEULONG {$$ = $1;}
        | '-'CTEULONG {yyerror("Una constante ULONG no puede ser negativa");}
        ;

type: SHORT {$$="SHORT";}
    | ULONG {$$="ULONG";}
    | FLOAT {$$="FLOAT";}
    ;

print: PRINT cadena {EstructuraTercetos::addTerceto("Print",$2,"");}
    ;

cadena: CTESTRING
    ;

return: RETURN ',' {EstructuraTercetos::addTerceto("Return","","");}
      ;

%%

// ============================== Mensajes ==============================

void yymenssage(string menssage){
    cout  << endl  << BLUE << "Estructura detectada: " << menssage  << RESET << endl;
}

void yyerror(string menssage){
	ContErrWar::addMensaje("Linea " + to_string(AccionesSemanticas::lineaInicioToken) +" - ERROR: " + menssage,"ERROR");
}

void yywarning(string menssage){
    ContErrWar::addMensaje("Linea " + to_string(AccionesSemanticas::lineaInicioToken) +" - WARNING: " + menssage,"WARNING");
}

// ============================== Chequeo Rango ==============================

void chequearRangoSHORT(string valor){
    int chequear = stoi(TablaDeSimbolos::getValor(valor));
    if (chequear >= 128){
        yyerror("Constante SHORT fuera de rango");
        TablaDeSimbolos::del(valor);
    } else {
        TablaDeSimbolos::chequearPositivos(valor);
    }
}

// ============================== Tercetos Sentencias de Control ==============================

void jumpEndWhile(){
    int tercetoFalse = EstructuraTercetos::desapilar();
    EstructuraTercetos::addTerceto("BI","["+to_string(EstructuraTercetos::desapilar())+"]","");
    EstructuraTercetos::updateTerceto(tercetoFalse,EstructuraTercetos::nroSigTerceto());
    EstructuraTercetos::addLabel();
}

void jumpEndThen(){
    int tercetoFalse = EstructuraTercetos::desapilar();
    EstructuraTercetos::apilar();
    EstructuraTercetos::addTerceto("BI","","");
    EstructuraTercetos::updateTerceto(tercetoFalse,EstructuraTercetos::nroSigTerceto());
    EstructuraTercetos::addLabel();
}

void jumpEndIf(){
    EstructuraTercetos::updateTerceto(EstructuraTercetos::desapilar(),EstructuraTercetos::nroSigTerceto());
    EstructuraTercetos::addLabel();
}

string partEndID(string nesting){

    // Encuentra la posición del último punto
    size_t dot_index = nesting.find_last_of('.');

    // Si no hay punto, devuelve cadena vacía
    if (dot_index == string::npos)
        return nesting;

    // Devuelve la cadena desde el punto hasta el final
    return nesting.substr(dot_index + 1);
}

// ============================== Conversiones Implicitas ==============================

void dividirStringPorArroba(const string &input, string &nombreLlamado, string &nombraAtri) {
    size_t posicionArroba = input.find('@');
    if (posicionArroba != std::string::npos) {
        string comNom = input;
        nombreLlamado = input.substr(0, posicionArroba);
        nombraAtri = comNom.substr(posicionArroba + 1);
    } else {
        nombreLlamado = input;
        nombraAtri = input;
    }
}

string tipoOperando(string operando){
    if (operando[0] != '['){
        return TablaDeSimbolos::getTipo(operando);
    } else {
        operando.erase(0, 1);
        operando.erase(operando.size() - 1, 1);
        return EstructuraTercetos::getTipo(operando);
    }
}

bool converAsig(string izq, string der, string & tipo){
    string atrIzq, atrDer;
    dividirStringPorArroba(izq, izq, atrIzq);
    dividirStringPorArroba(der, der, atrDer);
    string tipoIzq = TablaDeSimbolos::getTipo(atrIzq);
    string tercetoDer = der; //Se hace una copia para el caso de tener que sacarle los corchetes
    string tipoDer = tipoOperando(atrDer);
    if (tipoIzq == " " || tipoDer == " "){
            tipo = " ";
            return false;
    }
    if (tipoIzq != "REVISAR"){
        string valido = Conversion::asignacion(tipoIzq,tipoDer);
        tipo = tipoIzq;
        if (valido == "ERROR" ){
            if (tipoDer == "REVISAR"){
                yyerror("No es posible asignarle un atributo predeclarado sin tipo a una variable");          
            }else{
                yyerror("No es posible asignarle a un "+tipoIzq+" un "+tipoDer);
        }
        }else if (tipoIzq != tipoDer){
                string conversion = string(1,tipoDer[0])+"to"+string(1,tipoIzq[0]); 
                EstructuraTercetos::addTerceto(conversion,tercetoDer,"",tipoIzq);
                return true;
        }
    } else {
        TablaDeSimbolos::setTipo(atrIzq,tipoDer);
        yywarning("Se ha inferido el tipo de " + atrIzq + " como " + tipoDer);
        tipo = tipoDer;
    }
    return false;
}

bool cambiarTipoOp1(string op1, string op2){
    if ((op1 == "SHORT") || (op1 == "ULONG")) {
        return true;
    } else {
        return false;
    }
}

bool converOp(string op1, string op2, string & opAConvertir, string & tipo){
    string tipoOp1, tipoOp2, atrOp1, atrOp2;
    dividirStringPorArroba(op1, op1, atrOp1);
    dividirStringPorArroba(op2, op2, atrOp2);
    tipoOp1 = tipoOperando(atrOp1);
    tipoOp2 = tipoOperando(atrOp2);
    if (tipoOp1 == " " || tipoOp2 == " "){
		tipo = " ";
		return false;
    }
    string valido = Conversion::operacion(tipoOp1,tipoOp2);
    if (valido == "ERROR" || tipoOp1 == "REVISAR" || tipoOp2 == "REVISAR"){
        if (tipoOp1 == "REVISAR" || tipoOp2 == "REVISAR"){
            yyerror("No es posible realizar operaciones con atributos predeclarados sin tipo");          
        }else{
            yyerror("No es posible operar entre un "+tipoOp1+" y un "+tipoOp2);
        }
        tipo = " ";
    }else if (tipoOp1 != tipoOp2){
            if (cambiarTipoOp1(tipoOp1, tipoOp2)){
                opAConvertir = "op1";
                tipo = tipoOp2;
                string conversion = string(1,tipoOp1[0])+"to"+string(1,tipoOp2[0]);
                EstructuraTercetos::addTerceto(conversion,op1,"",tipoOp2);
            }else{
                opAConvertir = "op2";
                tipo = tipoOp1;
                string conversion = string(1,tipoOp2[0])+"to"+string(1,tipoOp1[0]);
                EstructuraTercetos::addTerceto(conversion,op2,"",tipoOp1);
            }
            return true;
    } else {
        tipo = tipoOp1;
    }
    return false;
}

// ============================== Cargar tipos Lista de variables ==============================

void setearTipos(string tipo, string listVariable){
    string var;
    std::istringstream variableStream(listVariable);  // Asegúrate de inicializar el istringstream
    while (getline(variableStream, var, '&')) {
        if (TablaDeSimbolos::getTipo(var) == " " || TablaDeSimbolos::getTipo(var) == "REVISAR"){
            TablaDeSimbolos::setTipo(var, tipo);
        } else if(TablaDeSimbolos::getTipo(var) != tipo){
            yyerror("Tipo detectado en inferencia no coincide con su declaracion Atributo" + var);
        }
    }
}

// ============================== Chequeo Variable NO declarada ==============================

string sigID(string & var){
    size_t indicePunto = var.find('.');       
    if (indicePunto != std::string::npos) {
        string primeraParte = var.substr(0, indicePunto);
        string segundaParte = var.substr(indicePunto + static_cast<size_t>(1));
        var=segundaParte;
        return primeraParte;
    } else {
        string aux=var;
        var.clear();
        return aux;
    }
}

void listaHerencia(string clase, vector<string> & lista){
    TablaDeSimbolos::inic();
    while (! TablaDeSimbolos::fin()){
        string clave = TablaDeSimbolos::getClave();
        string hereda=TablaDeSimbolos::getHerencia(clave);
        if (hereda==clase){
            lista.push_back(clave);
        }
        TablaDeSimbolos::avanzar();
    }
    if (!lista.empty()){
        TablaDeSimbolos::inic();
        while (! TablaDeSimbolos::fin()){
            string clave = TablaDeSimbolos::getClave();
            string hereda=TablaDeSimbolos::getHerencia(clave);
            auto it = find(lista.begin(), lista.end(), hereda);
            if (it!=lista.end()){
                lista.push_back(clave);
            }
            TablaDeSimbolos::avanzar();
        }
    }
}

void cheqRedecMetForward(string clasePadre,vector<string> clases, string metodo){
    for (string clase:clases){
        string uso = TablaDeSimbolos::usoAsignado(metodo+"-"+clase);
        if (uso == "Metodo"){
            yyerror("No es posible en la clase "+clase+" sobreescribir el metodo "+metodo+" de la clase "+clasePadre+" de la cual hereda");
        }
    }
}

bool ChequearDeclaracion(string var, string & nomEncontrada, string uso, bool chequeoFormal = false){
    string ambito=Ambito::get();
    bool final = false;
    bool encontrada = false;
    if (chequeoFormal){
        if (TablaDeSimbolos::usoAsignado(var+ambito) == "PF"){
            nomEncontrada = var+ambito;
            encontrada = true;
        }
    }
    while(! final && ! encontrada){
        if ((TablaDeSimbolos::usoAsignado(var+ambito) == uso) || (TablaDeSimbolos::usoAsignado(var+ambito) == "PF")){
            nomEncontrada = var+ambito;
            encontrada = true;
        }else{
            if (ambito.empty()){
                final = true;
                yyerror(uso + " " + var + " NO declarada");
            }
            size_t pos = ambito.find_last_of(":");
            if (pos != string::npos) {
                ambito = ambito.substr(0, pos);
            }
        }
    }
    return encontrada;
}
int contarCaracter(string cadena, char caracter) {
    int contador = 0;
    for (char c : cadena) {
        if (c == caracter) {
            contador++;
        }
    }
    return contador;
}

bool esObjeto(string nesting){
    return contarCaracter(nesting,'.') > 0;
}

void ChequeoForwDecl(string atrMet, string clase, bool esAtributo, string & nomEncontrada, bool & encontrada, string & nombAtributo){
    string atr = sigID(atrMet);
    if (atrMet.empty()){ //Si no esta vacio entonces: error
        string uso = TablaDeSimbolos::usoAsignado(atr+"-"+clase);
		if (esAtributo){
			if(uso != "Metodo"){
				TablaDeSimbolos::add(atr+"-"+clase, "", "REVISAR", "Atr"); //REVISAR TIPO DE ATRIBUTOS
				TablaDeSimbolos::setClass(atr+"-"+clase,clase);
                nomEncontrada = atr+"."+nomEncontrada;
                nombAtributo = atr+"-"+clase;
                encontrada = true;
				TablaDeSimbolos::del(atr);
				TablaDeSimbolos::inicForwDecl(atr+"-"+clase);
			}else{
				yyerror("La clase no puede tener atributos y metodos con el mismo nombre");
			}
		}else{
			if(uso != "Atr"){
				TablaDeSimbolos::add(atr+"-"+clase, " ", " ", "Metodo");
				TablaDeSimbolos::setClass(atr+"-"+clase,clase);
                nomEncontrada = atr+"-"+clase;
                encontrada = true;
				TablaDeSimbolos::del(atr);
				TablaDeSimbolos::inicForwDecl(atr+"-"+clase);
			}else{
				yyerror("La clase no puede tener atributos y metodos con el mismo nombre");
			}
		}
    }else{
        yyerror("No es posible que una clase incompleta herede de otra clase o tenga un atributo de tipo objeto previo a su declaracion completa");
    }
}

bool ChequearDeclObjeto(string obj, string & nomEncontrada, string & nomAtributo, bool esAtributo = true){
    string check = sigID(obj);
    TablaDeSimbolos::del(check);
    bool encontrada = false;
    bool final = ! ChequearDeclaracion(check, nomEncontrada, "Obj");
    string antCheck = TablaDeSimbolos::getTipo(nomEncontrada)+":main"; // Ya es una clase con forwad declaration
    bool hayForward = TablaDeSimbolos::getForwDecl(antCheck) == 0;
    while (! final && ! encontrada && ! hayForward){
        check = sigID(obj);
        TablaDeSimbolos::del(check);
        if (TablaDeSimbolos::usoAsignado(check+":main") == "Clase"){
            if (TablaDeSimbolos::getForwDecl(check+":main") == 0) {
                nomEncontrada = check + "." + nomEncontrada;
                antCheck = check;
                hayForward = true;
            } else {
                if (TablaDeSimbolos::getHerencia(antCheck) != check+":main"){
                    if (check+":main" == antCheck){
                        yyerror("Invocacion incorrecta de la clase " + check);
                    } else {
                        yyerror("Clase " + antCheck + " No hereda de " + check);
                    }
                    final = true;
                } else {
                    antCheck = check+":main";
                    nomEncontrada = check + "." + nomEncontrada;
                    if (obj.length() == 0){
                        yyerror("Objeto esta intentando utilizar una clase "+ check +" en lugar de un atributo");
                        final = true;
                    }
                }
            }
        } else if (TablaDeSimbolos::usoAsignado(check+"-"+antCheck) == "Atr"){
            string tipo = TablaDeSimbolos::getTipo(check+"-"+antCheck);
        	nomEncontrada = check + "." + nomEncontrada;
            if (tipo != "SHORT" && tipo != "ULONG" && tipo != "FLOAT"){
                antCheck = tipo+":main";
                if (obj.length() == 0){
                    yyerror("Se debe operar con tipos primitivos | SHORT - ULONG - FLOAT"); // Intentar usar un objeto al final de la cadena (Debe encontrar un primitivo)
                    final = true;
                }
            } else {
                if (esAtributo){
                    if (obj.length() == 0){
                        nomAtributo = check+"-"+antCheck;
                        encontrada = true;
                    }
                } else {
                    yyerror("Uso no valido de atributo en el llamado a metodo"); //Se quiere llamar ATR de tipo primitivo como metodo
                    final = true;
                }
            }
        }else if (TablaDeSimbolos::usoAsignado(check+"-"+antCheck) == "Metodo"){
            if (esAtributo){
                yyerror("Uso no valido de atributo en la invocacion a metodo"); //Se quiere utilizar un metodo como si fuera un atributo
                final = true;
            } else {
                if (obj.length() == 0){
                    nomEncontrada = check+"-"+antCheck;
                    encontrada = true;
                } else {
                    yyerror("Uso no valido de invocacion a metodo");
                    final = true;
                }
            }
        } else {
            yyerror("Clase/atributo no existente");
            final = true;
        }
        
    }
    if (hayForward) {
        ChequeoForwDecl(obj, antCheck, esAtributo, nomEncontrada, encontrada, nomAtributo);
    }
    return encontrada;
}

// ============================== Chequeo Re declaradas ==============================

bool noReDeclarada(string decl, string usoOriginal){
    string ambito=Ambito::get();
    string uso = TablaDeSimbolos::usoAsignado(decl+ambito);
    if (TablaDeSimbolos::getForwDecl(decl+ambito) != 0){
        if (uso == "Var" || uso == "Funcion" || uso == "Obj" || uso == "Clase" && usoOriginal != "Clase" || uso == "Atr" || uso == "Metodo"){
                yyerror(uso + " " + decl + " se encuentra re-declarada como " + usoOriginal);
                return false;
        } else if (uso == "Clase" && usoOriginal == "Clase" ){
            if (TablaDeSimbolos::getForwDecl(decl+ambito) == 1){
                yyerror(uso + " " + decl + " se encuentra re-declarada como " + usoOriginal);
            }   
            return false;
        }
    }
    return true;
}

// ============================== Sobrescritura de metodos ==============================

void ChequearSobrescritura(string clase, string herencia, bool forward, vector<string> clasesForward){
    string metodoActual, uso;
    if (!(herencia == " ")){
        string herAbuelo = TablaDeSimbolos::getHerencia(herencia);
        while (InsideClass::moreMethods()){
            metodoActual = InsideClass::getMethod();
            uso = TablaDeSimbolos::usoAsignado(metodoActual+"-"+herencia);
            if (uso == "Metodo"){
                yyerror("No es posible en la clase "+clase+" sobreescribir el metodo "+metodoActual+" de la clase "+herencia+" de la cual hereda");
            }
            if (herAbuelo != " "){
                uso = TablaDeSimbolos::usoAsignado(metodoActual+"-"+herAbuelo);
                if (uso == "Metodo"){
                    yyerror("No es posible en la clase "+clase+" sobreescribir el metodo "+metodoActual+" de la clase "+herAbuelo+" de la cual hereda");
                }
            }
            if (forward){
                cheqRedecMetForward(clase, clasesForward, metodoActual);
            }
            InsideClass::outMethod();
        }
    }
    InsideClass::unstackMethods(); //En el caso de no haber herencia se vacia la pila llena de metodos
}

// ============================== Forward Declaration ==============================

void claseSinimplementar(string clase){
    string name = clase;
    if (TablaDeSimbolos::getForwDecl(name) != -1){
        yyerror("Clase " + clase + " se encuentra re-declarada");
    } else {
        TablaDeSimbolos::inicForwDecl(name);
    }
}

void ChequearForwardDeclarations(){
    TablaDeSimbolos::inic();
    while (! TablaDeSimbolos::fin()){
        string clave = TablaDeSimbolos::getClave();
        if (TablaDeSimbolos::getForwDecl(clave)==0){
            string uso=TablaDeSimbolos::usoAsignado(clave);
            if (uso=="Atr"){
                yyerror("Atributo "+clave+" no finalizada su declaracion");
            }else{
                if (uso=="Metodo"){
                    yyerror("Metodo "+clave+" no finalizado su declaracion");
                }else if (uso=="Clase"){
                    yyerror("Clase "+clave+" no finalizada su declaracion");
                }
            }
        }
        TablaDeSimbolos::avanzar();
    }
}

// ============================== Pasos a seguir al detectar una operacion ==============================

string obtenerUltimaParte(string cadena, char separador) {
    size_t ultimaPosicion = cadena.find_last_of(separador);
    if (ultimaPosicion != std::string::npos) {
        return cadena.substr(ultimaPosicion + 1);
    }
    // Si no se encuentra el separador, devolver toda la cadena
    return cadena;
}

bool revisarLessLess(string & op){
    if (op[0] == '#'){
        op = obtenerUltimaParte(op,'#');
        
        return true;
    } else {
        return false;
    }
}

void crearTerLessLess(string op){
    EstructuraTercetos::addTerceto("-",op,TablaDeSimbolos::getUno(op),TablaDeSimbolos::getTipo(op));
    EstructuraTercetos::addTerceto("=",op,EstructuraTercetos::nroActualTerceto(),TablaDeSimbolos::getTipo(op));
}

void crearTerLessLessObjeto(string objeto, string atributo){
    EstructuraTercetos::addTerceto("-",objeto,TablaDeSimbolos::getUno(atributo),TablaDeSimbolos::getTipo(atributo));
    EstructuraTercetos::addTerceto("=",objeto,EstructuraTercetos::nroActualTerceto(),TablaDeSimbolos::getTipo(atributo));
}

string stepsOperation(string op1, string op2, string operador){
    string op, tipo, salida; //Aca se almacena el operando a convertir en caso de ser necesario
    
    bool lessLessOp1 = revisarLessLess(op1);
    bool lessLessOp2 = revisarLessLess(op2);
    bool conversion = converOp(op1,op2,op,tipo);
    salida = EstructuraTercetos::nroSigTerceto();
    string nom1, nom2, tip1, tip2;
    dividirStringPorArroba(op1, nom1, tip1);
    dividirStringPorArroba(op2, nom2, tip2);
    if (!conversion){
        EstructuraTercetos::addTerceto(operador,nom1,nom2,tipo);
    } else if (op == "op1") {
        EstructuraTercetos::addTerceto(operador,EstructuraTercetos::nroActualTerceto(),nom2,tipo);
    } else {
        EstructuraTercetos::addTerceto(operador,nom1,EstructuraTercetos::nroActualTerceto(),tipo);
    }
    if (esObjeto(op1)){
        if (lessLessOp1) crearTerLessLessObjeto(nom1,tip1);
    }else{
        if (lessLessOp1) crearTerLessLess(nom1);
    }
    if (esObjeto(op2)){
        if (lessLessOp2) crearTerLessLessObjeto(nom2,tip2);
    }else{
        if (lessLessOp2) crearTerLessLess(nom2);
    }
    return salida;
}

bool classInFunction(string nombre){
    string ambito = Ambito::get();
    char caracterBuscado = ':';
    int cantidad = contarCaracter(ambito, caracterBuscado);
    if ( cantidad >= 2 ){
        yyerror("No es posible declarar una clase dentro de una funcion - Clase " + nombre + " dentro de funcion " + obtenerUltimaParte(ambito,caracterBuscado));
        return true;
    }else{
        return false;
    }
}

bool classInClass(string nombre){
    if (InsideClass::insideClass()){
        yyerror("No es posible declarar una clase dentro de otra - Clase " + nombre + " dentro de clase " + InsideClass::getClass());
        return true;
    } else{
        return false;
    }
}

// ======================== Pasos en declaracion de objetos y variables ========================

string stepsDeclVarAndObj(string declarado, string uso ,string declaraciones = ""){
    string key;
    if ((InsideClass::insideClass()) && (!InsideClass::insideMethod())){ //Dentro de una clase pero no dentro de un metodo
        if (declarado == InsideClass::getClassSinMain()){
            yyerror("El nombre del atributo "+declarado+" es igual al nombre de la clase");
        }else{ //El atributo a declarar no tiene el nombre de la clase
            bool hayForward = TablaDeSimbolos::getForwDecl(InsideClass::getClass()) == 0;
            if (! hayForward || ! TablaDeSimbolos::existeClave(declarado+"-"+InsideClass::getClass())){
                if (noReDeclarada(declarado+"-"+InsideClass::getClassSinMain(), "Atr")){
                    key = TablaDeSimbolos::changeKeyClass(declarado,InsideClass::getClass());
                    TablaDeSimbolos::setUso(key, "Atr");
                    TablaDeSimbolos::setClass(key,InsideClass::getClass());
                    TablaDeSimbolos::forwDeclComp(key);
                }
            }else{
                if (noReDeclarada(declarado+"-"+InsideClass::getClassSinMain(), "Atr")){
                    TablaDeSimbolos::forwDeclComp(declarado+"-"+InsideClass::getClass());
                    TablaDeSimbolos::del(declarado);
                    key=declarado+"-"+InsideClass::getClass();
                }
            }
        }
    } else {
        if (noReDeclarada(declarado, uso)) {
            key = TablaDeSimbolos::changeKey(declarado);
            VarSinInic::addVar(key);
            TablaDeSimbolos::setUso(key, uso);
        }
    }
    string salida;
    if (declaraciones != ""){
        salida = declaraciones+"&"+key;
    } else {
        salida = key;
    }
    return salida;
}

// ======================== Pasos cuando se reconoce un factor ========================

string stepsFactor(string fact, bool lessLess = false){
    string nomEncontrada, nomAtributo = "<NoExiste>";
    bool chequeoOK;
    string salida;
    if (esObjeto(fact)){
        chequeoOK = ChequearDeclObjeto(fact,nomEncontrada, nomAtributo);
        if (chequeoOK)  salida = nomEncontrada+"@"+nomAtributo;
    } else if (Ambito::insideMethod()){
        chequeoOK = ChequearDeclaracion(fact, nomEncontrada, "Var", true);
        if (chequeoOK) salida = nomEncontrada;
    }else{
        chequeoOK = ChequearDeclaracion(fact,nomEncontrada,"Var");
        if (chequeoOK) salida = nomEncontrada;
    }
    TablaDeSimbolos::del(fact);
    if (chequeoOK && lessLess) salida = "#"+salida;
    return salida;
}

// ======================== Recursion ========================

bool ChequearRecursion(string funcion, bool esMetodo){
    string ambito = obtenerUltimaParte(Ambito::get(),':');
    if(esMetodo){
        funcion = obtenerUltimaParte(funcion,'.');
        size_t indicePunto = ambito.find('-');       
        if (indicePunto != std::string::npos) {
            ambito = ambito.substr(0, indicePunto);
        }
    }
    return !(ambito == funcion);
}

// ======================== Chequeo parametro Formal mismo nombre que la funcion ========================

bool chequearNomPF(string function, string pf){
    if (function == pf){
        yyerror("Funcion " + function + " tiene el mismo nombre que el parametro formal");
        return false;
    }
    return true;
}

// ======================== Pasos cuadno se reconoce una funcion o un metodo ========================

void stepsFunctionOrMethod(){
    Ambito::del();
    EstructuraTercetos::setAmbito(Ambito::getTercetos());
    if (!(InsideClass::insideClass())){
        yymenssage("Funcion");
    }
    if ((InsideClass::insideClass()) && (InsideClass::insideMethod()) && (InsideClass::insideFuncionMethod())){
        InsideClass::insideFuncionMethod(false);
        yymenssage("Funcion");
    }else{
        if ((InsideClass::insideClass()) && (InsideClass::insideMethod()) && !(InsideClass::insideFuncionMethod())){
            InsideClass::insideMethod(false);
            yymenssage("Metodo");
        }
    }
    list<string> varSinUsar = VarSinInic::listVarTop();
    for (const string& var : varSinUsar){
        yywarning("Variable/Objeto " + var + " Sin asignacion de un valor dentro de la funcion donde se declaro");
    }
    VarSinInic::delTop();
}

// =========================== Carga de PF en Tercetos ===========================

void revisarConversion(string pila, int nroTer, string pf){
    string op = EstructuraTercetos::getPrimerOperando(pila, nroTer);
    string tipoPF = TablaDeSimbolos::getTipo(pf);
    string tipoPR;
    if (esObjeto(op)){
        tipoPR = TablaDeSimbolos::getTipo(EstructuraTercetos::getSegundoOperando(pila, nroTer));
    } else {
        tipoPR = TablaDeSimbolos::getTipo(op);
    }
    string valido = Conversion::asignacion(tipoPF,tipoPR);
    if (valido == "ERROR" ){
        if (tipoPR == "REVISAR"){
            yyerror("No es posible asignarle un atributo predeclarado sin tipo a una variable");          
        }else{
            yyerror("No es posible asignarle a un "+tipoPF+" un "+tipoPR);
        }
    } else if (tipoPF != tipoPR){
        string conversion = string(1,tipoPR[0])+"to"+string(1,tipoPF[0]);
        EstructuraTercetos::setOperador(pila, nroTer, conversion);
        EstructuraTercetos::setOperando2(pila, nroTer+1,"["+to_string(nroTer)+"]");
    }
}

void cargarTercetosPF(string metodo, string pf){
    InsideClass::inicTerVacios();
    while(! InsideClass::finTerVacios()){
        if (InsideClass::getTerVacio().metodo == metodo){
            string nroTerceto = InsideClass::getTerVacio().nroTerceto;
            string pilaTerceto = InsideClass::getTerVacio().pilaTerceto;
            nroTerceto.erase(0, 1);
            nroTerceto.erase(nroTerceto.size() - 1, 1);
            revisarConversion(pilaTerceto, stoi(nroTerceto), pf);
            EstructuraTercetos::cargarPF(pilaTerceto, stoi(nroTerceto)+1, pf, TablaDeSimbolos::getTipo(pf));
            InsideClass::delTerVacios();
        } else {
            InsideClass::avanzarTerVacios();
        }
    }
}