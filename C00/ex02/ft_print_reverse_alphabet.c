/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:24:53 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/06 19:31:19 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int i;

	i = 122;
	while (i > 96)
	{
		write(1, &i, 1);
		i--;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
