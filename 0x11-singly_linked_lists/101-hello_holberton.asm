section .text
	global main

main:
	mov	edx, len
	mov	ecx, msg	;message variable
	mov 	ebx, 1		;write to standard output
	mov	eax, 4
	int	0x80		;call kernel

	mov	eax, 1 		;system call (sys_exit)
	int	0x80		;call kernel

section .data
msg db 'Hello, Coding', 0xa	;message to print
len equ $ - msg			;length of the string
