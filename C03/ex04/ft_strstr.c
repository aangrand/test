/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:46:39 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/14 15:06:37 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (&str[i]);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			j++;
			i++;
		}
		else if (to_find[j] == '\0')
		{
			return (&str[i - j]);
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (0);
}
