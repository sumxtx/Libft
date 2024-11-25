
/* Returns a pointer to the last occurrence of the character c in the string s.*/

#include "libft.h"
char    *ft_strrchr(const char *s, int c)
{
    char  *ptr;
    char  *ret;

    ptr = (char *)s;
    ret = NULL;
    while (*ptr != '\0')
    {
        if (*ptr == (char)c)
            ret = ptr;
        ptr++;
    }
    if (*ptr == (char)c)
        ret = ptr;

    return (ret);
}
/*
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	i = 0;
	str = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			str = ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		str = ((char *)s + i);

	return (str);
}
*/
