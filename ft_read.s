global _ft_read
extern ___error
section .text

_ft_read:
            mov rax, 0x2000003
            syscall
            jc error ; if any syscall error, jump to the label
            ret
error:
            push rax ; push to the stack
            call ___error
            pop rcx   ; recieve the error value from stack
            mov [rax], rcx ; rax point to errno
            mov rax, -1
            ret
