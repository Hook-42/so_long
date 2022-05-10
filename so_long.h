/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:04:42 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/11 00:39:02 by ceatgie          ###   ########.fr       */
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
# define ERROR_CPE 7

typedef struct s_data
{
	int		nb_collect;
	void	*img;
	void	*ast;
	void	*exit;
	void	*scp;
	void	*fusee;
	void	*vide;
	void	*k;
	void	*mlx;
	void	*win;
	int		win_height;
	int		win_weight;
	int		height;
	int		weight;
	int		x;
	int		y;
	char	**tab;
	char	*argv;
	int		argc;
	int		i;
	int		j;
	int		size;
	int		line;
	int		max_c;
	int		nb_moove;
	
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


int		ft_check_wall(t_data *var);
int		ft_is_forbidden_char(t_data *var);
int		ft_is_no_equal_line(t_data *var);
int		ft_is_square(t_data *var);
int		ft_size(char *argv);
int		ft_strlen_int(char *s);
int		ft_how_many_line(char *argv);
void	ft_putstr_fd(char *s, int fd);
int		ft_check_ber_format(char *argv);
void	ft_parsing_manager(t_data *var);
int 	ft_check_cpe(t_data *var);
int		ft_is_no_c(t_data *var);



//					MAP

void	ft_create_lines(t_data *ptr, char *argv);
char	**ft_create_map_in_tab(t_data *var);


//					GAME

void	ft_putchar_fd(char c, int fd);
void	ft_top_moove(t_data *var);
void	ft_left_moove(t_data *var);
void	ft_right_moove(t_data *var);
void	ft_bot_moove(t_data *var);
void	ft_mooving(t_data ptr);
int 	ft_get_x_pos(char *argv, t_data *var);
int 	ft_get_y_pos(char *argv, t_data *var);
int		key_hook(int keycode, t_data *var);
void	ft_init_struct(int argc, char *argv[], t_data *var);
int		ft_how_many_c(t_data *var);
void	ft_putnbr_fd(int n, int fd);
void	ft_free(t_data *var);
#endif