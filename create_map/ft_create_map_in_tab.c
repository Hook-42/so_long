/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map_in_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:02:40 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/10 00:11:46 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
**	the function creates a double array and takes the map.
**	which allows to read the map in a table rather than in the fd directly
*/

char	**ft_create_map_in_tab(t_data *var)
{
	int		i;
	char	**tab;
	int		fd;

	i = 0;
	tab = malloc(sizeof(char *) * (var->line + 1));
	if (!tab)
		return (NULL);
	while (i <= var->line)
	{
		tab[i] = malloc(sizeof(char) * (var->size + 1));
		if (!tab)
			return (NULL);
		i++;
	}
	fd = open(var->argv, O_RDONLY);
	i = 0;
	while (i <= var->line)
	{
		tab[i] = get_next_line(fd);
		i++;
	}
	close(fd);
	return (tab);
}
