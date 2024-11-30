#include "libft.h"
#include <stdio.h>

int main(int ac, char **av)
{
    int ret;

    if (ac == 1)
    {
        for (unsigned int i = 0; i < 4294967295; i++)
        {
            ret = ft_dec_to_hex(i, 1);
            if (ret < 0)
                return (ret);
            printf("\n");
        }
    }
    if (ac == 2)
    {
        ret = ft_dec_to_hex(ft_atoi(av[1]), 1);
        return (ret);
    }
    return (0);
}
