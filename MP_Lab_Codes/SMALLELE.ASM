print macro msg
lea dx,msg
mov ah,09h
int 21h
endm

data segment
arr db 15h,32h,65h,32h,33h
smallele db ?
msg1 db "the smallest element in the array$"
data ends
code segment
assume cs:code, ds:data
start:
mov ax,data
mov ds,ax
lea si,arr
mov ax,00h
mov al,[si]
mov smallele,al
mov cx,5
back:
mov al,[si]
cmp smallele,al
jb l1
mov smallele,al
l1:
inc si
loop back
mov bx,0000h
mov bl,smallele
mov ah,4ch
int 21h
code ends
end start


