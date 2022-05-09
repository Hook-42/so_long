/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_forbidden_char.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:15:06 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/09 18:58:29 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
*	Check if forbidden character is in map
*/

int	ft_is_forbidden_char(t_data *var)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= var->line)
	{
		while (j < var->size)
		{
			if (!(var->tab[i][j] == '1' || var->tab[i][j] == '0'
				|| var->tab[i][j] == 'C' || var->tab[i][j] == 'P'
				|| var->tab[i][j] == 'E'))
				return (1);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
