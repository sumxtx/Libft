
/* The memset() function writes len bytes of value c (converted to an unsigned 
 * char) to the string b
 * The memset() function returns its first argument. */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	ch;
	unsigned char	*str;

	ch = c;
	str = b;
	while (len--)
		*str++ = ch;
	return (b);
}
