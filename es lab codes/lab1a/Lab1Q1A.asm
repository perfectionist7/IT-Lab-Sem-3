	AREA RESET,DATA,READONLY
	EXPORT __Vectors
	
__Vectors 
	DCD 0X10010000
	DCD Reset_Handler
	
	ALIGN
	AREA CODE_SEG, CODE, READONLY
	ENTRY
	EXPORT Reset_Handler
Reset_Handler
	LDR R0,=SRC
	LDR R2,=DST
	MOV R3,10
UP
	LDR R1,[R0],#4
	STR R1,[R2],#4
	SUB R3,#1
	BNE UP
STOP B STOP
SRC DCD 0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x20
	AREA DATA_SEG,READWRITE
DST DCD 0,0,0,0,0,0,0,0,0,0
	END