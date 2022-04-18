/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:37:06 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/18 14:10:18 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (ft_check_wall(argv[1]) || ft_is_forbidden_char(argv[1])
			|| ft_is_no_equal_line(argv[1]) || ft_is_square(argv[1]))
		{
			(void)write(1, "Error\n", 6);
			exit(0);
		}
	}
	else
		write(1, "Error, too much args\n", 22);
	return (0);
}
	