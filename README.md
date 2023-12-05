# Compiler

Es un compilador desarrollado por Joaquin Benecier, David Burckhardt y Martin Vazquez Arispe, estudiantes de Ingeniería de Sistemas en la UNICEN.
Es el proyecto de cursada de la materia Diseño de Compiladores 1.

## Indice

1. [Introducción](#introducción)
2. [Instalación](#instalación)
3. [Ejecución](#ejecución)

## Introducción

Este compilador fue desarrollado en C++ con un fin academico, dentro del directorio *Lenguaje* se especifican los distintos aspectos del lenguaje y en el directorio *Informes* los informes correspondientes a cada etapa.

Dentro de *Compiler/src* se encuentra el codigo del fuente del compilador y en *Yacc* esta el ejecutable de la herramienta **YACC** mas la definición de la gramatica.

Estructura resumida del repositorio:
```
compilerProject
|-- Codigos_de_prueba
|-- Lenguaje
    |-- Lexico.pdf
    |-- Sintactico.pdf
    |-- Semantico.pdf
    |-- Generacion_de_codigo.pdf
|-- Informes
    |-- Informe_Lexico_Sintactico.pdf
    |-- Informe_Semantica_GeneracionDeCodigo.pdf
|-- Compiler
    |-- src
|-- Yacc
    |-- yacc.exe
    |-- gramatica.y
|-- README.md
```
### Salida del compilador

El compilador genera varias salidas que se pueden agrupar como impresiones por consola y archivos generados.

#### Impresiones por consola

Se generan las siguientes salidas:

- Tokens reconocidos durante el recorrido del codigo fuente
- Estructuras reconocidas
    - Clases
    - Funciones
    - Asignaciones
    - While
    - If
    - Metodos
- Errores y Warnings
- Codigo intermedio (Tercetos)
- Tabla de Simbolos

#### Archivos generados

Mismo archivo que el codigo fuente, pero cada linea con su correspondiente número
```
codigoFuente(Lineas-Numeradas).txt
```

Archivo que contiene el codigo Assembler (Este se crea si no hubo errores en la compilacion)
```
codigoFuente.asm
```
Este archivo contiene el código objeto, que es una representación intermedia del código fuente antes de ser convertido en código ejecutable (Se genera automaticamente si *MASM32 Editor* se encuentra instalado)
```
codigoFuente.obj
```
Este archivo contiene el codigo ejecutable del codigo de fuente recibido (Se genera automaticamente si *MASM32 Editor* se encuentra instalado)
```
codigoFuente.exe
```
Aclaraciones: 
- *"codigoFuente"* hace referencia al nombre que le coloco el usuario al archivo fuente.
- Para tener la salida completa hay que instalar el ensamblador *MASM32 Editor*
- El archivo *codigoFuente.asm* puede ser compilado a mano

## Instalación

Para ejecutar el compilador no se necesita tener nada instalado, pero si se desea que se genera la salida completa es necesario tener instalado el *MASM32*.

En caso de querer compilar el 

## Ejecución

Pasos:
1. Abrir consola PowerShell o cmd
2. Posicionarse dentro de la carpeta *compilerProject/Compiler/Debug*
```
compilerProject
|-- Compiler
    |-- Debug
        |-- Compiler.exe
```
3. Correr el siguiente comando:   

```bash
.\Compiler.exe {path_archivo_a_compilar}
```
Aclaraciones: 
- El path del codigo fuente no puede tener espacios
- Para una buena visualizacion de la tabla de simbolos, colocar la consola en pantalla completa