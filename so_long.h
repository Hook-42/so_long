/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:04:42 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/16 17:59:27 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_data
{
	void	*img;
	void	*mlx;
	void	*win;
	int		height;
	int		weight;
}			t_data;

typedef struct s_mlc
{
	char *tab;
	char buffer[1024];
	int	fd;
	int	red;
	int	size;
}			t_mlc;

char	*get_next_line(int fd);
char	*ft_read_to_backup_str(int fd, char *backup_str);

#endif