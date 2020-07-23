/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 18:33:37 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/21 17:10:29 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	long int i;
	long int res;

	i = 1;
	res = 1;
	if ((nb <= 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		res = i * res;
		i++;
	}
	return (res);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_factorial(20));
}