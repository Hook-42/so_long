/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_no_equal_line.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:19:29 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/18 13:52:17 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
*	Check if every line of FileDescriptor are equal
*/

int	ft_is_no_equal_line(char *argv)
{
	int		i;
	t_mlc	var;
	char	*tab;

	var.fd = open(argv, O_RDONLY);
	tab = ft_create_malloc(argv);
	i = 0;
	if(!tab)
		return (1);
	while (i < ft_how_many_line(argv))
	{
		tab = get_next_line(var.fd);
		if (ft_strlen_int(tab) != ft_size(argv) + 1)
		{
			free(tab);
			return (1);
		}
		i++;
	}
	tab = get_next_line(var.fd);
	if (ft_strlen_int(tab) != ft_size(argv))
	{	
		free(tab);
		return (1);
	}
	free(tab);
	return (0);
}