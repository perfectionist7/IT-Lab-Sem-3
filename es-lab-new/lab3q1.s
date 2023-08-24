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
	ldr r3,=ans
	ldr r1,[r0]
	ldrb r2,r1
	cmp r2,0xa
	blo back1
	add r2,0x7
back1 add r2,0x30
	
	