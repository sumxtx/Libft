
/* Locates the first occurrence of c (converted to an unsigned char) in string s.  
 * The memchr() function returns a pointer to the byte located, or NULL if 
 * no such byte exists within n bytes. 
 *
 * The main difference with the strchr 
 * As it's comparing memory region not an string 
 * it doesn't necesarily stops when a '\0' character is found
 * 
 */

#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char   ch;
	unsigned char   *str;

    str = NULL;
	ch = (unsigned char)c;
    if (n == 0)
    {
        return ((void *)str);
    }
	str = (unsigned char*)s;
	while (n)
	{
		if (*str == ch)
			return ((void *)str);
		str++;
        n--;
	}
	return (NULL);
}
/*
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char   ch;
	unsigned char   *str;

	ch = c;
	str = (unsigned char*)s;
	while (--n)
	{
		if (*str == ch)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
*/
