# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: busmanov <busmanov@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 20:14:18 by busmanov          #+#    #+#              #
#    Updated: 2022/10/27 22:19:54 by busmanov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_utils.c main.c \

OBJ = ${SRC:.c=.o}

all:${NAME}

${NAME} : ${OBJ}
	${CC} ${CLAGS} -c ${SRC}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

