;4 digit bcd to hex
DATA SEGMENT
    BCD  DW 1234h
    HEX  DW ?
DATA ENDS

CODE SEGMENT
          ASSUME CS: CODE, DS: DATA
    START:MOV    AX, DATA
          MOV    DS, AX

          CLC
          MOV    AX, BCD
          MOV    BX, 0AH
          MOV    CL, 04H
          AND    AX,000FH
          ADD   HEX,AX   ; MOV LSB in HEX

          MOV    AX,BCD
          AND    AX,00F0H
          SHR    AX,CL   ; SHR doesnt decrement count value
          MUL    BX
          ADD    HEX,AX ;Mul Nxt nibble by 10 and mov into hex

          MOV    AX,000AH
          MUL    BX
          MOV    BX,AX ; store 100 in bx
          ADD    CL,04H ; CL have vslue 8 now
         
          MOV    AX,BCD
          AND    AX,0F00H
          SHR    AX,CL
          MUL    BX
          ADD    HEX,AX

          MOV    AX,000AH
          MUL    BX
          MOV    BX,AX
          ADD    CL,04H
         
          MOV    AX,BCD
          AND    AX,0F000H
          SHR    AX,CL
          MUL    BX
          ADD    HEX,AX

          MOV    AH, 4CH
          INT    21H
CODE ENDS
END START
