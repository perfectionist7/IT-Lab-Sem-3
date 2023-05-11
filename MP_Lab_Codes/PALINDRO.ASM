print macro msg
        lea dx,msg
mov ah,09h
int 21h
endm
data segment
buffer db 20
len db ?
str db 20 dup(?)
msg1 db "palindrome$"
msg2 db "not palindrome$"
msg3 db 10,13,"$"
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
print msg3
mov al,len
mov ah,0
mov bl,2
div bl
mov cl,al
mov ch,00h
lea si,str
lea di,str
mov al,len
mov ah,00h
add di,al
mov ax,000h
dec di
back:
cld
lodsb
std
scasb
jnz down
print msg1
jmp exit
down:
print msg2
exit:
mov ah,4ch
int 21h
code ends
end start
