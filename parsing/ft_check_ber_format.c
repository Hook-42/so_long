/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ber_format.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:15:51 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/18 16:55:32 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
*	check the last 4 characters of argv[2] to see if it is  a .ber file
*/

int	ft_check_ber_format(char *argv)
{
	int	end;
	end = ft_strlen_int(argv) - 1;
	if (argv[end] != 'r' || argv[end - 1] != 'e' || argv[end - 2] != 'b'
		|| argv[end - 3] != '.')
		return (1);
	return (0);
}