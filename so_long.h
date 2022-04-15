/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:04:42 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/15 15:15:23 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <stdio.h>
# include <limits.h>

typedef struct s_data
{
	void	*img;
	void	*mlx;
	void	*win;
	int		height;
	int		weight;
}			t_data;

char	*get_next_line(int fd);

#endif