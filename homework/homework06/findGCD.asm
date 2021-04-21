; findGCD for Windows32
; nasm -fwin32 findGCD.asm && gcc findGCD.obj -o findGCD.exe   
   
    global _main
    extern _atoi
    extern _printf  
    extern _scanf
    extern _fflush  
        
    section .text 

_main: 
    push ebx

    push prompt1
    call _printf

    xor eax, eax
    push eax
    call _fflush
 
    push n1
    push format
    call _scanf

    push prompt2
    call _printf
 
    xor eax, eax
    push eax
    call _fflush

    push n2
    push format
    call _scanf

Loop:
    mov ecx, [n2]
    cmp ecx, 0
    je End

    mov edx, 0
    mov eax, [n1]
    mov ecx, [n2]
    div ecx

    mov eax, [n2]
    mov [n1], eax
    mov [n2], edx
    jmp Loop

End:  
    push n1
    call _printf ; print result

    pop ebx
    mov eax, 0
    ret

    section .data
prompt1:    db "Enter First Number: ", 0
prompt2:    db "Enter Second Number: ", 0
format:     db "%s", 0 
n1:         db  0
n2:         db  0