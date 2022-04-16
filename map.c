/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:03:15 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/16 09:12:00 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <fcntl.h>
#include "so_long.h"

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

char *ft_create_malloc(void)
{
	char *tab;
	int	fd;
	fd = open("test.txt", O_RDONLY);
	tab = malloc(sizeof(char) * ft_strlen_int(get_next_line(fd)));
	return (tab);
}

int	main(void)
{
	int 	fd;
	char	*tab;
	int		size;

	
	fd = open("test.txt", O_RDONLY);
	tab = ft_create_malloc();
	tab = ft_read_to_backup_str(fd,"");
	printf("%s\n",tab);
}