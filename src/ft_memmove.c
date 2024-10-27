
/* The memmove() function copies n bytes from string src to string dst.
 * The two strings may overlap.
 * The copy is always done in a non-destructive manner.
 * It chooses the order in which the bytes are copied 
 * depending on the structure of the overlap. 
 * If the end of the destination overlaps with the beginning of the source, 
 * you copy in the forward direction 
 * so that the first bits in the source don't get clobbered 
 * before they are captured
 * And also without requiring a secondary buffer
 * The memmove() function returns the original value of dst.
 */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (src == NULL && dst == NULL)
		return (NULL);

	unsigned char		*dstp;
	unsigned long int 	addr_dstp
	unsigned long int 	addr_srcp
	const unsigned char	*srcp;

	dstp = dst;
	srcp = src;
	addr_dstp = (long int) dst;
	addr_srcp= (long int) src;

	if ((addr_dstp - addr_srcp) <= n)
	{
		// Better copy from end to beggining
		while (n-- > 0)
			dstp[n] = srcp[n];
	}
	else
	{
		// Safe to copy from beginnin to the end
		while (n-- > 0)
			*dstp++ = *srcp++;
	}
	return (dst);
} 
