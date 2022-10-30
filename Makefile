# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: busmanov <busmanov@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 20:14:18 by busmanov          #+#    #+#              #
#    Updated: 2022/10/28 23:01:03 by busmanov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_utils.c main.c \

OBJ = ${SRC:.c=.o}

all:${NAME}

${NAME}
	${CC} ${CLAGS} -c ${SRC}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
