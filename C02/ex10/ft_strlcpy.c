/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:18:05 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/13 12:28:04 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int nb;
	unsigned int i;

	nb = 0;
	i = 0;
	while (src[nb] != '\0')
	{
		nb++;
	}
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (nb);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char lol[] = "AZaz90";
    char *test;
	char *test2;

	int bonjour = strlcpy(test2,lol,2);
    int chose = ft_strlcpy(test,lol,2);
    printf("%s \n %s ", test, test2);
}
