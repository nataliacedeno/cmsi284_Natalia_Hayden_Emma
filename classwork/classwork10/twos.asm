         global      start                   ; on Linux this should be "_start"

         section     .text
start:   mov         rax, 0x02000004         ; system call for write [Linux should be "_start"]
         mov         rdi, 1                  ; file handle 1 is stdout
         mov         rsi, message            ; address of string to output
pow:     ;shl         rsi, 1                  ; shift left 1 bit
         ;mov         r8, [message]       
         mov         rdx, 7                  ; number of bytes
         syscall                             ; invoke operating system to do the write
         cmp         rsi, 1000000            ; compare power to limit
         ;jl          pow                     ; loop back to power
         mov         rax, 0x02000001         ; system call for exit [Linux use "60"]
         xor         rdi, rdi                ; exit code 0
         syscall                             ; invoke operating system to exit

         section     .data
message: dw          49