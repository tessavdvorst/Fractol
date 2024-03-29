/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   color.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/18 10:17:28 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/05/22 21:33:09 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fractol.h"

int	create_rgb(int r, int g, int b)
{
	return (r << 16 | g << 8 | b);
}

int	color(t_fractal *fractal, int n)
{
	int	r;
	int	g;
	int	b;

	if (fractal->color == 1)
	{
		r = 0 + floor(n * 200);
		g = 0 + floor(n * 10);
		b = 100;
	}
	else if (fractal->color == 2)
	{
		r = 0 + floor(n * 200);
		g = 50;
		b = 200;
	}
	else
	{
		r = 0;
		g = 0 + floor(n * 200 / 10);
		b = 0 + floor(n * 200 / 10);
	}
	return (create_rgb(r, g, b));
}
