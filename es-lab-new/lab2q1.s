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
	mla r2,r1,r1,r1
	lsr r3,r2,#1
	ldr r4,=ans
	str r3,[r4]
stop b stop
num dcd 0x4
	AREA data,DATA,READWRITE
ans dcd 0
	END