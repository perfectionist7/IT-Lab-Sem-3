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
	ldr r3,[r1]
back 	cmp r2,r3
	beq exit
	bcc greater
	subs r2,r3
	b back
greater subs r3,r2
	b back
exit ldr r4,=gcd
	str r3,[r4]
stop b stop
n1 dcd 0x08
n2 dcd 0x1E
	AREA data,DATA,READWRITE
gcd dcd 0
	END
