/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 16:19:24 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/02 22:16:21 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_print_comb(void)
{
	int x = 0;
	int xmin = 0; 
	int y = 0;
	int ymin = 0; 
	int z = 0; 
	int zmin = 0;
	int i = 0; 
	int skip = 0; 

	for (x = xmin; x < 10; x++)
	{
		for (y = x; y < 10; y++)
		{
			for (z = y; z < 10; z++)
			{
				if (y == z | y == x | x == z)
				{	
					zmin++;
					//printf("FAIL");
				}
				else 
				{
					printf("%d %d %d\n", x, y, z);
				}
			}
			z = 0;
		}
		zmin = 0;
		y = 0;
	}
}

int main()
{
	ft_print_comb();
	return(0);
}
