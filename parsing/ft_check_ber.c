/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 12:14:20 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/13 12:53:36 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
**	checks if all is well before initializing
**	the different variables of the structure
*/

void	ft_check_ber(int argc, char *argv[])
{
	if (argc < 2)
	{
		ft_putstr_fd("Error\nPlease enter a .ber file\n", 2);
		exit(FAILURE);
	}
	if (argc > 2)
	{
		ft_putstr_fd("Error\nPlease enter a .ber file & nothing more\n", 2);
		exit(FAILURE);
	}
	if (argc == 2)
	{
		if (ft_check_ber_format(argv[1]))
		{
			ft_putstr_fd("Error\nPlease put .ber file\n", 2);
			exit(FAILURE);
		}
	}
}
