#include "libft.h"
#include <stdio.h>
/* 
 * Overlap:
 * 	src | | | | | | | | | 
 * 		dst | | | | | | | | 
 *
 * 		src | | | | | | | | | 
 * 	dst | | | | | | | | 
 *
 * No Overlap:
 * 	src | | | | | | | | | 
 * 			  dst | | | | | | | | | 
 * */
int main(void)
{
	char d[8] = "abcdefg";
	char s[8] = "hijklmn";

	// Noverlap
	ft_memcpy(d,s,8);
	printf("%s\n", d);

	// Overlap
	// The null is copied
	ft_memcpy(s,s+3,8);
	printf("%s\n", s);

	// The null is nver coppied, segfault
	ft_memcpy(d+3,d,8);
	printf("%s\n", d);
	return(0);
}
