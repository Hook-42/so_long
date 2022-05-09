/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_manager.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:25:26 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/09 18:59:13 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
*	Only exist because of 25 lines
*/

static void	ft_parsing_manager_else(t_data *var)
{	
	if (ft_check_cpe(var))
	{
		ft_putstr_fd("Error\nBe sure that the map contains C P and E\n", 2);
		exit(ERROR_CPE);
	}
	if (ft_is_square(var))
	{
		ft_putstr_fd("Error\nthe map is not rectangular\n", 2);
		exit(ERROR_SQUARE);
	}
	if (ft_is_forbidden_char(var))
	{
		ft_putstr_fd("Error\nPlease enter a map with valid characters\n", 2);
		exit(ERROR_CHAR);
	}
	if (ft_check_wall(var))
	{
		ft_putstr_fd("Error\nThe map is not surrounded by a wall\n", 2);
		exit(ERROR_WALL);
	}
}

/*
*	Manage parsing to resume it in 1 function
*/

void	ft_parsing_manager(t_data *var)
{
	if (var->argc < 2)
	{
		ft_putstr_fd("Error\nPlease enter a .ber file\n", 2);
		exit(ERROR_ARG);
	}
	if (var->argc > 2)
	{
		ft_putstr_fd("Error\nPlease enter a .ber file & nothing more\n", 2);
		exit(ERROR_ARG);
	}
	if (var->argc == 2)
	{
		if (ft_check_ber_format(var->argv))
		{
			ft_putstr_fd("Error\nPlease put .ber file\n", 2);
			exit(ERROR_FORMAT);
		}
		if (ft_is_no_equal_line(var))
		{
			ft_putstr_fd("Error\ncolumns are not equal\n", 2);
			exit(ERROR_LINE);
		}
	}
	ft_parsing_manager_else(var);
}
