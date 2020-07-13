/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aangrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 15:23:14 by aangrand          #+#    #+#             */
/*   Updated: 2020/07/11 16:45:07 by aangrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
}

void putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        return (0);
    }
    
    int i;
    char val[] = {""};
    int n;
    
    i = 0;
    n = 0;
    
    while(argv[i] != '\0')
    {
        if(argv[i] >= '0' && argv[i] <= '9')
        {
            val[n] = argv[i];
            n++;
        }
        i++;
    }
    
    n = 0;
    //putchar('s');
    
    //printf("%d", 's');
    
    while(val[n])
    {
//putchar(val[n]);
        printf("%d", val[n]);
        n++;
    }
    
    return(0);
}
    /*
	int tab[3][3];
    int colup[3] = {col1up, col2up, col3up, col4up};
    int coldown[3] = {col1down, col2down, col3down, col4down};
    int rowright[3] = {row1right, row2right, row3right, row4right};
    int rowleft[3] = {row1left, row2left, row3left, row4left};
    
    int x = 0;
    int y = 0;
    
    //POSITIONNEMENT DES 4 SUR LES 1
    
    while (colup[x])
    {
        if (colup[x] == 1)
        {
            tab[x][0] = 4;
        }
        x++;
    }
    while (coldown[x])
    {
        if (coldown[x] == 1)
        {
            tab[x][3] = 4;
        }
        x++;
    }
    while (rowleft[y])
    {
        if (rowleft[y] == 1)
        {
            tab[0][y] =4;
        }
        y++;
    }
    while (rowright[y])
    {
        if (rowright[y] == 1)
        {
            tab[3][y] = 4;
        }
        y++;
    }
    
    // POSITIONNEMENT DES 1234 SUR LES 4
    x = 0;
    y = 0;
    n = 1;
    while (colup[x])
    {
        if (colup[x] == 4)
        {
            while(y < 4)
            {
                tab[x][y] = y + 1;
                n++;
                y++;
            }
        }
        x++;
    }
    x = 0;
    y = 3;
    n = 1;
    while (coldown[x])
    {
        if (coldown[x] == 4)
        {
            while(y < 4)
            {
                tab[x][y] = n;
                n++;
                y--;
            }
        }
        x++;
    }
    x = 0;
    y = 0;
    n = 1;
    while (rowleft[y])
    {
        if (rowleft[y] == 4)
        {
            while(x < 4)
            {
                tab[x][y] = n;
                n++;
                x++;
            }
        }
        y++;
    }
    x = 3;
    y = 0;
    n = 1;
    while (rowright[y])
    {
        if (rowright[y] == 4)
        {
            while(x < 4)
            {
                tab[x][y] = n;
                n++;
                x--;
            }
        }
        y++;
    }
   
    
    
    
    // PRINT
    while()
    
}

*/
