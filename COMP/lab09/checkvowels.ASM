data segment
    buffer db 20
    len    db ?
    str    db 20 dup(?)
    vow    db "aeiouAEIOU"
    count  db 0
data ends
code segment
          assume cs:code, ds:data, es:data
    start:
          mov    ax,data
          mov    ds,ax
          mov    es,ax

          lea    dx,buffer
          mov    ah,0ah
          int    21h
          
          mov    cl,len
          mov    ch,0
          lea    si,str
    back: push   cx
          lodsb
          lea    di,vow
          mov    cx,10
          repnz  scasb
          jnz    down
          inc    count
    down: pop    cx
          mov    bl,count
          loop   back
          add count,30h
          mov dl,count
          mov ah,02h 
          int 21h
          mov    ah,4ch
          int    21h
code ends
end start

