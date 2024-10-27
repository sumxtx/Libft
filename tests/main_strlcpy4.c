
// unexpectd behaviours / passing NULL to src or dst for example

#include "libft.h"
#include <stdio.h>
#include <string.h>
int main(int ac, char **av)
{
	//passing null as src
	if(ac != 2)
	{
		printf("./a.out <option>");
		return (1);
	}
	int option = atoi(av[1]);

	// option = 1 passing NULL as parameter to src
	if (option == 1)
	{
		char *src = "A";
		char dst[8];

		strlcpy(dst, src, 3);
	}
	// option = 2 passing NULL as parameter to dst
	else if (option == 1)
	{
		char *src = "";
		char dst[128];

		strlcpy(dst, src, 1);
	}
	return (0);
}
