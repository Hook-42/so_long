/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:39:36 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/15 12:14:13 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_vars {
	void	*mlx;
	void	*win;
}			t_vars;

int	hello(int keycode, t_vars *vars)
{
	printf("Hello !\n");
	return (0);
}

int	bye(int keycode, t_vars *vars)
{
	printf("bye !\n");
	return (0);
}

int main(void)
{
	t_vars vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1920, 1080, "Hello world\n");
	mlx_hook(vars.win, 7, 1L<<4, hello, &vars);
	mlx_hook(vars.win, 8, 1L<<5, bye, &vars);
	mlx_loop(vars.mlx);
}