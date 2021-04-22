global _main
    extern _makeNBOC
    section .text
_main:
    push rbx
    mov rax, 0x1
    push rax
    call _makeNBOC
    pop rax
    pop rbx

    ret