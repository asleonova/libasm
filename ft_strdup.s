global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_strcpy
section .text

_ft_strdup:
            call _ft_strlen
            inc rax ; add one more symbol for '\0'
            push rdi
            mov rdi, rax ; put len + '\0' to rdi
            call _malloc
            cmp rax, 0
            je  error ; if memory wasn't allocated (rax == 0), jump to exit
            pop rdi ; recieve from stack 
            mov rsi, rdi ; src for copy
            mov rdi, rax ; dest for copy
            call _ft_strcpy
            ret

    error: mov rax, 0
           ret


