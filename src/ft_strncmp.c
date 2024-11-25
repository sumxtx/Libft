
/* Compare n bytes of the strings s1 and s2 
 * returns:
 * 	0 if s1 and s2 are equal
 * 	negative value: if s1 is less than s2
 * 	positive value: if s1 is grater than s2
 */

#include "libft.h"
#include "stdio.h"
#include "string.h"

int    ft_strncmp(const char *s1, const char *s2, size_t n)
{
    char* ptr_s1;
    char* ptr_s2;
    
    ptr_s1 = (char *)s1;
    ptr_s2 = (char *)s2;
    
    if (n == 0)
        return (0);
    while ((*ptr_s1 != '\0' && *ptr_s2 != '\0') && --n)
    {
        if (*ptr_s1 != *ptr_s2)
            return (((unsigned char) *ptr_s1) - ((unsigned char) *ptr_s2));
        ++ptr_s1;
        ++ptr_s2;
    }
    return (((unsigned char) *ptr_s1) - ((unsigned char) *ptr_s2));
}

/*
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
*/
