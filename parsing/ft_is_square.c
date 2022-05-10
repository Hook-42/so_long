/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:25:42 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/11 00:55:28 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
*	Checks if the number of rows and columns are equal
*/

int	ft_is_square(t_data *var)
{
	if (var->size == var->line + 1)
		return (1);
	return (0);
}
