/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 13:03:56 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/15 17:37:31 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdio.h>


typedef struct s_data{
	void	*img;
	void	*mlx;
	void	*win;
	int		height;
	int		weight;
}	t_data;


int	main(void)
{
	t_data ptr;
	int x = 0;
	int	y = 0;
	ptr.mlx = mlx_init();
	ptr.win = mlx_new_window(ptr.mlx, 400, 600, "Hello world");
	while(x < 400)
	{
		ptr.img= mlx_xpm_file_to_image(ptr.mlx, "./asteroid.xpm", &ptr.height, &ptr.weight);
		mlx_put_image_to_window(ptr.mlx, ptr.win, ptr.img, x, y);
		x+=35;
	}
	x = 0;
	while(y < 600)
	{
		ptr.img= mlx_xpm_file_to_image(ptr.mlx, "./asteroid.xpm", &ptr.height, &ptr.weight);
		mlx_put_image_to_window(ptr.mlx, ptr.win, ptr.img, x, y);
		y+=35;
	}
	y = 600 - 35;
	while (x < 1920)
	{
		ptr.img= mlx_xpm_file_to_image(ptr.mlx, "./asteroid.xpm", &ptr.height, &ptr.weight);
		mlx_put_image_to_window(ptr.mlx, ptr.win, ptr.img, x, y);
		x+=35;
	}
	x = 400 - 35;
	y = 0;
	while (y < 600)
	{
		ptr.img= mlx_xpm_file_to_image(ptr.mlx, "./asteroid.xpm", &ptr.height, &ptr.weight);
		mlx_put_image_to_window(ptr.mlx, ptr.win, ptr.img, x, y);
		y+=35;
	}
	mlx_loop(ptr.mlx);
}