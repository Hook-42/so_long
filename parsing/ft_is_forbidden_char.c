/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_forbidden_char.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:15:06 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/18 13:53:35 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
*	Only exist because of 25 line
*/

static int	ft_is_forbidden_char_else(char *tab, char *argv)
{
	int	i;

	i = 0;
	if (!tab)
		return (0);
	while (i < ft_size(argv))
	{
		if (tab[i] != '0' && tab[i] != '1' && tab[i] != 'C'
			&& tab[i] != 'E' && tab[i] != 'P')
		{
			return (1);
		}
		i++;
	}
		return(0);
}

/*
*	Check if forbidden character is in filedescriptor
*/

int	ft_is_forbidden_char(char *argv)
{
	t_mlc	var;
	char	*tab;
	int		i;

	var.fd = open(argv, O_RDONLY);
	tab = ft_create_malloc(argv);
	i = 0;
	while (i <= ft_how_many_line(argv))
	{
		tab = get_next_line(var.fd);
		if (ft_is_forbidden_char_else(tab, argv))
		{
			free(tab);
			return (1);
		}
		i++;
	}
	free(tab);
	return (0);
}