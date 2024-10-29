
/* Duplicates a string */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		slen;
	char	*dst;

	i = 0;
	slen = ft_strlen(s);
	dst = malloc((slen + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	if (dst != NULL)
	{
		while (slen && s[i] != '\0')
		{
			dst[i] = s[i];
			i++;
			slen--;
		}
	}
	dst[i] = '\0';
	return (dst);
}
