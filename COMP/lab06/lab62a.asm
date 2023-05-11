gcd_calc macro a1,b1
             mov  ax,a1
             mov  bx,b1
    First:   cmp  ax,bx
             ja   next
             xchg ax,bx
    next:    mov  dx,0000h
             div  bx
             cmp  dx,0000h
             jz   last
             mov  ax,dx
             jmp  First
    last:    mov  ans,bx
endm

data segment
    A    dw 000Ah
    B    dw 0008h
    C    dw 0006h
    D    dw 000ch
    Ans  dw ?
data ends

code segment
          assume   cs:code ,ds:data
    start:
          mov      ax,data
          mov      ds,ax

          gcd_calc a,b
          gcd_calc ans,c
          gcd_calc ans,d
          mov      ah,4ch
          int      21h
   
code ends
 end start     