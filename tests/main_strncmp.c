#include "libft.h"
#include <stdio.h>

int main(void)
{
	char s1[20] = "abcdefghij";
	char s2[15] = "abcdefghik";
	int ret = ft_strncmp(s1, s2, 10);
	printf("%d", ret);
	return (ret);
}
