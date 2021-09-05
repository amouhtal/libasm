# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 15:39:35 by amouhtal          #+#    #+#              #
#    Updated: 2021/05/19 15:39:38 by amouhtal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
    global _ft_strcpy
_ft_strcpy:
    mov rax, 0
_print:
    mov cl, [rsi + rax]
    mov [rdi + rax], cl
    cmp [rsi + rax], byte 0
    je _end
    inc rax
    jmp _print
_end:
    mov cl, 0
    mov rax, rdi
    ret