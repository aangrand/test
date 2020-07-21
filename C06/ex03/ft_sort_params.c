/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:38:54 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/21 19:39:00 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

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

int main(int argc, char **argv)
{
    int i;
    int n;
    char *temp;

    i = 0;
    n = -1;
    while (i++ < argc)
    {
        while (n++ < (argc - 1))
        {
            if (ft_strcmp(argv[i], argv[i - 1]) > 0)
            {
                temp = argv[i];
                argv[i] = argv[i - 1];
                argv[i - 1] = temp; 
            }
        }
    }
    i = 0;
    while (i++ < argc)
    {
        ft_putstr(argv[i]);
        //write(1, "\n", 1); 
    }
    return (0);
}