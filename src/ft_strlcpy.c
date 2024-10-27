
/* 
  Copies the characters from a source string to a destination string
  It Assumes that src is null-terminated 
  And null-terminates dst

	// glibc biblically accurate version
	if the length of the source is greater or equal the size we want to copy
	if the size is greater than zero, else return
	only copies size
	nullterminates as we didn't reach any null terminating character
	else, the length of source is smaller than the size we want to copy
	only copies the length of the source + 1
	memcpy will also copy the nullterminate character

	returns the source length
	if size is equal zero returns 0
*/

#include "libft.h"
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t len_src;

	len_src = ft_strlen(src);
	if (len_src >= size)
	{
		if (size > 0)
		{
			ft_memcpy(dst, src, size);
			dst[size -1] = '\0';
		}

	}
	else
	{
		ft_memcpy(dst, src, len_src +1);
	}
	return(len_src);
}
