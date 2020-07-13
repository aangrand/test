/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:29:27 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/13 21:42:19 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int n;
	int size;

	i = 0;
	n = 0;
	while (src[i])
	{
		i++;
		size++;
	}
	while (dest[n] && i < (nb + size))
	{
		src[i] = dest[n];
		i++;
		n++;
	}
	src[i] = '\0';
	return (src);
}
