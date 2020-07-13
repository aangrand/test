/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:41:22 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/13 20:51:42 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while ((s1[i] && s2[i] && s1[i] == s2[i]) && i + 1 < n)
		i++;
	return (s1[i] - s2[i]);	
}

int main ()
{
	char test1[] = "124";
	char test2[] = "123";

	int test = ft_strncmp(test1, test2, -1);
	int testt = strncmp(test1,test2, -1);
	printf("%d | %d", test, testt);
}
