        global _main
        extern   _atoi
        extern   _printf  
        extern   _scanf
        
        section .text 
_main: 
        push rbx

  
        mov rdi, input
        push rdi
        mov rdi, format
        push rdi 
        call _scanf
        add rsp, 8 ;adjust stack pointer 

        mov rdi, input
        push rdi 
        call _printf
        add rsp, 4 



;         add rsi, 8      ;next argument 
;         push rdx
;         push rsi 
;         mov rdx, [rsi] get second argument 
;         call _atoi
;         pop rsi
;         pop rdx 

;         load n1;
;         read 100;
;         store n1;
        
;         load n2;
;         read 0x100;
;         store n2;

;         sub n1;
;         jlz lim;
;         load limit;
;         add n1;
;         store limit;

; lim:    load limit;
;         add n2;
;         store limit;

; begin:
;         load n1;
;         mod cnt;
;         jz two;
;         jump itr8;

; two:    load n2;
;         mod cnt;
;         jz gcd;

; gcd:    load cnt;
;         write 0x200;

; itr8:   load cnt;
;         add cnst;
;         store cnt;
;         sub limit;
;         jlz begin;


; incorrect_arg: 
;         mov rdi, incorrect_arg_message 
;         call puts 
;         ret 

end:  
        pop rbx
        ret

    section .data
input:  db 0 
format: db "%d", 0 
n1:     db  0
n2:     db  0
cnt:    db  1
cnst:   db  1
limit:  db  0
incorrect_arg_message: db "Wrong number of inputs", 0 