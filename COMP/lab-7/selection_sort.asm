data segment
arr dw 0020h,0019h,0018h,0017h,0016h 
data ends

code segment
assume cs:code,ds:data
start:
mov ax,data
mov ds,ax

lea di,arr
mov cx,5

loop1: push cx
       mov bx,di
       mov si,di
    loop2: 
           mov ax,[si]
           cmp ax,[bx]
           jg skip
             mov bx,si
        skip: inc si
               inc si
    loop loop2

   mov ax,[di]
   mov dx,[bx]
   mov [di],dx
   mov [bx],ax
    
   inc di
   inc di
   pop cx
   loop loop1

mov ah,4ch
int 21h
code ends
end start
