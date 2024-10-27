
/* Writes n bytes of value c to the memory area pointed by s
 * The memset() function returns a pointer to the memory area s 
 */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*str;

	ch = c;
	str = s;
	while (n--)
		*str++ = ch;
	return (s);
}
