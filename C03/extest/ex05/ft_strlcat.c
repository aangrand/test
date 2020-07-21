/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 20:11:20 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/20 12:33:41 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;

	return (i);
}

unsigned int ft_strlcat(char *dst, const char *src, int size)
{
	int		i;
	int		a;
	int		b;

	i = 0;
	a = ft_strlen(dst);
	b = ft_strlen(src);
	if (size - 1 <= a)
		return (b + size);
	while (a + i < size - 1)
	{
		dst[a + i] = src[i];
		i++;
	}
	dst[a + i] = '\0';
	return (a + b);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char coucou[] = "bonjour";
	const char lolol[] = "lol";

	int test = ft_strlcat(coucou, lolol, 5);
	int test2 = strlcat(coucou, lolol, 5);

	printf("%d\n%d", test, test2);
}
