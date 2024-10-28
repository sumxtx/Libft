#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Usage: ./a.out string maxlen");
		return (1);
	}
	size_t maxlen = atoi(av[2]);
	char *s = av[1];

	printf("og: %lu\n", strnlen(s, maxlen));
	size_t nlen = ft_strnlen(s, maxlen);
	printf("ft: %lu\n", nlen);
	return (0);
}
