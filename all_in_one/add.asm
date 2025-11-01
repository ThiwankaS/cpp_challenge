BITS 64
CPU X64

section .text

global add_int

add_int:
    push rbp
    mov rbp, rsp

    mov rax, rdi
    add rax, rsi

    pop rbp
    ret

section .note.GNU-stack progbits noalloc noexec nowrite
