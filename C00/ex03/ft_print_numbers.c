/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 15:53:30 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/05 10:44:44 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		write(1, &i, 1);
		i++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
