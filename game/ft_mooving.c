/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mooving.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:15:11 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/09 18:05:20 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int ft_get_x_pos(char *argv, t_data *var)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= (var->line))
	{
		while (j < var->size)
		{
			if (var->tab[i][j] == 'P')
			{
				return(j * 50);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (-50);
}

int ft_get_y_pos(char *argv, t_data *var)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= (var->line))
	{
		while (j < var->size)
		{
			if (var->tab[i][j] == 'P')
			{
				return(i * 50);
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (-50);
}

int	ft_how_many_c(t_data *var)
{
	int	i;
	int	j;
	int	nb_c;

	i = 0;
	j = 0;
	nb_c = 0;
	while (i <= var->line)
	{
		while (j < var->size)
		{
			if (var->tab[i][j] == 'C')
				nb_c++;
			j++;
		}
		i++;
		j = 0;
	}
	return (nb_c);
}

void	ft_top_moove(t_data *var)
{
	if (var->i == 0)
		return ;
	if (var->tab[var->i - 1][var->j] == '1')
		return ;
	if (var->tab[var->i - 1][var->j] == 'C')
	{
		var->tab[var->i - 1][var->j] = 'P';
		var->tab[var->i][var->j] = '0';
		var->nb_collect += 1;
		var->i -= 1;
		return ;
	}
	if (var->tab[var->i - 1][var->j] == '0')
	{
		var->tab[var->i - 1][var->j] = 'P';
		var->tab[var->i][var->j] = '0';
		var->i -= 1;
		return ;
	}
	if (var->tab[var->i - 1][var->j] == 'E')
		exit(0);
}

void	ft_right_moove(t_data *var)
{
	if (var->j == 0)
		return ;
	if (var->tab[var->i][var->j + 1] == '1')
		return ;
	if (var->tab[var->i][var->j + 1] == 'C')
	{
		var->tab[var->i][var->j + 1] = 'P';
		var->tab[var->i][var->j] = '0';
		var->j += 1;
		var->nb_collect += 1;
		return ;
	}
	if (var->tab[var->i][var->j + 1] == '0')
	{
		var->tab[var->i][var->j + 1] = 'P';
		var->tab[var->i][var->j] = '0';
		var->j += 1;
		return ;
	}
	if (var->tab[var->i][var->j + 1] == 'E')
		exit(0);
}

void	ft_bot_moove(t_data *var)
{
	if (var->i == 0)
		return ;
	if (var->tab[var->i + 1][var->j] == '1')
		return ;
	if (var->tab[var->i + 1][var->j] == 'C')
	{
		var->tab[var->i + 1][var->j] = 'P';
		var->tab[var->i][var->j] = '0';
		var->i += 1;
		var->nb_collect += 1;
		return ;
	}
	if (var->tab[var->i + 1][var->j] == '0')
	{
		var->tab[var->i + 1][var->j] = 'P';
		var->tab[var->i][var->j] = '0';
		var->i += 1;
		return ;
	}
	if (var->tab[var->i + 1][var->j] == 'E')
		exit(0);
}

void	ft_left_moove(t_data *var)
{
	if (var->j == 0)
		return ;
	if (var->tab[var->i][var->j - 1] == '1')
		return ;
	if (var->tab[var->i][var->j - 1] == 'C')
	{
		var->tab[var->i][var->j - 1] = 'P';
		var->tab[var->i][var->j] = '0';
		var->j -= 1;
		return ;
	}
	if (var->tab[var->i][var->j - 1] == '0')
	{
		var->tab[var->i][var->j - 1] = 'P';
		var->tab[var->i][var->j] = '0';
		var->j -= 1;
		var->nb_collect += 1;
		return ;
	}
	if (var->tab[var->i][var->j - 1] == 'E')
		exit(0);
}



int	key_hook(int keycode, t_data *var)
{
	t_data	ptr;
	int		i;
	int		j;
	if (keycode == 65307)
	{
		exit(0);
	}
	if (keycode == 119)
	{
		ft_top_moove(var);
		ft_create_lines(var, var->argv);
	}
	if (keycode == 100)
	{
		ft_right_moove(var);
		ft_create_lines(var, var->argv);
	}
	if (keycode == 115)
	{
		ft_bot_moove(var);
		ft_create_lines(var, var->argv);
	}
	if (keycode == 97)
	{
		ft_left_moove(var);
		ft_create_lines(var, var->argv);
	}
	return (0);
}