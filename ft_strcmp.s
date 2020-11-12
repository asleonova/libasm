global _ft_strcmp
section .text

_ft_strcmp:
            mov rax, 0
            mov rcx, 0
            mov rdx, 0
    loop:   cmp byte[rdi + rcx], 0 ; compare s1 with '\0'
            je exit
            cmp byte[rsi + rcx], 0 ; compare s2 with '\0'
            je exit
            mov al, byte[rdi + rcx] ; al = s1
            cmp byte[rsi + rcx], al  ; compare s2 with s1
            jne exit ; exit if not equal
            inc rcx
            jmp loop
            
exit:       
            mov al, byte[rdi + rcx] 
            mov dl, byte[rsi + rcx]  
            sub rax, rdx
            ret
