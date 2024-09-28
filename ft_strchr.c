
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		ind;

	ch = c;
	ind = 0;
	while (s[ind] != '\0')
	{
		if (s[ind] == ch)
			return ((char *)&s[ind]);
		ind++;
	}
	if (s[ind] == ch)
		return ((char *)&s[ind]);
	return (NULL);
}
