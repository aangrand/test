/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:04:02 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/08 22:35:08 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int n;
	int xn;
	int tab_temp[xn];

	n = 0;
	xn = size;
	while (n < size)
	{
		tab_temp[n] = tab[xn];
		xn--;
		n++;
	}
	n = 0;
	tab[size] = tab_temp[size];
}

int main()
{
	int *tab = {1, 2, 3, 4, 5};
	
	ft_rev_int_tab(tab, 5);

	int i =0;
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++; 
	}
}
