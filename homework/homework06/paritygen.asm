; paritygen for Windows32
; nasm -fwin32 paritygen.asm && gcc paritygen.obj -o paritygen.exe   
   
        global  _main
        extern  _printf 

        section .text 
_main: 
        push ebx

top1:
        mov eax, [number]
        mov ebx, 0x1
        mov ecx, [counter]
        xor edx, edx
        and eax, ebx
        cmp eax, 0x0
        jne count

top2: 
        mov eax, [number]
        shl ebx, 1
        and eax, ebx
        cmp eax, 0x0
        jne count
        dec ecx
        cmp ecx, 0x0
        jne top2
        jmp result

count: 
        inc edx
        dec ecx
        cmp ecx, 0x0
        jne top2

result: 
        and edx, 0x1
        cmp edx, 0x1
        jne print1

print0:
        push format0
        call _printf
        pop ebx 
        ret

print1: 
        push format1
        call _printf
        pop ebx
        ret
    
        section .data
counter: db 32
number: dw 1235 ;1234 produces 0
                ;1235 produces 1

format0: db 0xA, 0xA, 'Parity bit: 0', 0xA, 0xA, 0
format1: db 0xA, 0xA, 'Parity bit: 1', 0xA, 0xA, 0


