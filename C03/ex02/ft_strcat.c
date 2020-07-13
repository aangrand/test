/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:52:39 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/13 21:40:47 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (src[i])
		i++;
	while (dest[n])
	{
		src[i] = dest[n];
		i++;
		n++;
	}
	src[i] = '\0';
	return (src);
}
