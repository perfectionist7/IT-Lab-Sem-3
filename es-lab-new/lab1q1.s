   AREA RESET,DATA,READONLY
	EXPORT __Vectors
__Vectors
	DCD 0X40001000
	DCD Reset_Handler
	ALIGN
	AREA mycode,CODE,READONLY
   ENTRY
	EXPORT Reset_Handler
Reset_Handler
	 ldr r0,=num1
	 ldr r1,=num2
STOP B STOP
	num1 dcd 0x5634
	num2 dcd 0xabcd
END