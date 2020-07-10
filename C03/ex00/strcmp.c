/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 21:42:38 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/10 13:42:13 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);	
}

int main ()
{
	char test1[] = "223";
	char test2[] = "123";

	int test = ft_strcmp(test1, test2);
	int testt = strcmp(test1,test2);
	printf("%d | %d", test, testt);
}
