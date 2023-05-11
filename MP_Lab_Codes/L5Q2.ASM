;2 digit hex to bcd
data segment
hex db 0ADh
divi db 0Ah
bcd db 00h
data ends

code segment
assume cs:code,ds:data
start:
mov ax,data
mov ds,ax
mov ax,00h ; Intialize with 0
mov al,hex 
lea si,bcd
L1:
        div divi  ; divide al by 10
        mov [si],ah ; mov remainder into bcd
        inc si ; inc address loc
        cmp al,divi 
        mov ah,00h
        JAE L1
mov [si],al
mov ah,4ch
int 21h
code ends
end start
        
