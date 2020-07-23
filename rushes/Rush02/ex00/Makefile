# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adenhez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/16 10:14:02 by adenhez           #+#    #+#              #
#    Updated: 2020/07/19 22:39:56 by adenhez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_hash1.c srcs/ft_hash2.c  srcs/ft_strcmp.c srcs/ft_split.c srcs/ft_strdup.c srcs/ft_strjoin.c srcs/ft_list_item.c srcs/ft_list_item2.c srcs/main.c srcs/ft_file_error.c srcs/ft_putstr.c srcs/ft_trim.c srcs/ft_strlen.c srcs/ft_hash_error.c srcs/ft_isnum.c srcs/ft_arg_error.c srcs/ft_process.c srcs/ft_process2.c


OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= rush-02
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
