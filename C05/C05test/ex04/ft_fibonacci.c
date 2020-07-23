/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 18:40:29 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/20 17:15:21 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	else
		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>

int main()
{
	printf("%d", ft_fibonacci(16));
}
