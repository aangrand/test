/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 23:01:09 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/08 23:01:21 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i; 
    int temp;
    
    i = 0;
    temp = 1;
    
    while(str[i] != '\0')
    {
        if ((str[i] < 'a' || str[i] > 'z') && temp == 1)
        {
            str[i] = str[i] + 32;
            temp = 0;
        }
        if (temp == 0)
        {
            if ((str[i] < 'a' || str[i] > 'z') || (str[i] < 'A' || str[i] > 'Z') )
            temp = 1;
        }
        i++;
    }
    
    i = 0;
    
    while(str[i] != '\0') 
    {
        printf("%d", str[i]);
        i++;
    }
}

int main(void)
{
    *ft_strcapitalize("coucou les enculés");
}
