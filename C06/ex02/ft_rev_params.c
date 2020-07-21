/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 12:30:42 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/21 12:30:44 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
    write(1, "\n", 1);
}

int main (int argc, char **argv)
{
    int i;

    i = argc;
    while (i >= 0)
    {
        ft_putstr(argv[i]);
        i--;
    }
}