DATA SEGMENT
    Num1 Db 96h
    Num2 Db 3Ch
    lcm  DW ?
DATA ENDS
CODE SEGMENT
          ASSUME CS: CODE, DS: DATA
    START:
          MOV    AX, DATA
          MOV    DS, AX
 
         mov ax,0000h
         mov bx,0000h
          call   LC
          MOV    AH, 4CH
          INT    21H

LC :     MOV    Al, Num1
          MOV    Bl, Num2
    FIRST:
          CMP    Al, Bl
          JA     NEXT
          XCHG   Al, Bl
    NEXT: 
             mov    dx,0000h
             div    bx
             cmp    dx,0000h
             jz     last
             mov    ax,dx
             jmp    First
    Last: 
          mov    ah,0h
          mov    al,Num1
          mul    Num2       ; ( Num1 * Num2 ) / GCD = LCM
          mov    dx,0h
          div    bx       ; gcd is stored in bx
          mov    lcm,ax
RET


CODE ENDS
END START
