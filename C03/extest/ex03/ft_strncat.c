/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:29:27 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/13 21:56:08 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
  int len;
  int i;
  
  len = 0;
  while (dest[len])
    len++;
  
  i = 0;
  while (i < nb)
  {
    dest[len] = src[i];
    i++;
    len++;
  }
  dest[len] = '\0';

  return (dest);
}
#include <string.h>
#include <stdio.h>

int main ()
{
    char test1[] = "lol";
    char test2[] = "kjk";

    //char *test = ft_strncat(test2, test1, 2);
    char *test = strncat(test1,test2, 2);

    printf("%s", test);
}