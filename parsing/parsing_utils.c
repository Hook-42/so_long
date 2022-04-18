/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:54:43 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/18 13:54:31 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*	
*	calculate the size of one line in File Descriptor
*/

int	ft_size(char *argv)
{
	t_mlc	var;
	char	buffer[1024];
	int		i;

	i = 0;
	var.fd = open(argv, O_RDONLY);
	var.red = read(var.fd, buffer, 1024);
	buffer[var.red] = '\0';
	while (buffer[i] != '\n')
		i++;
	return (i);
}

/*	
*	Calculate the size of the tab
*/

int	ft_strlen_int(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
*	Calculate how many \n there is in FileDescriptor to know how many 
*	get_next_line we have to do to read the entire file
*/

int	ft_how_many_line(char *argv)
{
	t_mlc	var;
	int		cpt;
	int		i;
	char	buffer[1024];

	cpt = 0;
	var.fd = open(argv, O_RDONLY);
	var.red = read(var.fd, buffer, 1024);
	buffer[var.red] = '\0';
	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
		{
			cpt++;
		}
		i++;
	}
	return cpt;
}

/*
*	Create array to put every return of Get_next_line
*/

char *ft_create_malloc(char *argv)
{
	char	*tab;
	tab = malloc(sizeof(char) * (ft_size(argv) + 1));
	if(!tab)
		return (NULL);
	return (tab);
}
