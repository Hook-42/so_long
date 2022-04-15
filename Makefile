# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 13:44:17 by ceatgie           #+#    #+#              #
#    Updated: 2022/04/15 15:17:21 by ceatgie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	so_long

SRCS	=	map.c\
			get_next_line.c\
			get_next_line_utils.c\

OBJS= $(SRCS:.c=.o)

CC		=	gcc -g3

%.o: %.c
	$(CC) -I/usr/include -Imlx_linux -O3 -c $< -o $@

all : ${NAME}

$(NAME): $(OBJS)
	$(CC) $(OBJS) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:	all clean fclean re