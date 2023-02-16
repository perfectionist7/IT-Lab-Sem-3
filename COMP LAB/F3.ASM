Data Segment
num1 db 12
num2 db   ?
Data ends
Code Segment
Assume CS:Code,DS:Data
Start:
mov AX,Data
mov DS,AX
mov AL,num1
mov num2,AL
mov AH,4CH
INT 21H
Code ends
end Start
