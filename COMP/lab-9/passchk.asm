disp_macro macro arg
lea dx,arg
mov ah,09h
int 21H
endm


data segment
actual_psd db 'Jmd@2002$'
lenght db $-actual_psd-1
kb_psd db 15 dup('$')
right_pass db 'valid password',10,13,'$'
wrong_pass db 'invalid password',10,13,'$'
entera db 'enter password',10,13,'$'
nln db 10,13,'$'
data ends

code segment
assume cs:code,ds:data
start:
  mov ax,data
  mov ds,ax
  mov es,ax

disp_macro entera

lea di,kb_psd
mov ax,00h 
mov cx,00h

input: 
      mov ah,08h
      int 21H
      cmp al,'$'
      je finish
      STOSB
      inc cl
      mov dl,'*'
      mov ah,02h
      int 21H
      jmp input

finish: disp_macro nln
       cmp cl,lenght
       jne wrong 
        lea si,actual_psd
        lea di,kb_psd
        repe cmpsb 
        jnz wrong
        disp_macro right_pass
        jmp exit




wrong: disp_macro wrong_pass
exit: mov ah,4ch
      int 21H
    
code ends
end start



      
