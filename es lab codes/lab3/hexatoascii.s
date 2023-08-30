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
	ldr r0,=src
	ldr r1,[r0]
	mov r2,r1
	and r1,#0x0f
	cmp r1,#0xa
	blo next
	add r1,#0x7
next add r1,#0x30
	ldr r3,=dst
	str r1,[r3],#4
	and r2,#0xf0
	lsr r2,#4
	cmp r2,#0xa
	blo next2
	add r2,#0x7
next2 add r2,#0x30
	str r2,[r3]
stop b stop
src dcd 0xa3
	AREA data,DATA,READWRITE
dst dcd 0
	end
	

	