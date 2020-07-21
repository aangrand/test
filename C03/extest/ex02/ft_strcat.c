/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:52:39 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/13 21:03:18 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while(src[i])
		i++;
	while(dest[n])
	{
		src[i] = dest[n]; 
		i++;
		n++;
	}
	src[i] = '\0';
	return (src);		
}

int main ()
{
    char test1[] = "Bonjour";
    char test2[] = " les copains";

    //char *test = ft_strcat(test2, test1);
    char *test = strcat(test1,test2);

    printf("%s", test);
}