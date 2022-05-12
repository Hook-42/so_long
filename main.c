/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:37:06 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/11 18:57:45 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	t_data	ptr;

	ft_init_struct(argc, argv, &ptr);
	ft_parsing_manager(&ptr);
	ft_create_lines(&ptr, argv[1]);
	mlx_key_hook(ptr.win, key_hook, &ptr);
	mlx_hook(ptr.win, 17, 0, ft_exit, &ptr);
	mlx_loop(ptr.mlx);
	return (0);
}
