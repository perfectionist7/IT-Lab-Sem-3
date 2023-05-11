; 2 digit bcd to hex
data segment
bcd db 63h
hex db ?
data ends

code segment
assume cs:code,ds:data
 start: mov ax,data
        mov ds,ax

        mov al,bcd 
        mov bl,0ah

        mov cl,4
        shr al,cl     ; shift MSB to LSB pos.
       
        mul bl        ; MUL by 10
        
        mov cl,bcd   ;Add LSB to it
        and cl,0FH
        add al,cl

        mov hex,al

        mov ah,4ch
        int 21h
code ends
end start
; take decimal counter part of bcd ,multiply msb with 10 and add LSb to it

        



