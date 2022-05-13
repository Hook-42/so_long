/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 16:03:55 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/13 12:52:31 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
**	exit the program cleanly by freeing everything that was used by the program
*/

int	ft_exit(t_data *var)
{
	int	i;

	i = 0;
	while (i <= var->line)
	{
		free(var->tab[i]);
		i++;
	}
	free(var->tab);
	mlx_clear_window(var->mlx, var->win);
	mlx_destroy_image(var->mlx, var->ast);
	mlx_destroy_image(var->mlx, var->exit);
	mlx_destroy_image(var->mlx, var->scp);
	mlx_destroy_image(var->mlx, var->fusee);
	mlx_destroy_image(var->mlx, var->vide);
	mlx_destroy_image(var->mlx, var->k);
	mlx_destroy_window(var->mlx, var->win);
	mlx_destroy_display(var->mlx);
	free(var->mlx);
	exit(SUCCES);
	return (SUCCES);
}

/*
**	exit the program cleanly by freeing everything that was used
**	by the parsing manager
*/

int	ft_exit_parsing(t_data *var)
{
	int	i;

	i = 0;
	while (i <= var->line)
	{
		free(var->tab[i]);
		i++;
	}
	free(var->tab);
	exit(FAILURE);
}
