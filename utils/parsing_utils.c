/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:54:43 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/11 00:56:34 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*	
*	calculate the size of one line in File Descriptor
*/

int	ft_size(char *argv)
{
	char	buffer[1024];
	int		i;
	int		fd;
	int		red;

	i = 0;
	fd = open(argv, O_RDONLY);
	red = read(fd, buffer, 1024);
	buffer[red] = '\0';
	while (buffer[i] != '\n')
		i++;
	close(fd);
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
	int		fd;
	int		red;
	int		cpt;
	int		i;
	char	buffer[1024];

	cpt = 0;
	fd = open(argv, O_RDONLY);
	red = read(fd, buffer, 1024);
	buffer[red] = '\0';
	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
		{
			cpt++;
		}
		i++;
	}
	close(fd);
	return (cpt);
}
