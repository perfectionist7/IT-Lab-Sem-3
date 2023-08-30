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
	ldr r3,[r0]
	ldr r2,[r1]
back adds r4,r3
	adc r5,#0
	cmp r5,#1
	beq count
	add r6,#1
	cmp r2,r6
	beq exit
	b back
count add r7,#1
	add r6,#1
	cmp r2,r6
	beq exit
	b back
exit ldr r8,=ans
	str r4,[r8],#4
	str r7,[r8]
stop b stop
num dcd 0x44
num2 dcd 0x56
	AREA data,DATA,READWRITE
ans dcd 0
	end
	