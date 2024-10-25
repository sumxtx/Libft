#include "libft.h"
#include <stdio.h>


int main(int ac, char **av)
{
        if (ac == 2)
        {
                int i = 0;
                while (av[1][i] != '\0')
                {
                        if (ft_isalpha(av[1][i]) == 1)
                        {
                                printf("%c is alphabetical.\n", av[1][i]);
                        }
                        else
                        {
                                printf("%c is not alphabetical.\n", av[1][i]);
                        }
                        i++;
                }
                i = 0;
                printf ("ASCII Table\n");
                while (i < 256)
                {
                        if (ft_isalpha(i))
                        {
                                printf("%d: %c is alphabetical.\n", i, i);
                        }
                        i++;
                }
                return (0);
        }
        printf("Usage ./bin \"Any String to check\" | cat -e");
        return (0);
}
