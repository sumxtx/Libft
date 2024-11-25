
/* Copies n bytes from memory area src to memory area dst.
 * If dst and src overlap, behavior is undefined.
 * Applications which dst and src might overlap should use ft_memmove instead
 */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dstr;
	unsigned char   *sstr;

	dstr = dst;
	sstr = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n--)
		*dstr++ = *sstr++;
	return (dst);
}
