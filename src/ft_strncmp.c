
/* Compare n bytes of the strings s1 and s2 
 * returns:
 * 	0 if s1 and s2 are equal
 * 	negative value: if s1 is less than s2
 * 	positive value: if s1 is grater than s2
 */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < (n -1))
	{
		if (s1[i] != s2[i])
			return (((unsigned char) s1[i]) - ((unsigned char) s2[i]));
		i++;
	}
	if (i != n)
		return (((unsigned char) s1[i]) - ((unsigned char) s2[i]));
	return (0);
}
