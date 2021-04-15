    global _main
    extern _atoi
    extern _printf  
    extern _scanf
    extern _fflush  
        
    section .text 

_main: 
    push eax

    push prompt1
    call _printf
    add esp, 4

    xor eax, eax
    push eax
    call _fflush
    add esp, 4

    push n1
    push format
    call _scanf
    add esp, 8

    push prompt2
    call _printf
    add esp, 4

    xor eax, eax
    push eax
    call _fflush
    add esp, 4

    push n2
    push format
    call _scanf
    add esp, 8

    push n1
    call _printf ;test print
    add esp, 4

    push n2
    call _printf ;test print
    add esp, 4

    mov edx, 0
    mov eax, n1
    mov ecx, count
    div ecx

    cmp edx, 0


end:  
    pop eax
    mov eax, 0
    ret

    section .data
prompt1: db "Enter First Number: ", 0
prompt2: db "Enter Second Number: ", 0
format: db "%s", 0 
n1:     db  0
n2:     db  0
count:    db  1