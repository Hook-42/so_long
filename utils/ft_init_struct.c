/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:09:36 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/11 01:04:36 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_init_struct_else(t_data *var)
{
	var->ast = mlx_xpm_file_to_image(var->mlx, "./assets/asteroid.xpm",
			&var->height, &var->weight);
	var->vide = mlx_xpm_file_to_image(var->mlx, "./assets/vide.xpm",
			&var->height, &var->weight);
	var->scp = mlx_xpm_file_to_image(var->mlx, "./assets/soucoupe.xpm",
			&var->height, &var->weight);
	var->fusee = mlx_xpm_file_to_image(var->mlx, "./assets/fusee.xpm",
			&var->height, &var->weight);
	var->exit = mlx_xpm_file_to_image(var->mlx, "./assets/exit.xpm",
			&var->height, &var->weight);
	var->k = mlx_xpm_file_to_image(var->mlx, "./assets/k_top.xpm",
			&var->height, &var->weight);
	var->max_c = ft_how_many_c(var);
	var->nb_moove = 0;
}

void	ft_init_struct(int argc, char *argv[], t_data *var)
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
	ft_init_struct_else(var);
}
