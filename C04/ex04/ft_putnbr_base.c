/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:08:57 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/21 16:45:14 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		verif_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[i] != '\0' && base[i + 1] != '\0')
	{
		while (base[i])
		{
			while (base[j])
			{
				if ((i != j && base[i] == base[j]) ||
						(base[i] == '+' || base[i] == '-'))
					return (0);
				j++;
			}
			i++;
		}
		return (1);
	}
	else
		return (0);
}

int		baselenght(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int len;
	int n;

	if (verif_base(base) == 1)
	{
		n = nbr;
		len = baselenght(base);
		if (n > 9)
		{
			ft_putnbr_base(n / len, base);
			n = n % len;
		}
		ft_putchar(base[n]);
	}
}
