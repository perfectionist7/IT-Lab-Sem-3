disp_macro macro arg
lea dx,arg
mov ah,09h
int 21H
endm

data segment
string db 10 dup('$')
entersss db 'enter string',10,13,'$'
wrong db 'NOT A PALINDROME ',10,13,'$'
right db 'PALindrome',10,13,'$'
nln db 10,13,'$'
data ends

code segment
assume cs:code,ds:data
start:
  mov ax,data
  mov ds,ax
  mov es,ax

  disp_macro entersss
  
  lea dx,string
  mov ah,0ah
  int 21H
  
  
  
  mov bx,00h 


  mov si,dx   ; take legnht ,divide by 2 and save it in CL
  inc si
  
  mov ax,00h 
  mov al,[si]
  mov bl,02h
  div bl
  
  mov cx,00h
  mov cl,al
  
  mov di,si   ; point di to last character

  mov dx,00h 
  mov dl,[si]
  add di,dx

  inc si
disp_macro nln
compare: mov al,[si]
         cmp al,[di]
         jne exit 
         inc si 
         dec di 
         loop compare
         
         disp_macro right
         jmp byebye

exit: disp_macro wrong
byebye: mov ah,4ch
        int 21h
code ends
end start


  
  


