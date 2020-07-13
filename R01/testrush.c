/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 18:51:52 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/12 15:56:13 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int verif(char line[], int way)
{
    int i;
    int count;
    char temp;

    temp = 0;
    if (way == 0)
    {
        i = 0;
        while(i < 4)
        {
            if (line[i] > temp)
            {
                temp = line[i];
                count++;
            }
            i++;
        }
    }
    else
    {
        i = 3;
        while(i >= 0)
        {
            if (line[i] > temp)
            {
                temp = line[i];
                count++;
            }
            i--;
        }
    }
    return (count);
}

void randomize(char **tab, char pos)
{
    int temp;
    int i;
    int j;
    int x;
    char val = (tab[x][0] + tab[x][1]) * (tab[x][2] + tab[x][3]) + pos;

    i = 0;
    j = 0;
    while(i < val)
    {
        while (j < val)
        {
            temp = tab[x][i];
            tab[x][i] = tab[x][j];
            tab[x][j] = temp;
        }
    }
}

int find(char colup[4], char coldown[4], char rowright[4], char rowleft[4])
{
    char tab[4][4] = {"1234", "1234", "1234", "1234"};
    int verif_tab[] = {0, 0, 0, 0};
    int i;
    int n;
    int check;
    char tab_temp[4];
    int x;
    int y;

    check = 1;
    i = 0;
    while(check != 0)
    {
        if (verif_tab[i] == 0)
        {
            while(n < 4)
            {
                randomize(tab_temp[i],i);
                x = verif(tab[i],0);
                y = verif(tab[i],1);
                if (x == rowleft[n] && y == rowright[n])
                {
                    verif_tab[n] = 1;
                }
            }
        }
        if ((verif_tab[0] == 1 && verif_tab[1] == 1 && verif_tab[2] == 1 && verif_tab[3] == 1) || i == 1000)
        {
            check = 0;
        }
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        return(0);
    }

    int i;
    int n;
    char colup[4];
    char coldown[4];
    char rowright[4];
    char rowleft[4];

    i = 0;
    n = 0;
    while(argv[1][n] != '\0')
    {
        if (argv[1][n] >= '0' && argv[1][n] <= '9')
        {
            if (i < 4)
                colup[i] = argv[1][n];
            else if (i < 8)
                coldown[i - 4] = argv[1][n];
            else if (i < 12)
                rowright[i - 8] = argv[1][n];
            else
                rowleft[i - 12] = argv[1][n];
            i++;
        }
        n++;
    }
    find(colup, coldown, rowleft, rowright); 
}