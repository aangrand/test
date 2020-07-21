/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 18:08:07 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/21 18:45:44 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int j;

	i = 2;
	j = 1;
	while (i <= nb / 2)
	{
		while (j < 8)
		{
			if (i * j == nb)
				return (0);
			j++;
		}
		j = 1;
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 0)
	{
		while (ft_is_prime(nb) != 1)
		{
			nb++;
		}
		return (nb);
	}
	else
		return (nb);
}
