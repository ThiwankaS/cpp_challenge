;---------------------------------------------------------------------
;find the minimum of two integers
;---------------------------------------------------------------------

BITS 64
CPU X64

global min

section .text


min:
    push rbp
    mov rbp, rsp

    mov rax, rdi
    cmp rdi, rsi
    cmovg rax, rsi

    pop rbp
    ret
; Tell the linker the stack need not be executable
section .note.GNU-stack progbits noalloc noexec nowrite

