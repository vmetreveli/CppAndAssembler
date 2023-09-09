; extern "C" int IntegerAddSub_(int a, int b, int c, int d);
section .text
global IntegerAddSub_

; IntegerAddSub_ - Calculate a + b + c - d
;
; Parameters:
;   rdi = a
;   rsi = b
;   rdx = c
;   rcx = d
; Returns:
;   rax = a + b + c - d
IntegerAddSub_:
    mov     rax, rdi       ; rax = a
    add     rax, rsi       ; rax = a + b
    add     rax, rdx       ; rax = a + b + c
    sub     rax, rcx       ; rax = a + b + c - d
    ret

 ;;-f elf64