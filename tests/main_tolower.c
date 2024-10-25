

#include "libft.h"
#include <stdio.h>


int main(int ac, char **av)
{
        if (ac == 2)
        {
                int i = 0;
                while (av[1][i] != '\0')
                {
			printf("%c", ft_tolower(av[1][i]));
			i++;
                }
                return (0);
        }
        printf("Usage ./bin \"Any String to Convert\" | cat -e");
        return (0);
}
