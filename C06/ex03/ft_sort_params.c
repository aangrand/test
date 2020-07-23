/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:38:54 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/23 18:49:08 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		n;
	char	*temp;

	i = -1;
	while (i < argc)
	{
		n = 0;
		while (n < (argc - 1))
		{
			if (ft_strcmp(argv[n], argv[n + 1]) > 0)
			{
				temp = argv[n];
				argv[n] = argv[n + 1];
				argv[n + 1] = temp;
			}
			n++;
		}
		i++;
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
	return (0);
}
