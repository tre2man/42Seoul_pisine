#include "rush01.h"

void rush00(unsigned int x, unsigned int y)
{
    unsigned int i;
    unsigned int j;

    i = 1;
    while (i <= y)
    {
        j = 1;
        while (j <= x)
        {
            if (j == 1 || j == x)
            {
                if (i == 1 || i == y)
                    ft_putchar('o');
                else
                    ft_putchar('|');
            }
            else
            {
                if (i == 1 || i == y)
                    ft_putchar('-');
                else
                    ft_putchar(' ');
            }
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}