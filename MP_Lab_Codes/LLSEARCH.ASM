print macro msg
lea dx,msg
mov ah,09
int 21h
endm
data segment
arr db 20h,40h,65h,32h,32h,43h,44h
ele db 11h
found db "element found$"
nfound db "element not found$"
nline db 10,13,"$"
data ends
code segment
assume cs:code, ds:data
start:
mov ax,data
mov ds,ax
lea si,arr
mov cx,07
back1:
mov al,[si]
cmp al,ele
je kfound
inc si
loop back1
print nfound
jmp exit
kfound:
print found
print nline
mov al,si
add al,30h
mov dl,al
mov ah,02
int 21h
exit:
mov ah,4ch
int 21h
code ends
end start
