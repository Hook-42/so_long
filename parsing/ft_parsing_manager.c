/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_manager.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:25:26 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/25 17:26:05 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
*	Only exist because of 25 lines
*/

static void	ft_parsing_manager_else(int argc, char *argv[])
{
	if (ft_is_square(argv[1]))
	{
		ft_putstr_fd("Error\nthe map is not rectangular\n", 2);
		exit(ERROR_SQUARE);
	}
	if (ft_is_forbidden_char(argv[1]))
	{
		ft_putstr_fd("Error\nPlease enter a map with valid characters\n", 2);
		exit(ERROR_CHAR);
	}
	if (ft_check_wall(argv[1]))
	{
		ft_putstr_fd("Error\nThe map is not surrounded by a wall\n", 2);
		exit(ERROR_WALL);
	}
}

/*
*	Manage parsing to resume it in 1 function
*/

void	ft_parsing_manager(int argc, char *argv[])
{
	if (argc < 2)
	{
		ft_putstr_fd("Error\nPlease enter a .ber file\n", 2);
		exit(ERROR_ARG);
	}
	if (argc > 2)
	{
		ft_putstr_fd("Error\nPlease enter a .ber file & nothing more\n", 2);
		exit(ERROR_ARG);
	}
	if (argc == 2)
	{
		if (ft_check_ber_format(argv[1]))
		{
			ft_putstr_fd("Error\nPlease put .ber file\n", 2);
			exit(ERROR_FORMAT);
		}
		if (ft_is_no_equal_line(argv[1]))
		{
			ft_putstr_fd("Error\ncolumns are not equal", 2);
			exit(ERROR_LINE);
		}
	}
	ft_parsing_manager_else(argc, argv);
}
