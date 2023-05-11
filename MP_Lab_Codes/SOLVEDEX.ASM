data segment
num1 db 55h,32h,66h,0e3h,0f1h,22h,33h
num2 db 22h,66h,55h,0a1h,0ffh,0ffh,22h
num3 db 10 dup(?)
data ends
code segment
assume cs:code, ds:data
start:
mov ax,data
mov ds,ax
lea si,num1
lea di,num2
lea bx,num3
mov dl,0
mov cx,7
back:
clc
mov ax,[si]
sub ax,[di]
mov [bx],ax
inc bx
sbb dl,0
mov [bx],dl
mov dl,0
inc si
inc di
inc bx
loop back
mov ah,4ch
int 21h
code ends
end start
