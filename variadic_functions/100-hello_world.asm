; File: 100-hello_world.asm
; 64-bit assembly program that prints "Hello, World"

    global main

    section .text

main:
    ; write(1, message, 13)
    mov rax, 1          ; syscall nömrəsi: sys_write (1)
    mov rdi, 1          ; fayl deskriptoru: stdout (1)
    mov rsi, message    ; yazılacaq string-in ünvanı
    mov rdx, 13         ; string-in uzunluğu (Hello, World + \n)
    syscall             ; sistem çağırışını icra et

    ; exit(0)
    mov rax, 60         ; syscall nömrəsi: sys_exit (60)
    xor rdi, rdi        ; status kodu: 0 (xor rdi, rdi 'mov rdi, 0'-dan daha effektivdir)
    syscall             ; sistem çağırışını icra et

    section .data
message:
    db "Hello, World", 10 ; 10 yeni sətir simvoludur (\n)
