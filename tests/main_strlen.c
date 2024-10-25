
#include "libft.h"
#include <stdio.h>

int main(int ac, char **av)
{
	(void)ac;
	size_t slen;
	slen = 0;

	slen = ft_strlen(av[1]);
	printf("slen: %lu\n",slen);
	printf("slen '\\0': %lu\n",ft_strlen(NULL));
	printf("slen '\\0': %lu\n",ft_strlen((void *)0));
	return (0);

}
