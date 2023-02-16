data segment
     array1 db 10H,11H,12H,13H,14H,15H,16H,17H,18H,19H
     array2 db 20H,21H,22H,23H,24H,25H,26H,27H,28H,29H
     data ends
 code segment
    assume CS:code,DS:data
    start:
          mov ax,data
          mov ds,ax
          LEA SI,array1
          LEA DI,array2
          mov cx,0AH
          back:
              mov AL,[SI]
              mov BL,[DI]
              mov [DI],AL
              mov [SI],BL
              INC SI
              INC DI
              LOOP back
              mov ah,4ch
              int 21h
              code ends
              end start

