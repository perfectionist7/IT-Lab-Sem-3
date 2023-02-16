data segment
        array1 db 11H,12H,13H,14H,15H,16H,17H,18H,19H,20H
        array2 db 7 dup(?)
        data ends
code segment
        assume DS:data,CS:code
        start:
                MOV AX,data
                MOV DS,AX
                LEA SI,array1
                LEA DI,array2
                ADD SI,09
                ADD DI,06
                MOV CX,09
                back:
                        MOV AL,[SI]
                        MOV [DI],AL
                        DEC SI
                        DEC DI
                        LOOP back
                        MOV AH,4CH
                        INT 21H
                        CODE ends
                        end start
                       
