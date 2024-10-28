
/* Determine the length of a fixed size string */

#include "libft.h"

size_t ft_strnlen(const char *s, size_t maxlen)
{
	size_t nlen;

	nlen = 0;
	while (s[nlen] != '\0' && maxlen > 0)
	{
		nlen++;
		maxlen--;
	}
	return (nlen);
}
