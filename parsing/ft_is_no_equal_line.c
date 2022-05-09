/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_no_equal_line.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:19:29 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/09 18:39:06 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
*	Check if every line of map are equal
*/

int	ft_is_no_equal_line(t_data *var)
{
	int	size;
	int	i;

	size = ft_strlen_int(var->tab[0]);
	while (i < var->line)
	{
		if (ft_strlen_int(var->tab[i]) != size)
			return (1);
		i++;
	}
	if (ft_strlen_int(var->tab[i]) != size - 1)
			return (1);
	return (0);
}