        
        global main
         extern printf
 main:

        mov edi,format
        xor eax, eax
        call printfmov eax, 0
        return
format: db 'Hello, Holberton\n' ,0        
            