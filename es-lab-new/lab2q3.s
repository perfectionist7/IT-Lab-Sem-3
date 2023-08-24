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
	ldr r0,=n1
	ldr r1,=n2
	ldr r2,[r0]
	mov r5,r2
	ldr r4,[r0]
	ldr r3,[r1]
back1 bl div
	cmp r4,#0
	beq exit1
	add r2,r5
	b back1
exit1 ldr r6,=lcm
	str r2,[r6]
stop b stop
div mov r4,r2
back cmp r4,r3
	blo exit
	sub r4,r3
	b back
exit bx lr
n1 dcd 0x8
n2 dcd 0x4
	AREA data,DATA,READWRITE
lcm dcd 0

	END