DATA SEGMENT
A DW 0009H
B DB 03H
Q DB ?
R DB ?
DATA ENDS

CODE SEGMENT
ASSUME CS: CODE, DS: DATA
START:
        MOV AX, DATA
        MOV DS, AX

        MOV AX, A
        DIV B
        MOV Q, AL
        MOV R, AH

        MOV AH, 4CH
        INT 21H

CODE ENDS
END START

