/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_cpe.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 09:45:40 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/09 18:52:16 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
**	browse the map and stop at the first C
*/

int	ft_is_no_c(t_data *var)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= (var->line))
	{
		while (j < var->size)
		{
			if (var->tab[i][j] == 'C')
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}

/*
**	browse the map and stop at the first P
*/

static int ft_is_no_p(t_data *var)
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
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}

/*
**	browse the map and stop at the first E
*/

static int	ft_is_no_e(t_data *var)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= (var->line))
	{
		while (j < var->size)
		{
			if (var->tab[i][j] == 'E')
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}

/*
**	check if at least one cpe check function returns 0
*/

int ft_check_cpe(t_data *var)
{
	if (ft_is_no_c(var) || ft_is_no_e(var)
		|| ft_is_no_p(var))
		return (1);
	return (0);
}