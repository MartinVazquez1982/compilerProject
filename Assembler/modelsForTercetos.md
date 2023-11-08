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

```asm
MOV AH, _name
ADD AH, _name
MOV _name, AH
```

#### *Resta*

```asm
MOV AL, _name
SUB AL, _name
MOV _name, AL
```
> Primero se carga el *operando 1* y luego el *operando 2*

#### *Multiplicacion*

```asm
MOV AL, _name
IMUL AL, _name
MOV _name, AL
```

#### *Division*

```asm
MOV AL, _name
CBW
IDIV _name
MOV @Aux#, AL
```

> Primero se carga el *operando 1* y luego el *operando 2*

#### *Asignacion*

```asm
MOV AH, _name
MOV _name, AH
```

### ULONG

Enteros largo sin signo de 32 bits, por lo tanto los registro del procesador que se puede usar son:
- EAX
- EBX
- ECX
- EDX

#### *Suma*

```asm
MOV EAX, _name
ADD EAX, _name
MOV _name, EAX
```

#### *Resta*

```asm
MOV EAX, _name
SUB EAX, _name
MOV _name, AL
```
> Primero se carga el *operando 1* y luego el *operando 2*

#### *Multiplicacion*

```asm
MOV EAX, _name
MUL EAX, _name
MOV _name, EAX
```

#### *Division*

```asm
MOV EAX, _name
CDQ
DIV _name
MOV _name, EAX
```

> Primero se carga el *operando 1* y luego el *operando 2*

#### *Asignacion*

```asm
MOV EAX, _name
MOV _name, EAX
```

### FLOAT

Estos tipos utilizan el co-procesdor matematico y son numeros de punto flotante de 32 bits:

#### *Suma*

```asm
FLD _name
FADD _name
FSTP _name
```

#### *Resta*

```asm
FLD _name
FSUB _name
FSTP _name
```

#### *Multiplicacion*

```asm
FLD _name
FMUL _name
FSTP _name
```

#### *Division*

```asm
FLD _name
FDIV _name
FSTP _name
```

#### *Asignacion*

```asm
FLD _name
FSTP _name
```

## Conversiones

#### SHORT a FLOAT

```asm
MOV AL, _name
CBW
MOV _name, AX
FILD _name
FSTP _name
```

#### ULONG a FLOAT

```asm
FILD _name
FSTP _name
```

## Comparaciones

### SHORT

#### == 

```asm

```

#### !!

#### < 

#### > 

#### <=

#### >=

