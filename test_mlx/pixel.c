/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:30:43 by ceatgie           #+#    #+#             */
/*   Updated: 2022/04/12 17:01:04 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>


typedef struct s_data {
    void    *img;
    char    *addr;
    int     bits_per_pixel;
    int     line_length;
    int     endian;
}               t_data;


void    my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
    char *dst;
    
    dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
    *(unsigned int*)dst = color;
}

void    create_carre(t_data img)
{
    int     x = 100;
    int     y = 100;

    while (x < 500)
    {
        my_mlx_pixel_put(&img, x, 100, 0x00FF0000);
        x++;
    }
    while (y < 500)
    {
        my_mlx_pixel_put(&img, 100, y, 0x00FF0000);
        y++;
    }
    x = 100;
    while (x < 500)
    {
        my_mlx_pixel_put(&img, x, 500, 0x00FF0000);
        x++;
    }
    y = 100;
    while (y < 500)
    {
         my_mlx_pixel_put(&img, 500, y, 0x00FF0000);
        y++;
    }
}

int main(int argc, char *argv[])
{
    void    *mlx;
    void    *mlx_win;
    t_data   img;

    mlx = mlx_init();
    mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
    img.img = mlx_new_image(mlx, 1920, 1080);
    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
    create_carre(img);
    mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
    mlx_loop(mlx);
}