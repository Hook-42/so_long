/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:01:35 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/18 16:58:00 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
*	write message on the choosen FileDescriptor
*/

void	ft_putstr_fd(char *s, int fd)
{
	int	e;

	if (!s)
		return ;
	e = write(fd, s, ft_strlen_int(s));
	e++;
}
