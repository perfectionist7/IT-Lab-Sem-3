Q DW ?
R DW ?
DATA ENDS

CODE SEGMENT
ASSUME CS: CODE, DS: DATA
START:
        MOV AX, DATA
        MOV DS, AX

        MOV AX, WORD PTR A
        MOV DX, WORD PTR A + 2
        DIV B
        MOV Q, AX
        MOV R, DX

        MOV AH, 4CH
        INT 21H

CODE ENDS
END START
