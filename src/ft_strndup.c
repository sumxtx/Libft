
/* Copies at most n bytes of string s to a new string */

#include "libft.h"

char *ft_strndup(const char *s, size_t n)
{
	size_t len;
	char *new;

	len = ft_strnlen(s, n);
	new = (char *)malloc(len + 1);
	if (! new)
		return (NULL);
	new = (char *)ft_memcpy(new, s, len);
	new[len] = '\0'; 

	return (new);
}
