/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tvan-der <tvan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 13:42:00 by tvan-der      #+#    #+#                 */
/*   Updated: 2023/05/22 21:27:08 by Tessa         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fractol.h"

t_complex	square_complex(t_complex x)
{
	t_complex	z;

	z.re = (x.re * x.re) - (x.im * x.im);
	z.im = 2 * x.re * x.im;
	return (z);
}

t_complex	add_complex(t_complex x, t_complex y)
{
	t_complex	z;

	z.re = x.re + y.re;
	z.im = x.im + y.im;
	return (z);
}

double	absolute_complex(t_complex complex)
{
	double	x;

	x = complex.re * complex.re + complex.im * complex.im;
	return (x);
}

t_complex	get_abs(t_complex x)
{
	t_complex	z;

	z.re = fabs(x.re);
	z.im = fabs(x.im);
	return (z);
}

void	my_mlx_pixel_put(t_fractal *fractal, int x, int y, int color)
{
	char	*dst;

	dst = fractal->addr + (y * fractal->line_length
			+ x * (fractal->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}
