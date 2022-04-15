/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:03:15 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/15 17:24:26 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <fcntl.h>
#include "so_long.h"

int	main(void)
{
	int 	fd;
	char	*tab;
	int		size;

	fd = open("test.txt", O_RDONLY);
}