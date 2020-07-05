/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:24:53 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/05 10:48:34 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		write(1, &i, 1)
		i++;
	}
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
