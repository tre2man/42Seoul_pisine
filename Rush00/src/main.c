#include "rush01.h"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        ft_putstr("Input Error!\n");
        return (0);
    }
    else
    {
        if (!ft_atoi(argv[1]) || !ft_atoi(argv[2]))
        {
            ft_putstr("Zero Input!\n");
            return (0);
        }
        else
        {
            rush00(ft_atoi(argv[1]), ft_atoi(argv[2]));
            ft_putchar('\n');
            rush01(ft_atoi(argv[1]), ft_atoi(argv[2]));
            ft_putchar('\n');
            rush02(ft_atoi(argv[1]), ft_atoi(argv[2]));
            ft_putchar('\n');
            rush03(ft_atoi(argv[1]), ft_atoi(argv[2]));
            ft_putchar('\n');
            rush04(ft_atoi(argv[1]), ft_atoi(argv[2]));
        }
    }
}