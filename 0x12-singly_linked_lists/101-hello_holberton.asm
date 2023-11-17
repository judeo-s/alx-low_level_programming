section .data
	msg db "Hello, Holberton", 0;
	fmt db "%s", 0xA, 0

section .text
	extern printf
	global main

main:
	push rbp
	mov rbp, rsp;

	mov	rdi, fmt
	mov	rsi, msg
	mov	rax, 0
	call printf

	pop	rbp
	mov	rax, 0
	ret
