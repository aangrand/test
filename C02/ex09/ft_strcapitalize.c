/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:22:15 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/09 20:50:12 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	int temp;

	i = 0;
	temp = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (((str[i] >= 'a' && str[i] <= 'z')
					|| (str[i] >= 'A' && str[i] <= 'Z')
					|| (str[i] >= '0' && str[i] <= '9')) && temp == 1)
		{
			temp = 0;
			if ((str[i] < '0' || str[i] > '9') && (str[i] < 'A'
						|| str[i] > 'Z'))
				str[i] = str[i] - 32;
		}
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A'
					|| str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
			temp = 1;
		i++;
	}
	return (str);
}
