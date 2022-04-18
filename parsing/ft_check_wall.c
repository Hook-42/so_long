/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_wall.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:21:15 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/18 13:51:52 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
*	Only Exist because of 25 lines
*/

static int	ft_check_full_wall(char *tab)
{
	int		j;

	j = 0;
	while (j < ft_strlen_int(tab) - 1)
	{
		if (tab[j] != '1')
			return (0);
		j++;
	}
	return (1);
}

/*
*	Checks if there are only '1's in the first and last line of the filedescriptor
*	and if the other lines start with '1' and end with '1'
*/

int	ft_check_wall(char *argv)
{
	int		i;
	t_mlc	var;
	char	*tab;
	int		j;

	j = 0;
	var.fd = open(argv, O_RDONLY);
	tab = ft_create_malloc(argv);
	i = 1;
	if(!tab)
		return (0);
	tab = get_next_line(var.fd);
	if (!ft_check_full_wall(tab))
		return (1);
	while (i < ft_how_many_line(argv))
	{
		tab = get_next_line(var.fd);
		if (tab[0] != '1' || tab[ft_size(argv) - 1] != '1')
			return (1);
		i++;
	}
	tab = get_next_line(var.fd);
	if (!ft_check_full_wall(tab))
	{
		free(tab);
		return (1);
	}
	free(tab);
	return (0);
}
