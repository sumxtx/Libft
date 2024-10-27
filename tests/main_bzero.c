
// basically the same as calling memset but already passing
// the zero byte '\0' to it

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char s[8];

	// not an ideal case as if will try to print it 
	// it will not terminate and leak
	ft_bzero(s, 8);

	printf("%s", s );

	return(0);
}
