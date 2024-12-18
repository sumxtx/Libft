
/* Returns a pointer to the first occurrence of character c in the string s. */

#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    char *str;
    str = (char *)s;
    while (*str != '\0')
    {
        if (*str == (char)c)
            return (str);
        str++;
    }

    if (*str == (char)c)
        return (str);
    return (NULL);
}
/*
char *ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s +i);
		i++;
	}

	if (s[i] == (char)c)
		return ((char *)s +i);
	return (NULL);
}
*/
