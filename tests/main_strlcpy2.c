#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("./a.out <string>");
		return (1);
	}
	// Base String to copy
	char *s1 = av[1];
	size_t s1_len = strlen(s1);
	printf("s1_len: %lu\n", s1_len);

	//Case 2: We don't know the size of the string, so we must malloc the length of the source string
	//with the same size of the source array, reserving one byte at the end for the NULL
	//At Copy we must specify the same size counting the NULL or truncation occurs
	char *s2 = (char *)calloc((s1_len +1) ,1);
	if (! s2)
		return (1);

	// Before Copy
	size_t s2_len = strlen(s2);
	printf("bf s2_len: %lu\n", s2_len);
	printf("bf s2: %s\n", s2);

	// Copy
	size_t is_trunc = strlcpy(s2, s1, (s1_len +1));
	printf("return strlcpy: %lu\n",is_trunc);

	// After Copy
	s2_len = strlen(s2);
	printf("af s2_len: %lu\n", s2_len);
	printf("af s2: %s\n", s2);

	free(s2);
	s2 = NULL;

	// Base String to copy
	size_t ft_s1_len = ft_strlen(s1);
	printf("ft_s1_len: %lu\n", ft_s1_len);

	//Case 2: We don't know the size of the string, so we must malloc the length of the source string
	//with the same size of the source array, reserving one byte at the end for the NULL
	//At Copy we must specify the same size counting the NULL or truncation occurs
	char *ft_s2 = (char *)ft_calloc((ft_s1_len +1) ,1);
	if (! ft_s2)
		return (1);

	// Before Copy
	size_t ft_s2_len = ft_strlen(ft_s2);
	printf("bf ft_s2_len: %lu\n", ft_s2_len);
	printf("bf ft_s2: %s\n", ft_s2);

	// Copy
	size_t ft_is_trunc = ft_strlcpy(ft_s2, s1, (ft_s1_len +1));
	printf("return ft_strlcpy: %lu\n",ft_is_trunc);

	// After Copy
	ft_s2_len = ft_strlen(ft_s2);
	printf("af ft_s2_len: %lu\n", ft_s2_len);
	printf("af ft_s2: %s\n", ft_s2);

	free(ft_s2);
	ft_s2 = NULL;
	return (0);
}
