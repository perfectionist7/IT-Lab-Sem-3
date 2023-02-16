data segment
        array1 db 10H,11H,12H,13H,14H
        array2 db 5 dup(?)
        data ends
 code segment
        assume CS:code,DS:data
        start:
                mov ax,data
                mov ds,ax
                mov cx,05
                LEA SI,array1
                LEA DI,array2
                back:
                 mov AL,[SI]
                 mov [DI],AL
                 INC SI
                 INC DI
                 LOOP back
                 mov ah,4ch
                 int 21h
                 code ends
                 end start
