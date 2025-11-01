;------------------------------------------------------------------------
;simple add method to add two integers
;------------------------------------------------------------------------

BITS 64
CPU X64

global add_int

add_int:
    push rbp
    mov rbp, rsp

    mov rax, rdi
    add rax, rsi

    pop rbp
    ret
; Tell the linker the stack need not be executable
section .note.GNU-stack progbits noalloc noexec nowrite
