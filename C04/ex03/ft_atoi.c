/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 15:22:30 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/14 20:59:39 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		count_char(char *str, char c, int max)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i] && i < max)
	{
		if (str[i] == c)
			count++;
		i++;
	}
	while (count > 1)
	{
		count = count - 2;
	}
	return (count);
}

int		squared(int val, int n)
{
	int res;

	res = val;
	if (n == 0)
		return (1);
	else if (n == 1)
		return (val);
	n--;
	while (n-- != 0)
		res = val * res;
	return (res);
}

int		max(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9')
				&& (str[i + 1] < '0' || str[i + 1] > '9'))
			return (i + 1);
		i++;
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int sign;
	int i;
	int n;
	int res;
	int imax;

	imax = max(str);
	n = 0;
	i = 0;
	sign = -1;
	res = 0;
	if (count_char(str, '-', imax) != 1)
		sign = 1;
	while (str[i] && i < imax)
		i++;
	while (i > 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			res = (str[i] - 48) * squared(10, n) + res;
			n++;
		}
		i--;
	}
	return (res * sign);
}

int		main(void)
{
	printf("%d", ft_atoi("suce des morceaux de sucre --++---123121354---feafa-e"));
	return (0);
}
