/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:09:36 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/09 18:56:34 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init_tab(int argc, char *argv[], t_data *var)
{
	var->argc = argc;
	var->nb_collect = 0;
	var->argv = argv[1];
	var->size = ft_size(var->argv);
	var->line = ft_how_many_line(var->argv);
	var->tab = ft_create_map_in_tab(var);
	var->i = (ft_get_y_pos(argv[1], var)) / 50;
	var->j = (ft_get_x_pos(argv[1], var)) / 50;
	var->mlx = mlx_init();
	var->win = mlx_new_window(var->mlx, ft_size(argv[1]) * 50,
		(ft_how_many_line(argv[1]) + 1) * 50, "so_long");
	var->img_asteroid = mlx_xpm_file_to_image(var->mlx, "./asteroid.xpm", &var->height, &var->weight);
	var->img_vide = mlx_xpm_file_to_image(var->mlx, "./vide.xpm", &var->height, &var->weight);
	var->img_soucoupe = mlx_xpm_file_to_image(var->mlx, "./soucoupe.xpm", &var->height, &var->weight);
	var->img_fusee = mlx_xpm_file_to_image(var->mlx, "./fusee.xpm", &var->height, &var->weight);
	var->img_exit = mlx_xpm_file_to_image(var->mlx, "./exit.xpm", &var->height, &var->weight);
}