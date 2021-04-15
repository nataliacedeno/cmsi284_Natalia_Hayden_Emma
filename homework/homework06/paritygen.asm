        global  _main
        extern  _printf 

        section .text 
_main: 
        mov rax, 0

        cmp rsi, 1
        ince rax

parity:
        xor rdx, rdx 
        mov rcx, 2
        div rcx


end:
    
        section .data
even:   db 01101001
odd:    db 10101110

