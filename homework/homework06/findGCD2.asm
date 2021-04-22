; findGCD2 for Windows32
; takes input from c arg
; nasm -fwin32 findGCD2.asm && gcc findGCD2.obj -o findGCD2.exe   
   
    global _findGCD2
    extern _printf  
    extern _scanf
    extern _fflush  
        
    section .text 

_findGCD2: 
    push ebx
    push ebp

    mov ebp, esp

    mov eax, [ebp + 12]
    mov ebx, [ebp + 16]

    mov [n1], eax
    mov [n2], ebx

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

    ;mov ecx, [n1]
    ;push ecx
    ;push format
    ;call _printf ; print result

    pop ebp
    pop ebx
    mov eax, [n1]
    ret

    section .data
prompt1:    db "Enter First Number: ", 0
prompt2:    db "Enter Second Number: ", 0
format:     db "%d", 0 
n1:         dd  0
n2:         dd  0

