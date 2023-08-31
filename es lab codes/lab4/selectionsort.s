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
	mov r3,#5
back1 push {r3}
	mov r1,r0
	mov r2,r0
back ldr r4,[r1]
	ldr r5,[r2]
	cmp r4,r5
	bcs down
	mov r2,r1
down add r1,#4
	subs r3,#1
	bne back
	ldr r6,[r2]
	ldr r7,[r0]
	str r7,[r2]
	str r6,[r0]
	add r0,#4
	pop {r3}
	subs r3,#1
	bne back1
stop b stop	
	AREA data,DATA,READWRITE
num dcd 0,0,0,0,0
	end
	
	