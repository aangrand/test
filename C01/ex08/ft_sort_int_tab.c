/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:57:07 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/08 11:47:33 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (n < size)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] >= tab[n])
			{
				ft_swap(&tab[i], &tab[n]);
			}
			i++;
		}
		n++;
	}
}
