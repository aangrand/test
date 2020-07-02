/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:24:53 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/02 14:49:10 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(void)
{
	int i = 97;
	
	while (i < 123)
	{
		char lettre = (char)i;
		printf("%c",lettre);
		i ++;
	}
}
