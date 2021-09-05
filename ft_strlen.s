# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 15:39:47 by amouhtal          #+#    #+#              #
#    Updated: 2021/05/19 15:39:49 by amouhtal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text

global _ft_strlen

_ft_strlen:
	mov rax , 0
_while:
	cmp[rdi + rax], byte 0
	je _end
	inc rax
	jmp _while
_end:
	ret