
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char		*s1;
	unsigned char		*s2;

	s1 = (unsigned char *) str1;
	s2 = (unsigned char *) str2;
	if (n == 0)
		return (0);
	while ((*s1 == *s2) && --n)
	{
		s1++;
		s2++;
	}
	return ((int)(*s1 - *s2));
}
