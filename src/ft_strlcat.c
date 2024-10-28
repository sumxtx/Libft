
/* Appends the NULL-terminated string src to the end of dst.
 * It will append at most size - strlen(dst) - 1 bytes, \
 * NULL-terminating the result.

 * This implementation is based on the glibc one as well
 * I will stick with it by now
 * The one i had before was very unclean and confuse
 * that took off after lot's of trials and errors
 * Was a "just works by lucky" one
 */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t src_len;
	size_t dst_len;
	size_t to_copy;
	char *target;
	
	src_len = ft_strlen(src);
	if(size == 0)
		return (src_len);
	// We need to look for a null character in the destination before
	// the length we want to concatenate
	dst_len = ft_strnlen(dst, size);
	// if there's  a null somewhere before the size we want to copy
	// therefore we have space left to concatenate
	if (dst_len != size)
	{
		// calculate the size to concatenate based on
		// the size asked to concatenate minus the size we already have
		// minus 1 for null
		to_copy = (size - dst_len -1);
		// the size asked to concatenate may not be
		// greater than what we really need to concatenate
		if (to_copy > src_len)
			to_copy = src_len;
		// target is a pointer to the beginning of dest
		// + it's length, where we want to start concatenate
		target = dst + dst_len;
		ft_memcpy(target, src, to_copy);
		target[to_copy] = '\0';
	}
	return (dst_len + src_len);
}
