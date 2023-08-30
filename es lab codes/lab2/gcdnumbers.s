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
	ldr r2,[r0]
	ldr r3,[r1]
back cmp r2,r3
	cmp r2,r3
	beq exit 
	subhi r2,r3
	sublo r3,r2
	b back 
exit ldr r4,=ans
	str r2,[r4]
stop b stop
num dcd 0x30
num2 dcd 0x24
	AREA data,DATA,READWRITE
ans dcd 0
	end