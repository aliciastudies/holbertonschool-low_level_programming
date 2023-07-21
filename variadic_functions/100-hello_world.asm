global main	; entry point for the program
section .text

main:
 ; prepare arguments for the write syscall
 mov rax, 1	; write(
 mov rdi, 1	;	STDOUT_FILENO,
 mov rsi, msg	;	"Hello, world!",
 mov rdx, msglen;	sizeof("Hello, world!\n")
 syscall	; );

 mov rax, 60	; exit ()
 mov rdi, 0	;	EXIT_SUCCESS
 syscall	; );

section .rodata:
	msg: db "Hello, World", 10	; the string to print (10 is ascii code for new line)
	msglen: equ $ - msg		; length of string excluding null terminator



