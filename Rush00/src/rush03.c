#include "rush01.h"

void rush03(unsigned int x, unsigned int y)
{
    unsigned int i;
    unsigned int j;

    i = 1;
    while (i <= y)
    {
        j = 1;
        while (j <= x)
        {
            if (j == 1 && (i == 1 || i == x))
                ft_putchar('A');
            else if (j == y && (i == 1 || i == y))
                ft_putchar('C');
            else if (i == 1 || i == y || j == 1 || j == y)
                ft_putchar('B');
            else
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}