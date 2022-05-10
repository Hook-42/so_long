/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:22:12 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/11 00:58:04 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
**	is used to count the number of collectibles to give permission
**	to leave the game or not
*/

int	ft_how_many_c(t_data *var)
{
	int	i;
	int	j;
	int	nb_c;

	i = 0;
	j = 0;
	nb_c = 0;
	while (i <= var->line)
	{
		while (j < var->size)
		{
			if (var->tab[i][j] == 'C')
				nb_c++;
			j++;
		}
		i++;
		j = 0;
	}
	return (nb_c);
}

/*
**	is used to find the abscissa of P
*/

int	ft_get_x_pos(char *argv, t_data *var)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= (var->line))
	{
		while (j < var->size)
		{
			if (var->tab[i][j] == 'P')
				return (j * 50);
			j++;
		}
		i++;
		j = 0;
	}
	return (-50);
}

/*
**	is used to find the ordinate of P
*/

int	ft_get_y_pos(char *argv, t_data *var)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= (var->line))
	{
		while (j < var->size)
		{
			if (var->tab[i][j] == 'P')
				return (i * 50);
			j++;
		}
		i++;
		j = 0;
	}
	return (-50);
}
