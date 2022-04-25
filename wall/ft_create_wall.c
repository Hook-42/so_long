/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_wall.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:02:40 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/25 18:59:50 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"


static char **ft_create_map_in_tab(char *argv)
{
	int		i;
	char	**tab;
	int		fd;

	i = 0;
	tab = malloc(sizeof(char *) * (ft_how_many_line(argv) + 1));
	if (!tab)
		return (NULL);
	while (i <= ft_how_many_line(argv))
	{
		tab[i] = malloc(sizeof(char) * (ft_size(argv) + 1));
		if (!tab)
			return (NULL);
		i++;
	}
	fd = open(argv, O_RDONLY);
	i = 0;
	while (i <= ft_how_many_line(argv))
	{
		tab[i] = get_next_line(fd);
		i++;
	}
	return (tab);
}

static void ft_create_lines(t_data ptr, char *argv)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	ptr.y = 0;
	tab = ft_create_map_in_tab(argv);
		while (i <= (ft_how_many_line(argv)))
		{
			ptr.x = 0;
			while (j < ft_size(argv))
			{
				if (tab[i][j] == '1')
				{
					ptr.img= mlx_xpm_file_to_image(ptr.mlx, "./asteroid.xpm", &ptr.height, &ptr.weight);
					mlx_put_image_to_window(ptr.mlx, ptr.win, ptr.img, ptr.x, ptr.y);
				}
				else if (tab[i][j] == '0')
				{
					ptr.img= mlx_xpm_file_to_image(ptr.mlx, "./vide.xpm", &ptr.height, &ptr.weight);
					mlx_put_image_to_window(ptr.mlx, ptr.win, ptr.img, ptr.x, ptr.y);
				}
				else if (tab[i][j] == 'C')
				{
					ptr.img= mlx_xpm_file_to_image(ptr.mlx, "./soucoupe.xpm", &ptr.height, &ptr.weight);
					mlx_put_image_to_window(ptr.mlx, ptr.win, ptr.img, ptr.x, ptr.y);
				}
				else if (tab[i][j] == 'P')
				{
					ptr.img= mlx_xpm_file_to_image(ptr.mlx, "./fusee.xpm", &ptr.height, &ptr.weight);
					mlx_put_image_to_window(ptr.mlx, ptr.win, ptr.img, ptr.x, ptr.y);
				}
				else if (tab[i][j] == 'E')
				{
					ptr.img= mlx_xpm_file_to_image(ptr.mlx, "./exit.xpm", &ptr.height, &ptr.weight);
					mlx_put_image_to_window(ptr.mlx, ptr.win, ptr.img, ptr.x, ptr.y);
				}
				j++;
				ptr.x += 50;
			}
			ptr.y += 50;
			i++;
			j = 0;
		}
	/*	while (i >= 0)
		{
			free(tab[i]);
			i--;
		}
		free(tab);*/
}

void	ft_create_wall(t_data ptr, char *argv)
{
	ptr.mlx = mlx_init();
	ptr.win = mlx_new_window(ptr.mlx, ft_size(argv) * 50, (ft_how_many_line(argv) + 1) * 50, "so_long");
	//ft_create_wall_top_and_bot(ptr, argv);
	ft_create_lines(ptr, argv);
	//ft_create_wall_left(ptr, argv);
	//ft_create_wall_bot(ptr, argv);
	//ft_create_wall_right(ptr, argv);
	mlx_loop(ptr.mlx);	
}