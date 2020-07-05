/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 11:30:38 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/04 10:21:11 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_initspace = 0;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	aff_nb(char x, char y, char z)
{
	if (g_initspace != 0)
	{
		ft_putchar(44);
		ft_putchar(0);
	}
	g_initspace++;
	ft_putchar(z + '0');
	ft_putchar(x + '0');
	ft_putchar(y + '0');
}

void	ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 0;
	z = 0;
	while (z < 10)
	{
		while (x < 10)
		{
			while (y < 10)
			{
				if (y != x & x != z & y != z)
					aff_nb(x, y, z);
				y++;
			}
			y = 0;
			y += x + 1;
			x++;
		}
		x = 0;
		x += z + 1;
		z++;
	}
}
