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
	bl fact
	ldr r3,=ans
	str r1,[r3]
stop b stop
fact cmp r1,#1
	beq exit
	push {r1,lr}
	sub r1,#1
	bl fact
	pop {r2,lr}
	mul r1,r2
exit bx lr 
num dcd 0x7
	AREA data,DATA,READWRITE
ans dcd 0
	end
	