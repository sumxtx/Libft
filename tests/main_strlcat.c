#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
	char s[] = "Source";
	char d[18] = "Destination";

	printf("%s\n", s);
	printf("%s\n", d);
	printf("%lu\n",strlen(d));
	printf("%lu\n", strlcat(d,s,6));
	printf("%s\n", d);
	return (0);

}
