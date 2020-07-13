/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 22:33:05 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/13 22:46:27 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long		i;
	long int	n;
	char		res[i];
	char		temp;

	n = nb;
	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		write(1, "-", 1);
	}
	else if (n == 0)
		write(1, "0", 1);
	while (n != 0)
	{
		temp = n % 10 + '0';
		res[i] = temp;
		n /= 10;
		i++;
	}
	while (i-- != 0)
		write(1, &res[i], 1);
}
