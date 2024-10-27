#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memmove_p(void *dst, const void *s, size_t n)
{
	(void)n;
	unsigned long int dstp = (long int) dst;
	unsigned long int srcp = (long int) s;
	printf("addr of s: %p\n", &s);
	printf("addr of d: %p\n", &dst);
	printf("addr of s: %lu\n", srcp);
	printf("addr of d: %lu\n", dstp);
	printf("d - s: %lu, len: %lu", dstp - srcp, n);
	return (dst);
}

int main()
{
	char s[8] = "";
	char d[8] = "";
	// When and why src < dst
	printf("\n\t--- No Overlap: ---\n");
	ft_memmove_p(d, s, 8);
	// src overlap
	printf("\n\t--- SRC Overlap: ---\n");
	ft_memmove_p(s+1, s, 8);
	// dst overlap
	printf("\n\t--- DST Overlap: ---\n");
	ft_memmove_p(d+1, d, 8);

	return(0);
}
