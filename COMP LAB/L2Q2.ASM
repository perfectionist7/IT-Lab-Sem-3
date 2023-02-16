data segment
  array1 db 10H,11H,12H,13H,14H
  array2 db 3 dup(?)
  data ends
  code segment
        assume DS:data,CS:code
  start:
        MOV AX,data
        MOV DS,AX
        LEA SI,array1
        LEA DI,array2
        add SI,04
        add DI,02
        mov cx,05
        back:
                mov al,[SI]
                mov [DI],al
                dec SI
                dec DI
                loop back
                mov AH,4CH
                INT 21H
                code ends
                end start
                
                

