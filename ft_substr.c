
#include "libft.h"

/*Allocates (with malloc(3)) and returns a substring from the string ’s’.
 * The substring begins at index ’start’ and is of maximum size ’len’.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*newstr;
	unsigned int	n_ind;
	unsigned int	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	if (len > (s_len - start))
		len = s_len - start;
	newstr = (char *) malloc((len + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	n_ind = 0;
	while (len > 0 && s[start] != '\0')
	{
		newstr[n_ind] = s[start];
		len--;
		start++;
		n_ind++;
	}
	newstr[n_ind] = '\0';
	return (newstr);
}
