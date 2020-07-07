/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 19:02:37 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/05 19:29:11 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int i;
	char res[i];
	char temp;
    
    if (nb > -2147483648 & nb < 2147483647)
    {
	i = 1;
	if (nb < 0)
		write(1, "-", 1);
	else if (nb == 0)
		write(1, "0", 1);
	while (nb != 0)
	{
		temp = nb % 10 + '0';
		res[i] = temp;
		nb /= 10;
		i++;
	}
	i--;
	while (i != 0)
    {
    write(1, &res[i], 1);
    i--;
    }
    }
}
