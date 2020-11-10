    global _ft_strlen
    section .text

    _ft_strlen:
                mov rcx, 0 ; set counter to 0
        loop:   cmp byte[rdi + rcx], 0 ; condition until str exists (!= '\0')
                je exit 
                inc rcx
                jmp loop ; jump to the loop in any case

        exit:   mov rax, rcx ; rax = counter rcx
                ret
