/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:29:27 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/14 14:55:37 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	size;

	size = 0;
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
