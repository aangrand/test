/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 13:52:39 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/14 14:53:20 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int n;

    i = 0;
    n = 0;
    while (dest[i])
        i++;
    while (src[n])
    {
        dest[i] = src[n];
        i++;
        n++;
    }
    dest[i] = '\0';
    return (dest);
}

#include <string.h>
#include <stdio.h>

int main ()
{
    char test1[] = "Bonjour";
    char test2[] = " les copains";

    char *test = ft_strcat(test1, test2);
    //char *test = strcat(test1,test2);

    printf("%s", test);
}