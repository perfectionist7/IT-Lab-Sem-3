DATA SEGMENT
   NUM1 DW 12454
   NUM2 DW 34564
   RESULT DW 2 DUP (?)
DATA ENDS

CODE SEGMENT
   ASSUME CS:CODE,DS:DATA
   START: MOV AX,DATA
          MOV DS,AX
          MOV CX,NUM2
          MOV DX,0
          MOV AX,0
    BACK: ADD AX,NUM1
          ADC DX,0
          LOOP BACK
          MOV RESULT, AX
          MOV RESULT+2,DX
          MOV AH,4CH
          INT 21H
          CODE ENDS
          END START
