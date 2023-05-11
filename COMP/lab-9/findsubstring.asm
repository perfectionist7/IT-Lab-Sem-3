print macro arg
lea dx,arg
mov ah,09h
int 21h
endm

data segment
string db 20h,?,20 dup('$')
SubString db 20h,?,20 dup('$')
enter1 db 'enter string$'
enter2 db 'enter substring$'
right db 'found$'
wrong db 'not found$'
nln db 10,13,'$'

data ends

code segment
assume cs:code,ds:data
start:
  mov ax,data
  mov ds,ax
  mov es,ax
   
  cld 
  print enter1
  print nln
  
 
  lea bx,String
  mov dx,bx
  mov ah,0Ah
  int 21h

  mov si,dx

  print enter2
  print nln
  lea bx,SubString
  mov dx,bx
  mov ah,0Ah
  int 21h

  mov di,dx
  
  inc si 
  mov dl,[si]

  inc di 
  mov dh,[di]
  
  mov cx,0h
  mov cl,dl
  sub cl,dh
  inc cx

  inc si    
  inc di     

outerloop:
         push cx
         push si  
         push di


         mov al,[si]
         cmp al,[di]
         jne skip 
         mov cx,0h
         mov cl,dh
         innerloop:    
                     mov al,[si]
                     cmp al,[di] 
                     jne skip
                     inc si    
                     inc di
                     loop innerloop
                    print right
                    jmp exit
        skip:pop di 
             pop si
             pop cx 
             inc si 
        loop outerloop
        print wrong
exit: mov ah,4ch 
       int 21h 

code ends
end start 





  