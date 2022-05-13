/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_manager.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:25:26 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/13 12:34:19 by ceatgie          ###   ########.fr       */
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
		ft_exit_parsing(var);
	}
	if (ft_check_p(var))
	{
		ft_putstr_fd("Error\nThe map can handle only one P\n", 2);
		ft_exit_parsing(var);
	}
	if (ft_is_square(var))
	{
		ft_putstr_fd("Error\nthe map is not rectangular\n", 2);
		ft_exit_parsing(var);
	}
	if (ft_is_forbidden_char(var))
	{
		ft_putstr_fd("Error\nPlease enter a map with valid characters\n", 2);
		ft_exit_parsing(var);
	}
	if (ft_check_wall(var))
	{
		ft_putstr_fd("Error\nThe map is not surrounded by a wall\n", 2);
		ft_exit_parsing(var);
	}
}

/*
*	Manage parsing to resume it in 1 function
*/

void	ft_parsing_manager(t_data *var)
{
	if (var->argc == 2)
	{
		if (ft_is_no_equal_line(var))
		{
			ft_putstr_fd("Error\ncolumns are not equal\n", 2);
			ft_exit_parsing(var);
		}
	}
	ft_parsing_manager_else(var);
}
