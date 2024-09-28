
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*s2;
	unsigned int	ind;

	if (!s || !f)
		return (NULL);
	ind = 0;
	s2 = (char *) s;
	str = (char *) malloc (sizeof(char) * (ft_strlen(s2)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[ind] != '\0')
	{
		str[ind] = f((unsigned int)ind, s2[ind]);
		ind++;
	}
	str[ind] = '\0';
	return (str);
}
