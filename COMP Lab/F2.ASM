Code Segment
Assume CS: Code
Start:
MOV BL, 8AH
MOV CL, BL ;copies content of BL onto CL
MOV AH, 4CH
INT 21H
code ends
end start
