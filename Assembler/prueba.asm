.MODEL small
.STACK 200h

.DATA
    num1 dw 5       ; Primer número
    num2 dw 7       ; Segundo número
    result dw ?     ; Variable para almacenar el resultado

.CODE
START:
    mov ax, @data   ; Inicializa DS
    mov ds, ax

    ; Llama a la función sumar
    mov ax, num1
    mov bx, num2
    call suma

    ; El resultado estará ahora en la variable 'result'
    
    ; Tu código aquí (puedes mostrar el resultado, por ejemplo)
    
    ; Termina el programa
    mov ah, 4Ch     ; Función para terminar el programa
    int 21h         ; Interrupción para llamar a la función del sistema operativo

suma PROC
    ; Procedimiento para sumar dos números
    ; Parámetros:
    ;   AX = primer número
    ;   BX = segundo número
    ; Devuelve:
    ;   AX = resultado de la suma
    
    add ax, bx      ; Suma los dos números
    mov result, ax  ; Almacena el resultado en 'result'
    
    ret             ; Retorna de la función
suma ENDP

END START
