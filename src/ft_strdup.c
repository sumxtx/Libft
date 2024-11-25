
/* Duplicates a string. Memory of the new string is obtained with malloc*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		slen;
	char	*dst;

	slen = ft_strlen(s);
	dst = malloc((slen + 1) * sizeof(char));
	if (!dst)
		return (NULL);
    dst = (char *)ft_memcpy(dst, s, slen);
	dst[slen] = '\0';
	return (dst);
}
