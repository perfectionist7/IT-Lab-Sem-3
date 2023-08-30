; divide by a and store the remainder

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
	ldr r1,[r0]
back bl divide
	cmp r1,#0
	bne back
	ldr r6,=ans
	str r5,[r6]
stop b stop
divide mov r2,r1
	mov r3,#0
back1 cmp r2,#0xa
	blo exit
	sub r2,#0xa
	add r3,#1
	b back1
exit lsl r2,r4
	add r5,r2
	add r4,#4
	mov r1,r3
	bx lr 
num dcd 0xa7
	AREA data,DATA,READWRITE
ans dcd 0
	end 