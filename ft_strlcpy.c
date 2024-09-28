/* Copy string src to buffer dst of size dsize.  
 * At most dsize-1
 * chars will be copied.  
 * Always NUL terminates (unless dsize == 0).
 * Returns strlen(src); 
 * if retval >= dsize, truncation occurred.
 *
 * Broken when the src is bigger than the destination and we pass a bigger 
 * dstsize then the destination buffer size.
 *
 * size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
 *{
 *	size_t	i;
 *
 *	i = 0;
 *	if (!dst || !src)
 *		return (0);
 *	if (dstsize == 0)
 *		return (ft_strlen((char *) src));
 *	while (src[i] != '\0' && i < dstsize -1)
 *	{
 *		dst[i] = src[i];
 *		i++;
 *	}
 *	dst[i] = '\0';
 *	return (ft_strlen((char *)src));
 *}
 */
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src && src[i] != '\0' && i < dstsize -1)
		{
			dst[i] = src[i];
			i++;
		}
		if (src)
			dst[i] = '\0';
	}
	return (ft_strlen((char *)src));
}
