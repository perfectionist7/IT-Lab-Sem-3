data segment
    A    dw 000Ah
    B    dw 0008h
    C    dw 0006h
    D    dw 000ch
    Ans  dw ?
data ends

code segment
             assume cs:code ,ds:data
    start:   
             mov    ax,data
             mov    ds,ax

             mov    ax,A
             mov    bx,B
             call   gcd_calc


             mov    ax,ans
             mov    bx,c
             call   gcd_calc

            mov    ax,ans
             mov    bx,d
             call   gcd_calc

            
             mov    ah,4ch
             int    21h
    gcd_calc:
    First:   cmp    ax,bx
             ja     next
             xchg   ax,bx
    next:    mov    dx,0000h
             div    bx
             cmp    dx,0000h
             jz     last
             mov    ax,dx
             jmp    First
    last:    mov    ans,bx
             ret
code ends
 end start     