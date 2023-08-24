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
	mov r0,=arr
	mov r6,#5
	mov r4,#5
back ldr r1,r0
	ldr r2,r0
back1
	mov r3,r2
	cmp r3,r1
	bhi skip
	mov r1,r2
skip add r2,#4
	subs r4,#1
	cmp r4,#0
	bne back1
	mov r3,[r0]
	mov r5,[r1]
	mov [r0],r5
	mov [r1],r3
	add r0,#4
	subs r0,#1
	bne back
stop b stop
 	AREA data,DATA,READWRITE
arr dcd 0x7,0x5,0x1,0x2,0x6
	END


	