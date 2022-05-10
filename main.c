/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 13:37:06 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/11 01:03:25 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free(t_data *var)
{
	int	i;

	i = var->line;
	mlx_clear_window(var->mlx, var->win);
	mlx_destroy_window(var->mlx, var->win);
	while (i >= 0)
	{
		free(var->tab[i]);
		i--;
	}
	free(var->tab);
	exit(0);
}

int	main(int argc, char *argv[])
{
	t_data	ptr;

	ft_init_struct(argc, argv, &ptr);
	ft_parsing_manager(&ptr);
	ft_create_lines(&ptr, argv[1]);
	mlx_key_hook(ptr.win, key_hook, &ptr);
	mlx_loop(ptr.mlx);
	return (0);
}
