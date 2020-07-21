/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 22:15:55 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/21 15:21:29 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;

	return (i);
}

#include <stdio.h>
#include <string.h>

int main ()
{
	printf("%d\n%d",ft_strlen("bonjour"), strlen("bonjour"));
}
