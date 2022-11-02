# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: busmanov <busmanov@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 20:14:18 by busmanov          #+#    #+#              #
#    Updated: 2022/10/31 02:19:13 by busmanov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_printf_utils.c ft_ptr_hex.c

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

COMPILE = $(CC) $(CFLAGS) -c

OBJ = ${SRC:%.c=%.o}

%.o: .%c
	$(COMPILE) $< -o >@

${NAME} : ${OBJ}
	ar rs ${NAME} ${OBJ}

all:${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME} 

re: fclean all

.PHONY: all clean fclean re

