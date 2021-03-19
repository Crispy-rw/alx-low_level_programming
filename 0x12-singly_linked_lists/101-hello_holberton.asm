section .data
	fmt db	"%s", 10, 0
	msg db	"Hello, Holberton", 0

	section .text
	extern printf
	global _start

_start:
	push	rbp
	mov	rsi, msg
	mov	rdi, fmt
	mov	rax, 0
	call 	printf
	pop	rbp
	mov	rax, 0
	ret

