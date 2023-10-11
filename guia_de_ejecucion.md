# Guia de Ejecución

Guia de ejecucion para el compilador desarrollado por Joaquin Benecier, David Burckhardt y Martin Vazquez Arispe

## Indice

1. [Windows](#windows)
2. [Linux](#linux)

## Windows

**Pasos:**
1. Abrir consola PowerShell o cmd
2. Posicionarse dentro de la carpeta *Entrega/Codigo_Ejecutable/Windows*
3. Escribir el siguiente comando:   

``` bash
./Compiler.exe {path_archivo_a_compilar}
```
Aclaracion: Si el path del archivo a compilar tiene una carpeta con un espacio en su nombre, colocar comillas dobles a toda la ruta

## Linux

**Pasos:**

1. Abrir consola de bash
2. Posicionarse dentro de la carpeta *Entrega/Codigo_Ejecutable/Linux*
3. Es recomendable cambiar los archivos de prueba al formato de linea de finalización de Unix, para esto ejecutar los siguientes comandos:
```bash
chmod +x cambiar_formato_txt.sh
```
```bash
./cambiar_formato_txt.sh
```
4. Luego se habilita la ejecución del compilador:
```bash
chmod +x Compiler.exe
```
5. Finalmente se ejecuta:
```bash
./Compiler.exe {path_archivo_a_compilar}
```
Aclaracion: Si el path del archivo a compilar tiene una carpeta con un espacio en su nombre, colocar comillas dobles a toda la ruta
