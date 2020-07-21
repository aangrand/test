/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 22:33:05 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/20 15:14:11 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);  
}

void    ft_putnbr(int nb)
{
	long        i;
	long int    n;
	char        *res;
	char        temp;

	n = nb;
	i = 0;
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n = -n;
			write (1, "-", 1);
		}
		if (n > 9)
		{
			ft_putnbr(n/10);
			n = n % 10;
		}
		ft_putchar(n + 48);
	}
}

int main()
{
	ft_putnbr(12345);
}
