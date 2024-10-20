
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	ch;
	char	*str;

	ch = c;
	str = (char *)s;
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == ch)
		{
			return (&str[len]);
		}
		len--;
	}
	return (NULL);
}
