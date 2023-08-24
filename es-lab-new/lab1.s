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
	 ldr r0,=result
	 add r0,#20
	 mov r1,r0
	 add r1,#4
	 mov r3,#5
back ldr r2,[r0]
	str r2,[r1]
	sub r0,#4
	sub r1,#4
	sub r3,#1
	cmp r3,#0
	bne back
STOP B STOP
	AREA data,DATA,READWRITE
result dcd 0,0,0,0,0
	END