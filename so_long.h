/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:04:42 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/25 14:21:19 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include <mlx.h>
# include <fcntl.h>
# include <unistd.h>

# define ERROR_WALL 1
# define ERROR_CHAR 2
# define ERROR_LINE 3
# define ERROR_SQUARE 4
# define ERROR_FORMAT 5
# define ERROR_ARG 6

typedef struct s_data
{
	void	*img;
	void	*mlx;
	void	*win;
	int		win_height;
	int		win_weight;
	int		height;
	int		weight;
	int		x;
	int		y;
}			t_data;

typedef struct s_mlc
{
	char *tab;
	int	fd;
	int	red;
	int	size;
	int	line;
}			t_mlc;



//					Get_next_line



char	*get_next_line(int fd);
char	*ft_read_to_backup_str(int fd, char *backup_str);



//					Parsing


int		ft_check_wall(char *argv);
int		ft_is_forbidden_char(char *argv);
int		ft_is_no_equal_line(char *argv);
int		ft_is_square(char *argv);
int		ft_size(char *argv);
int		ft_strlen_int(char *s);
int		ft_how_many_line(char *argv);
char 	*ft_create_malloc(char *argv);
void	ft_putstr_fd(char *s, int fd);
int		ft_check_ber_format(char *argv);
void	ft_parsing_manager(int argc, char *argv[]);


//					Wall

void	ft_create_wall(t_data ptr, char *argv);

#endif