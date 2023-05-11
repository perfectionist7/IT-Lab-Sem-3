;hex to binary (little endian format) will be stored as 10 10 11 11 but in unpacked form
data segment
hex db 0fah
two db 2h
bin db ?
data ends

code segment
assume cs:code,ds:data
start: mov ax,data
       mov ds,ax
       clc
  
  mov bl,00
  mov bin,bl ;intialse bin to 00
  mov bl,hex; mov hex into bl
  mov cl,4h; load 4 into cl
  mov dl,0h;intialize dl to 0
  lea si,bin
        shl bl,cl ; Bring LSb to the front and remove msb 
        jmp lsb    ; store lsb first
    MSB:            ; store msb now
         mov bl,hex
          mov cl,4
  lsb: 
    convert:shl bl,1
            jc setbit
            jmp output
            setbit: 
                    mov [si],1h
                    
            output:inc si
                   add dl,1 ;keeps count of bits processed
  loop convert
mov cl,8h    ; if all 8 bits are processed come out of loop
sub cl,dl

jnz MSB ; next to be processed is msb after lsb
mov ah,4ch
int 21h

code ends
end start