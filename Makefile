# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 13:44:17 by ceatgie           #+#    #+#              #
#    Updated: 2022/04/27 12:24:39 by ceatgie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	so_long

SRCS	=	main.c\
			ft_init_struct.c\
			get_next_line/get_next_line.c\
			get_next_line/get_next_line_utils.c\
			parsing/ft_check_wall.c\
			parsing/ft_is_forbidden_char.c\
			parsing/ft_is_no_equal_line.c\
			parsing/ft_is_square.c\
			parsing/parsing_utils.c\
			parsing/ft_putstr_fd.c\
			parsing/ft_check_ber_format.c\
			parsing/ft_check_cpe.c\
			parsing/ft_parsing_manager.c\
			create_map/ft_create_lines.c\
			create_map/ft_create_map_in_tab.c\
			game/ft_mooving.c\

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