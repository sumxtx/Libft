
/* The memchr() function locates the first occurrence of c (converted to 
 * an unsigned char) in string s.  
 * The memchr() function returns a pointer to the byte located, or NULL if 
 * no such byte exists within n bytes. */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char		ch;
	const unsigned char	*str;

	ch = c;
	str = s;
	i = 0;
	while (n > 0)
	{
		if (str[i] == ch)
			return ((void *)str + i);
		i++;
		n--;
	}
	return (NULL);
}
