/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:03:15 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/18 09:30:20 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <fcntl.h>
#include "so_long.h"
#include <unistd.h>

int	ft_size(void)
{
	t_mlc	var;

	var.fd = open("test.txt", O_RDONLY);
	var.red = read(var.fd, var.buffer, 1024);
	var.size = 0;
	while (var.buffer[var.size] != '\n')
		var.size++;
	return (var.size);
}

int	ft_how_many_line(void)
{
	t_mlc	var;
	int		cpt;
	int		i;

	cpt = 0;
	var.fd = open("test.txt", O_RDONLY);
	var.red = read(var.fd, var.buffer, 1024);
	i = 0;
	while (var.buffer[i] != '\0')
	{
		if (var.buffer[i] == '\n')
		{
			cpt++;
		}
		i++;
	}
	return cpt;
}

char *ft_create_malloc(void)
{
	t_mlc	var;
	var.tab = malloc(sizeof(char) * (ft_size() + 1));
	return (var.tab);
}

int	ft_is_forbidden_char(char *tab)
{
	int	i;

	i = 0;
	if (!tab)
		return (0);
	while (i < ft_size())
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

int	main(void)
{
	t_mlc	var;
	char	*tab;
	int		i;
	int		j;

	j = 0;
	var.fd = open("test.txt", O_RDONLY);
	tab = ft_create_malloc();
	i = 0;
	while (i <= ft_how_many_line())
	{
		tab = get_next_line(var.fd);
		if (ft_is_forbidden_char(tab))
		{
			printf("Error\n");
			break;
		}
		i++;
	}
}