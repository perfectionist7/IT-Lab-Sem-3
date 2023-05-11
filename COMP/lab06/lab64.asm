DATA SEGMENT
    Num1 Db 96h
    Num2 Db 3Ch
    Num3 Db 58h
    Num4 Db 100
    lcm  DW ?
DATA ENDS
CODE SEGMENT
          ASSUME CS: CODE, DS: DATA
    START:
          MOV    AX, DATA
          MOV    DS, AX

          mov    ax,0h
          MOV    Al, Num1
          MOV    Bl, Num2
          call   LC
          mov cx,ax

          MOV    Al, Num3
          MOV    Bl, Num4
          call   LC
          mov bx,cx
          call   LCw 
          MOV    AH, 4CH
          INT    21H

LC :  
         push ax
         push bx
    
    FIRST:
          CMP    Al, Bl
          JA     NEXT
          XCHG   Al, Bl
    NEXT: 
          DIV    Bl
          CMP    ah, 00h
          JE     LAST
          MOV    al, ah
          mov    ah,0h
          JMP    FIRST
    Last: mov ax,0h
	     mov dx,0h
          pop dx
          pop ax
          mul    dl     ; ( Num1 * Num2 ) / GCD = LCM
          mov    bh,0h
          mov    dx,0h
          div    bx       ; gcd is stored in bx
          
RET

LCW :  
         push ax
         push bx
    
    FIRST:
          CMP    Ax, Bx
          JA     NEXT
          XCHG   Ax, Bx
    NEXT: 
          DIV    Bx
          CMP    dx, 00h
          JE     LAST
          MOV    ax,dx
          JMP    FIRST
    Last: mov ax,0h
	      mov dx,0h
          pop dx
          pop ax
          mul    dx    ; ( Num1 * Num2 ) / GCD = LCM
          div    bx       ; gcd is stored in bx
          
RET


CODE ENDS
END START
