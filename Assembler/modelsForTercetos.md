# Modelos de Assembler para Tercetos

## Operaciones

Formato de los tercetos: ( *operator*, *operando1*, *operando2* ) - *tipo*

name -> Nombre Variable (Del programa o auxiliar) o Inmediato (Solamente en los casos que sea posible)

### SHORT

*Enteros cortos de 8 bits, por lo tanto se pueden usar los registros del procesador:*
- AH
- AL
- BH
- BL
- CH
- CL
- DH
- DL

#### *Suma*

> var1 + var2

```asm
MOV AH, var1
ADD AH, var2
MOV aux#, AH
```

#### *Resta*

> var1 - var2

```asm
MOV AL, var1
SUB AL, var2
MOV aux#, AL
```
> Primero se carga el *operando 1* y luego el *operando 2*

#### *Multiplicacion*

> var1 * var2

```asm
MOV AL, var1
IMUL AL, var2
MOV aux#, AL
```

#### *Division*

> var1 / var2

```asm
MOV AL, var1  --PREGUNTAR SI SE HACE PRIMERO VAR 1 O ES VAR 2
CBW
IDIV var2
MOV aux#, AL
```

> Primero se carga el *operando 1* y luego el *operando 2*

#### *Asignacion*

> var1 = var2

```asm
MOV AH, var2
MOV var1, AH
```

### ULONG

Enteros largo sin signo de 32 bits, por lo tanto los registro del procesador que se puede usar son:
- EAX
- EBX
- ECX
- EDX

#### *Suma*

> var1 + var2

```asm
MOV EAX, var1
ADD EAX, var2
MOV aux#, EAX
```

#### *Resta*

> var1 - var2

```asm
MOV EAX, var1
SUB EAX, var2
MOV aux#, EAX   --CORREGI DE MOV aux#, AL 
```
> Primero se carga el *operando 1* y luego el *operando 2*

#### *Multiplicacion*

> var1 * var2

```asm
MOV EAX, var1
MUL EAX, var2
MOV aux#, EAX
```

#### *Division*

> var2 / var1

```asm
MOV EAX, var2
XOR EDX, EDX
DIV var1
MOV aux#, EAX
```

> Primero se carga el *operando 1* y luego el *operando 2*

#### *Asignacion*

> var1 = var2

```asm
MOV EAX, var2
MOV var1, EAX
```

### FLOAT

Estos tipos utilizan el co-procesdor matematico y son numeros de punto flotante de 32 bits:

#### *Suma*

> var1 + var2

```asm
FLD var1  --DECIA FDL EN EL INSTRUCCIONES
FADD var2
FSTP aux#
```

#### *Resta*
> var1 - var2
```asm
FLD var1
FSUB var2
FSTP aux#
```

#### *Multiplicacion*

> var1 * var2

```asm
FLD var1
FMUL var2
FSTP aux#
```

#### *Division*
> var1 / var2

```asm
FLD var1
FDIV var2
FSTP aux#
```

#### *Asignacion*
> var1 = var2
```asm
FLD var1
FSTP var2
```

## Conversiones

#### SHORT a FLOAT

> StoF(var)

*Preguntar* El numero que se manda a convertir es de 16 bits, la salida es uno de 32?

```asm
MOV AL, var
CBW
MOV aux#, AX
FILD aux#
FSTP aux#
```

#### ULONG a FLOAT

> UtoF(var)

```asm
FILD var
FSTP aux#
```

## Comparaciones

### SHORT y ULONG

> var1 comp var2

```asm
CMP var1, var2
```

## Saltos

### SHORT

#### == 

```asm
JNE label#
```
#### !!

```asm
JE label#
```
#### <

```asm
JGE label#
```
#### > 

```asm
JLE label#
```
#### <=

```asm
JG label#
```
#### >=

```asm
JL label#
```

### ULONG y FLOAT

#### == 

```asm
JNE label#
```
#### !!

```asm
JE label#
```
#### <

```asm
JAE label#
```
#### > 

```asm
JBE label#
```
#### <=

```asm
JA label#
```
#### >=

```asm
JB label#
```
### FLOAT

>FILMINAS

```asm
FLD dword [num1]    
FCOM dword [num2]   
FSTSW aux#
MOV ax , aux#            
SAHF                
```
>CHATGPT

```asm
FLD dword [num1]    
FCOM dword [num2]   
FSTSW ax            
SAHF
```    

#### == 

```asm
JNE label#
```
#### !!

```asm
JE label#
```
#### <

```asm
JAE label#
```
#### > 

```asm
JBE label#
```
#### <=

```asm
JA label#
```
#### >=

```asm
JB label#
```