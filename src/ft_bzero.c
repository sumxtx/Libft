
/* Writes n zeroed bytes '\0' to the string s. */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
