/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:48:42 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/20 19:58:30 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power < 1)
		return (1);
	else 
		return (nb * ft_iterative_power(nb, power - 1)); 
}

#include <stdio.h>

int main ()
{
	printf("%d", ft_iterative_power(2, 4));
}
