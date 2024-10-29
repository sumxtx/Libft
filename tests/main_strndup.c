
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char s[10] = "abcdef";

	char *d;

	d = ft_strndup(s, 10);
	printf("%s", d);
	free(d);
	d = NULL;
	return (0);
	
}
