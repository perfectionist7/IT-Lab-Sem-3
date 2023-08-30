	AREA RESET,DATA,READONLY
	EXPORT __Vectors
__Vectors
	DCD 0X10001000
	DCD Reset_Handler
	ALIGN
	AREA CODE_SEG,CODE,READONLY
	ENTRY
	EXPORT Reset_Handler

Reset_Handler
	ldr r0,=num
	ldr r1,=num2
	ldr r2,[r0]
	ldr r3,[r1]
	mov r4,r2
back bl div 
	cmp r5,#0
	beq exit 
	add r2,r4
	b back
exit ldr r6,=ans
	str r2,[r6]
stop b stop
div mov r5,r2
back1 cmp r5,r3
	blo exit2 
	sub r5,r3
	b back1
exit2 bx lr
num dcd 0x10
num2 dcd 0x0c
	AREA data,DATA,READWRITE
ans dcd 0
