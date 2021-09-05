section .text
global _ft_strdup
extern _ft_strlen
extern _malloc
_ft_strdup:
	mov rcx, 0
	push rdi
	call _ft_strlen
	mov rdi, rax
	call _malloc
	pop rdi
_while:
	mov dl, [rdi + rcx]
	mov [rax + rcx], dl
	cmp [rdi + rcx], byte 0
	je	return
	inc rcx
	jmp _while
return:
	ret