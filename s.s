

section .text
global _ft_strcmp
_ft_strcmp:
	mov rax, 0
_while:
	cmp [rdi + rax], byte 0
	je return
	mov bl, [rdi + rax]
	mov cl, [rsi + rax]
	cmp bl, cl
	jne return
	inc rax
	jmp _while
return:
	sub bl, cl
	movsx rax, bl
	ret
