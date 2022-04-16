/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:04:42 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/16 09:09:02 by ceatgie          ###   ########.fr       */
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

char	*get_next_line(int fd);
char	*ft_read_to_backup_str(int fd, char *backup_str);

#endif