/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_right_moove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:33:37 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/11 00:52:57 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
**	Only exists because of 25 lines
*/

static void	ft_for_k(t_data *var)
{
	var->tab[var->i][var->j + 1] = 'P';
	var->tab[var->i][var->j] = 'E';
	var->j += 1;
	return ;
}

/*
**	Only exists because of 25 lines
*/

static void	ft_for_c(t_data *var)
{
	var->tab[var->i][var->j + 1] = 'P';
	var->tab[var->i][var->j] = '0';
	var->nb_collect += 1;
	var->j += 1;
	return ;
}

/*
**	Only exists because of 25 lines
*/

static void	ft_for_0(t_data *var)
{
	var->tab[var->i][var->j + 1] = 'P';
	var->tab[var->i][var->j] = '0';
	var->j += 1;
	return ;
}

/*
**	Only exists because of 25 lines
*/

static void	ft_for_e(t_data *var)
{
	if (var->nb_collect != var->max_c)
	{
		var->tab[var->i][var->j + 1] = 'K';
		var->tab[var->i][var->j] = '0';
		var->j += 1;
		var->k = mlx_xpm_file_to_image(var->mlx, "./assets/k_right.xpm",
				&var->height, &var->weight);
		return ;
	}
	ft_free(var);
}

/*
**	used to modify the map when moving to the right
*/

void	ft_right_moove(t_data *var)
{
	if (var->i == 0)
		return ;
	else if (var->tab[var->i][var->j] == 'K')
		ft_for_k(var);
	else if (var->tab[var->i][var->j + 1] == '1')
		return ;
	else if (var->tab[var->i][var->j + 1] == 'C')
		ft_for_c(var);
	else if (var->tab[var->i][var->j + 1] == '0')
		ft_for_0(var);
	else if (var->tab[var->i][var->j + 1] == 'E')
		ft_for_e(var);
}
