;hex to binary
data segment
hex db 44h

data ends

code segment
assume cs:code,ds:data
start: mov ax,data
       mov ds,ax
       clc
  mov bl,hex
  mov cl,8h
  convert: shl bl,1
            jc setbit
            mov dl,'0'
            jmp output
            setbit: 
                    mov dl,'1'
            output: mov ah,02h
                    int 21h
loop convert

mov ah,4ch
int 21h

code ends
end start


    