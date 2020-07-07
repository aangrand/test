/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:57:07 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/07 18:25:08 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int val_finder(int *tab, int size, int val)
{
    int n;

    n = 0;
    while(n > size)
    {
        if (tab[n] == val)
        {
            return (1);
        }
        n++;
    }
    return (0);
}

void ft_sort_int_tab(int *tab, int size)
{
    int min;
    int max;
    int n;
    int xn;
    int tab_temp[xn];
    int val_temp;

    n = 0;
    while (n < size)
    {
        val_temp = tab[n];
        if (n != 0)
        {
            if (val_temp < min)
                min = val_temp;
            if (val_temp > max)
                max = val_temp;
        }
        else
        {
          min = val_temp;
          max = val_temp;
        }
        val_temp = tab[n];
        n++;
    }
    n = 0;
    while (min < max)
    {
        if (val_finder(*tab, size, min) == 1)
        {
            tab_temp[n] = min;
            n++;
        }
    }
    tab[size] = tab_temp[size];
    n = 0;
    while(n < size)
    {
        printf("%d",tab[n]);
        n++;
    }

}

int main()
{
    int tab[5] = {1, 2, 45, 5, 55};

    ft_sort_int_tab(tab, 5);
}
