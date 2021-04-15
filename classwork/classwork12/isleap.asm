    global _main
    extern _printf
    extern _scanf
    extern _fflush

    section .text
_main:
    push eax
    push ebx
    push ecx

    push prompt
    call _printf
    add esp, 4

    xor eax, eax
    push eax
    call _fflush
    add esp, 4

    push input
    push format
    call _scanf
    add esp, 8

    push input
    call _printf
    add esp, 4

    pop ecx
    pop ebx
    pop eax
    mov eax, 0
    ret

prompt: db "Enter a year: ", 0
yesmsg: db "Yes", 0
nomsg: db "No", 0
format: db '%d', 0
newline: db 10, 0
input: db 0
