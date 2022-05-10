/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_lines.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:15:35 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/11 00:38:16 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
**	Only exists because of 25 lines
*/

static void	ft_create_lines_else(t_data *ptr, int i, int j)
{
	if (ptr->tab[i][j] == '1')
	{
		mlx_put_image_to_window(ptr->mlx, ptr->win, ptr->ast, ptr->x, ptr->y);
	}
	else if (ptr->tab[i][j] == '0')
	{
		mlx_put_image_to_window(ptr->mlx, ptr->win, ptr->vide, ptr->x, ptr->y);
	}
	else if (ptr->tab[i][j] == 'C')
	{
		mlx_put_image_to_window(ptr->mlx, ptr->win, ptr->scp, ptr->x, ptr->y);
	}
	else if (ptr->tab[i][j] == 'P')
	{
		mlx_put_image_to_window(ptr->mlx, ptr->win, ptr->fusee, ptr->x, ptr->y);
	}
	else if (ptr->tab[i][j] == 'E')
	{
		mlx_put_image_to_window(ptr->mlx, ptr->win, ptr->exit, ptr->x, ptr->y);
	}
	else if (ptr->tab[i][j] == 'K')
	{
		mlx_put_image_to_window(ptr->mlx, ptr->win, ptr->k, ptr->x, ptr->y);
	}
}

/*
**	iterates over the double array and assigns each character an image
*/

void	ft_create_lines(t_data *ptr, char *argv)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	ptr->y = 0;
	while (i <= (ptr->line))
	{
		ptr->x = 0;
		j = 0;
		while (j < ptr->size)
		{
			ft_create_lines_else(ptr, i, j);
			j++;
			ptr->x += 50;
		}
		ptr->y += 50;
		i++;
	}
}
