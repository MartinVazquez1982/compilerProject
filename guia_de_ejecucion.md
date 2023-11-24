# Guia de Ejecución

Guia de ejecucion para el compilador desarrollado por Joaquin Benecier, David Burckhardt y Martin Vazquez Arispe

## Salida del Compilador

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

## Ejecucion

**Pasos:**
1. Abrir consola PowerShell o cmd
2. Posicionarse dentro de la carpeta *Entrega/Codigo_Ejecutable/*
3. Escribir el siguiente comando:   

```bash
.\Compiler.exe {path_archivo_a_compilar}
```
Aclaraciones: 
- El path del codigo fuente no puede tener espacios
- Para una buena visualizacion de la tabla de simbolos, colocar la consola en pantalla completa