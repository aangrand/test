/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:28:27 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/21 17:26:24 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	i = nb;
	if (nb == 0 && power == 0)
		return (1);
	while (power != 0)
	{
		nb = i * nb;
		power--;
	}
	return (nb);
}
