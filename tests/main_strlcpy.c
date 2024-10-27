#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// Base String to copy
	char *s1 = "String to copy";
	size_t s1_len = strlen(s1);
	printf("s1_len: %lu\n", s1_len);

	//Case 1: We know the size of the string, so we start with a predefined destination array
	//with the same size of the source array, reserving one byte at the end for the NULL
	//At Copy we must specify the same size counting the NULL or truncation occurs
	char s2[15] = {0};

	// Before Copy
	printf("[++] Original functions\n");
	size_t s2_len = strlen(s2);
	printf("bf s2_len: %lu\n", s2_len);
	printf("bf s2: %s\n", s2);

	// Copy
	size_t is_trunc = strlcpy(s2, s1, 15);
	printf("return strlcpy: %lu\n",is_trunc);

	// After Copy
	s2_len = strlen(s2);
	printf("af s2_len: %lu\n", s2_len);
	printf("af s2: %s\n", s2);

	// Before Copy
	printf("\n[++] Our functions\n");
	char ft_s2[15] = {0};
	size_t ft_s2_len = ft_strlen(ft_s2);
	printf("bf ft_s2_len: %lu\n", ft_s2_len);
	printf("bf ft_s2: %s\n", ft_s2);

	// Copy
	size_t ft_is_trunc = ft_strlcpy(ft_s2, s1, 15);
	printf("return ft_strlcpy: %lu\n",ft_is_trunc);

	// After Copy
	ft_s2_len = ft_strlen(ft_s2);
	printf("af ft_s2_len: %lu\n", ft_s2_len);
	printf("af ft_s2: %s\n", ft_s2);
	return (0);
}
