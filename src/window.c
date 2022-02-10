/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   window.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Tessa <Tessa@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/11 11:13:31 by Tessa         #+#    #+#                 */
/*   Updated: 2022/02/10 15:20:04 by tvan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void	my_mlx_pixel_put(t_fractal *fractal, int x, int y, int color)
{
	char	*dst;

	dst = fractal->addr + (y * fractal->line_length + x * (fractal->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

void window_init(t_fractal *fractal)
{
		fractal->mlx = mlx_init();
		fractal->win = mlx_new_window(fractal->mlx, WIDTH, HEIGTH, "Fract-ol");
		fractal->img = mlx_new_image(fractal->mlx, WIDTH, HEIGTH);
		fractal->addr = mlx_get_data_addr(fractal->img, &fractal->bits_per_pixel, &fractal->line_length,
			&fractal->endian);
		fractal->zoom = 1;
		make_fractal(fractal);
}

void make_fractal(t_fractal *fractal)
{
	mlx_clear_window(fractal->mlx, fractal->win);
	if (ft_strcmp(fractal->name, "m") == 0)
		mandelbrot_init(fractal);
	else if (ft_strcmp(fractal->name, "j") == 0)
		julia_init(fractal);
	else
		printf("Insert valid fractal\n");
	mlx_put_image_to_window(fractal->mlx, fractal->win, fractal->img, 0, 0);
}
	
	
	
	
	
	//color = add_shade(0.5, color);
	//printf("after adding shade the color will be: %X\n", color);	
	//draw_pink_square_outline(img, 500, 375);
	//draw_blank_space(img, 85, 225);
	//bres_draw_blue_circle(img, 750, 175, 50);
	//draw_rainbow_square(img);
	//draw_shade(img);
	//draw_line(img, 125, 350, 200);