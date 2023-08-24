section .data
    hello_msg db "Hello, Holberton", 10, 0  ; The message to print, followed by a new line and null terminator

section .text
    global main
    extern printf

main:
    ; Function Prologue
    sub rsp, 8    ; Adjust the stack pointer for alignment

    ; Call printf
    mov rdi, hello_msg  ; Load the address of the message into rdi
    call printf         ; Call the printf function

    ; Function Epilogue
    add rsp, 8    ; Restore the stack pointer
    ret           ; Return from the program