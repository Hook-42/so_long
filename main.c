/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:37:06 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/09 18:56:57 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	t_data	ptr;

	ft_init_tab(argc, argv, &ptr);
	ft_parsing_manager(&ptr);
	ft_create_lines(&ptr, argv[1]);
	mlx_key_hook(ptr.win, key_hook, &ptr);
	mlx_loop(ptr.mlx);
	return (0);
}