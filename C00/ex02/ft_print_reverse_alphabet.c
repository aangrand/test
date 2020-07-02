/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 15:00:36 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/02 15:54:18 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_print_reverse_alphabet(void)
{
	int i = 122;

	while(i > 96)
	{
		char lettre = (char)i;
		
		printf("%c",lettre);
		i --; 
	}
}
