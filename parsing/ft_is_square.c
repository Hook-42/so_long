/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:25:42 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/18 13:52:23 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
*	Checks if the number of rows and columns are equal
*/

int	ft_is_square(char *argv)
{
	t_mlc	var;
	if (ft_size(argv) == ft_how_many_line(argv) + 1)
		return(1);
	return (0);
}
