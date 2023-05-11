data segment
buffer db 20
len db ?
str db 20 dup(?)
msg1 db "Enter the string:$"
vowels db "aeiouAEIOU$"
count db 00h
data ends
code segment
assume cs:code,ds:data
start:
mov ax,data
mov ds,ax
mov es,ax
lea dx,buffer
mov ah,0ah
int 21h
mov cl,len
mov ch,00h
lea si,str
back:
push cx
lodsb
mov cx,10
lea di,vowels
repnz scasb
jnz down
inc count
down:
pop cx
loop back
mov bx,0000h
mov bx,count
mov ah,4ch
int 21h
code ends
end start

