/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bot_moove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:31:02 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/13 12:26:17 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
**	Only exists because of 25 lines
*/

static void	ft_for_k(t_data *var)
{
	if (!(var->tab[var->i + 1][var->j] == '1'))
	{
		var->tab[var->i + 1][var->j] = 'P';
		var->tab[var->i][var->j] = 'E';
		var->i += 1;
	}
	return ;
}

/*
**	Only exists because of 25 lines
*/

static void	ft_for_c(t_data *var)
{
	var->tab[var->i + 1][var->j] = 'P';
	var->tab[var->i][var->j] = '0';
	var->nb_collect += 1;
	var->i += 1;
	return ;
}

/*
**	Only exists because of 25 lines
*/

static void	ft_for_0(t_data *var)
{
	var->tab[var->i + 1][var->j] = 'P';
	var->tab[var->i][var->j] = '0';
	var->i += 1;
	return ;
}

/*
**	Only exists because of 25 lines
*/

static void	ft_for_e(t_data *var)
{
	if (var->nb_collect != var->max_c)
	{
		var->tab[var->i + 1][var->j] = 'K';
		var->tab[var->i][var->j] = '0';
		var->i += 1;
		if (var->k != NULL)
			mlx_destroy_image(var->mlx, var->k);
		var->k = mlx_xpm_file_to_image(var->mlx, "./assets/k_bot.xpm",
				&var->height, &var->weight);
		return ;
	}
	ft_exit(var);
}

/*
**	used to modify the map when moving downwards
*/

void	ft_bot_moove(t_data *var)
{
	if (var->i == 0)
		return ;
	else if (var->tab[var->i][var->j] == 'K')
		ft_for_k(var);
	else if (var->tab[var->i + 1][var->j] == '1')
		return ;
	else if (var->tab[var->i + 1][var->j] == 'C')
		ft_for_c(var);
	else if (var->tab[var->i + 1][var->j] == '0')
		ft_for_0(var);
	else if (var->tab[var->i + 1][var->j] == 'E')
		ft_for_e(var);
}
