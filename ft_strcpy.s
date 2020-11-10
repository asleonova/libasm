global _ft_strcpy
section .text

_ft_strcpy:
            mov rcx, 0 ; set counter to 0
      loop: cmp byte[rsi + rcx], 0 ; condition until str source exists (!= '\0')
            je exit
            mov al, byte[rsi + rcx] ; al = source char
            mov byte[rdi + rcx], al ; dest = al
            inc rcx
            jmp loop

exit:       
            mov al, byte[rsi + rcx] ; copy '\0'
            mov byte[rdi + rcx], al 
            mov rax, rdi
            ret