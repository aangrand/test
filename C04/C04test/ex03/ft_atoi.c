/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 15:22:30 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/21 15:36:05 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int res;
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + (str[i] - 48);
		i++;
	}
	if (n % 2 == 1)
		res = -res;
	return (res);
}

#include <string.h>

int		main(void)
{
	printf("%d\n", ft_atoi("   +-+-+-1234512"));
	return (0);
}
