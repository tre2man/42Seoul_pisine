#include "rush01.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
        ft_putchar(*(str++));
}

unsigned int ft_atoi(char *c)
{
    unsigned int ans;

    ans = 0;
    while (*c)
    {
        if (*c == '-')
            return (ans);
        ans = ans * 10 + (*c - '0');
        c++;
    }
    return (ans);
}