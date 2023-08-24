	AREA RESET,DATA,READONLY
	EXPORT __Vectors
__Vectors
	DCD 0X40001000
	DCD Reset_Handler
	ALIGN
	AREA CODE_SEG,CODE,READONLY
   ENTRY
	EXPORT Reset_Handler
Reset_Handler
	ldr r0,=num
	mov r1,r0
	add r1,#36
	mov r2,#5
back ldr r3,[r0]
	ldr r4,[r1]
	str r3,[r1]
	str r4,[r0]
	add r0,#4
	sub r1,#4
	sub r2,#1
	cmp r2,#0
	bne back
STOP B STOP
	AREA data,DATA,READWRITE
num dcd 0,0,0,0,0,0,0,0,0,0
	END