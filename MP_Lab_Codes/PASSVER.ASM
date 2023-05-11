data segment
msg1 db "Enter the password$"
msg2 db "Invalid password$"
msg3 db "Valid password$"
msg4 db "*$"
msg5 db 10,13, "$"
apass db 10 dup(?)
password db "ayushisgod$"
data ends
code segment
assume cs:code,ds:data,es:data
start:
mov ax,data
mov ds,ax
mov es,ax
lea si,apass
mov cx,10
back:
mov ah,08h
int 21h
mov [si],al
inc si
mov dl,msg4
mov ah,02h
int 21h
loop back
mov cx,0000h
mov cx,10
lea si,apass
lea di,password
repz cmpsb
jnz down
lea dx,msg5
mov ah,09h
int 21h
lea dx,msg3
mov ah,09h
int 21h
down:
lea dx,msg2
mov ah,09
int 21h
mov ah,4ch
int 21h
code ends
end start
