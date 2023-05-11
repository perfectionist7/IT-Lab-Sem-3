disp_macro macro arg
              lea dx,arg
              mov ah,09h
              int 21h
endm
data segment
s db '2 digit hex counter:',10,13,'$'
cr db 13,'$'
data ends

code segment
assume     cs:code, ds:data
   Start:   Mov        ax,data
            mov        ds,ax
    
    mov bl,50h

    disp_macro s
    BK:  
        call disp_hex 
        call delay

        mov dl,0ffh
        mov ah,06h
        int 21h
        jnz exit

       mov al,bl
       add al,01
       daa
       mov bl,al
       jmp BK
    
exit: 
     mov ah,4ch
     int 21h
disp_hex:
    mov dl,bl
    and dl,0f0h
    mov cl,04
    shr dl,cl
   
    add dl,30h
    mov ah,02h
    int 21h

mov dl,bl
and dl,0fh
   
    add dl,30h
    mov ah,02h
    int 21h
disp_macro cr
ret


delay:
  mov di,0fffh
lp1: mov si,0ffh
  lp2:dec si
      jnz lp2
      dec di
      jnz lp1
ret
code ends 
end start
