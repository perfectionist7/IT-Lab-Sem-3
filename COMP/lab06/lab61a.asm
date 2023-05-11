gcd_calc macro c,d
mov ax,c
mov bx,d
First: cmp ax,bx
       ja next
       xchg ax,bx
next: mov dx,0000h
      div bx
      cmp dx,0000h
      jz last
      mov ax,dx
      jmp First
last: mov ans,bx
endm
data segment
A dw 000Ah
B dw 0008h
Ans dw ?
data ends

code segment
assume cs:code ,ds:data
start:
    mov ax,data
    mov ds,ax
 gcd_calc A,B
   mov ah,4ch
      int 21h
 code ends
 end start     