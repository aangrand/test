/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:08:57 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/15 11:12:32 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);  
}

void verif_base(char *base)
{
	
}

int baselenght (char *base)
{
    int i;

    i = 0;
    while (base[i])
        i++;
    return (i);    
}

void ft_putnbr_base (int nbr, char *base)
{
    int len;
    int n;
    
    n = nbr;
    len = baselenght(base);
    if (n > 9)
    {
        ft_putnbr_base(n/len, base);
        n = n % len;
    }
    ft_putchar(base[n]);

} 

int main ()
{
    ft_putnbr_base(123, "01");
}