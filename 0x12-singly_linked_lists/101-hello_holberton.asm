section .data
    hello_msg db "Hello, Holberton", 10, 0  ; The message to print

section .text
    global main
    extern printf

main:
    sub rsp, 8           
    mov rdi, hello_msg  
    call printf         
    add rsp, 8           
    ret                 