;selection sort
; we are dealing with index here
data segment
;arr dw 9A52h,0524h,0FA85h,8654h,9999h
 arr dw 0010h,0020h,0015h,0012h,0011h
data ends

code segment
assume cs:code,ds:data
start:
mov ax,data
mov ds,ax

lea di,arr   ; outer loop
mov cx,5    ; load cx with 5 
loop1:
        push cx  ; push into stack
        mov si,di; si is inner counter, initialize si with first ele '' ''
	mov bx,di ; initialize sml_idx(bx) with first element of unsorted arraY
        
        loop2:
                mov ax,[si] ; mov current ele into ax
                cmp ax,[bx]  ; cmp ax(current ele) with bx(small ele)
                jg L1 ; if current ele is greater ,no need to change small value ,inc si
                mov bx,si; else put si into bx 
                L1:
                inc si 
                inc si
        loop loop2
       mov ax,[di]  ;
	mov dx,[bx]
	mov [bx],ax
	mov [di],dx
inc di
inc di
pop cx	
loop loop1
mov ah,4ch
int 21h
code ends
end start

