# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcmp.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 15:39:29 by amouhtal          #+#    #+#              #
#    Updated: 2021/05/19 15:39:30 by amouhtal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


section .text
	global _ft_strcmp
_ft_strcmp:
	mov rax, 0
_ft_cmp:
	mov bl, [rdi + rax]
	mov cl, [rsi + rax]
	cmp bl, cl
	jne	_ret
	cmp bl, 0
	je _ret
	inc rax
	jmp _ft_cmp
_ret:
	sub	bl, cl
	movsx rax, bl
	ret