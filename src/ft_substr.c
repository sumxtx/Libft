
#include "libft.h"

/*  Allocates with malloc(3) and returns a substring from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;
	unsigned int	slen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		len = 0;
	if (len > (slen - start))
		len = slen - start;
	new = (char *) malloc((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	while ((len > 0) && (s[start] != '\0'))
	{
		new[i] = s[start];
		len--;
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
