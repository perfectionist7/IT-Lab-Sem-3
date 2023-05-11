lcmcall macro a,b
mov ax,a
mov bx,b
j1: cmp ax,bx
ja next
xchg ax,bx
next:
mov dx,0000h
div bx
cmp dx,0000h
jz exit
mov ax,dx
jmp j1
exit:
mov ax,a
mul b
div bx
mov lcm,ax
endm

data segment
a dw 0012
b dw 0018
lcm dw ?
data ends

code segment
assume cs:code, ds:data
start:
mov ax,data
mov ds,ax
lcmcall a,b
mov ah,4ch
int 21h
code ends
end start
