/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_wall.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:21:15 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/09 18:58:15 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
*	Checks if there are only '1's in the first and last line of the map
*	and if the other lines start with '1' and end with '1'
*/

int	ft_check_wall(t_data *var)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (j < var->size)
	{
		if (var->tab[0][j] != '1' || var->tab[var->line][j] != '1')
			return (1);
		j++;
	}
	j = 0;
	while (i < var->line)
	{
		if (var->tab[i][0] != '1' || var->tab[i][var->size - 1] != '1')
			return (1);
		i++;
	}
	return (0);
}
