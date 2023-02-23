Data Segment
        num1 dw 0A912H
        num2 dw ?
Data ends
Code Segment
        Assume CS: Code, DS: Data
        Start:
                MOV AX, Data
                MOV DS, AX
                MOV AX, num1
                MOV num2, AX
                MOV AH, 4CH
                INT 21H
        code ends
        end start
