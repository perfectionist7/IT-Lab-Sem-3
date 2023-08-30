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
	and r1,#0x00ff
	cmp r1,#0x40
	blo below
	subs r1,#0x7
below subs r1,#0x30
	lsl r1,#4
	ldr r2,[r0]
	and r2,#0xff00
	lsr r2,#8
	cmp r2,#0x40
	blo below1
	subs r2,#0x7
below1 subs r2,#0x30
	add r1,r2
	ldr r3,=ans
	str r1,[r3]	
stop b stop
num dcd 0x3642
	AREA data,DATA,READWRITE
ans dcd 0
	end
	