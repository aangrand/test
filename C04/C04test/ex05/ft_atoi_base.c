/ -l ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 18:37:46 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/20 17:00:38 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int verif_base(char *base)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (base[i] != '\0' && base[i + 1] != '\0')
    {
        while (base[i])
        {
            while (base[j])
            {
                if ((i != j && base[i] == base[j]) || (base[i] == '+' || base[i] == '-'))
                    return (0);
                    j++;
            }
            i++;
        }
        return (1);
    }
    else
        return (0);
}

int baselenght(char *base)
{
    int i;

    i = 0;
    while (base[i])
        i++;
    return (i);
}

int ft_putnbr_base(int nbr, char *base)
{
    int len;
    int n;
    if (verif_base(base) == 1)
    {
        n = nbr;
        len = baselenght(base);
        if (n > 9)
        {
            ft_putnbr_base(n / len, base);
            n = n % len;
        }
        ft_putchar(base[n]);
    }
}

int		ft_atoi(char *str)
{
	int res;
	int i;
	int n;

	i = 0;
	n = 0;
	while(str[i] == ' ' || str[i] == '\f' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + (str[i] - 48);
		i++;
	}
	if (n % 2 == 1)
		res = -res;
	return res;
}

int ft_atoi_base(char *str, char *base)
{
    int atoied = ft_atoi(str);
	return (ft_putnbr_base(atoied,base));  
}

int main()
{
	printf("%d", ft_atoi_base("    ++-+-+-+-+-+ 54654", "012345"));
}
