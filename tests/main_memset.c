#include "libft.h"
#include <stdio.h>

int main(void)
{
	char s[8];

	// not an ideal case as if will try to print it 
	// it will not terminate and leak
	ft_memset(s, 'd', 8);
	// we cant fill it with nulls
	ft_memset(s, '\0', 8);
	// And reserve the last byte
	ft_memset(s, 'd', 7);

	printf("%s", s );

	return(0);
}
