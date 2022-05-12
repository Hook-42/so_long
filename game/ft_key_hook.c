/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:15:11 by ceatgie           #+#    #+#             */
/*   Updated: 2022/05/11 19:02:55 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*
**	Only exists because of 25 lines
*/

static void	ft_for_w(t_data *var)
{
	var->nb_moove += 1;
	ft_putnbr_fd(var->nb_moove, 1);
	ft_putchar_fd('\n', 1);
	ft_top_moove(var);
	mlx_destroy_image(var->mlx, var->fusee);
	var->fusee = mlx_xpm_file_to_image(var->mlx, "./assets/fusee.xpm",
			&var->height, &var->weight);
	ft_create_lines(var, var->argv);
}

/*
**	Only exists because of 25 lines
*/

static void	ft_for_d(t_data *var)
{
	var->nb_moove += 1;
	ft_putnbr_fd(var->nb_moove, 1);
	ft_putchar_fd('\n', 1);
	ft_right_moove(var);
	mlx_destroy_image(var->mlx, var->fusee);
	var->fusee = mlx_xpm_file_to_image(var->mlx, "./assets/fusee_right.xpm",
			&var->height, &var->weight);
	ft_create_lines(var, var->argv);
}

/*
**	Only exists because of 25 lines
*/

static void	ft_for_s(t_data *var)
{
	var->nb_moove += 1;
	ft_putnbr_fd(var->nb_moove, 1);
	ft_putchar_fd('\n', 1);
	ft_bot_moove(var);
	mlx_destroy_image(var->mlx, var->fusee);
	var->fusee = mlx_xpm_file_to_image(var->mlx, "./assets/fusee_bot.xpm",
			&var->height, &var->weight);
	ft_create_lines(var, var->argv);
}

/*
**	Only exists because of 25 lines
*/

static void	ft_for_a(t_data *var)
{
	var->nb_moove += 1;
	ft_putnbr_fd(var->nb_moove, 1);
	ft_putchar_fd('\n', 1);
	ft_left_moove(var);
	mlx_destroy_image(var->mlx, var->fusee);
	var->fusee = mlx_xpm_file_to_image(var->mlx, "./assets/fusee_left.xpm",
			&var->height, &var->weight);
	ft_create_lines(var, var->argv);
}

/*
**	is used to associate an action with a key on the keyboard
*/

int	key_hook(int keycode, t_data *var)
{
	t_data	ptr;
	int		i;
	int		j;

	if (keycode == 65307)
		ft_exit(var);
	if (keycode == 119)
		ft_for_w(var);
	if (keycode == 100)
		ft_for_d(var);
	if (keycode == 115)
		ft_for_s(var);
	if (keycode == 97)
		ft_for_a(var);
	return (0);
}
