
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char		*s1;
	unsigned char		*s2;

	s1 = (unsigned char *) str1;
	s2 = (unsigned char *) str2;
	if (!n)
		return (0);
	while (--n && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((int)(*s1 - *s2));
}
