global _ft_strcmp
section .text

_ft_strcmp:
            mov rcx, 0
    loop:   cmp byte[rdi + rcx], 0
            je exit
            cmp byte[rsi + rcx], 0
            je exit
            mov al, byte[rdi + rcx]
            cmp byte[rsi + rcx], al 
            jne exit
            inc rcx
            jmp loop
            
exit:
            mov rax, rdx
            ret
