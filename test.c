/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 20:06:01 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/23 20:34:40 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main() 
{
	char *tab; 
	int len;

	len = 0;
	while(tab[len])
		len++;
	tab = malloc(sizeof(*tab) * len);
	
	tab = "Bonjour";
	printf("%s\n", &tab);
}
