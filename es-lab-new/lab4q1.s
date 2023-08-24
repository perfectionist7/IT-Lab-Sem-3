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
	ldr r0,=arr
	ldr r2,=count
	ldr r6,[r2]
	ldr r4,=target
	ldr r5,[r4]
back ldr r3,[r0],#4
	cmp r5,r3 
	beq exit 
	add r6,#1
	b back
exit str r6, [r2]
stop b stop
arr dcd 0x4,0x5,0x6,0x7,0x8,0x1,0x2,0x3,0x9,0xa
target dcd 0x3
	AREA data,DATA,READWRITE
count dcd 0
end 