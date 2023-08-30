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
	mov r2,r1
	and r1,#0x0f
	and r2,#0xf0
	lsr r2,#4
	mov r6,#0xa
	mul r4,r2,r6
	add r4,r1
	ldr r3,=ans
	str r4,[r3]
stop b stop
num dcd 0x42
	AREA data,DATA,READWRITE
ans dcd 0
	end
	