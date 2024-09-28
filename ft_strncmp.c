
#include "libft.h"

/* int	ft_strncmp(const char *s1, const char *s2, size_t n)
 *{
 *	unsigned int	i;
 *	//if (!s2 || !s1 || n == 0)
 *	//	return (NULL);
 *	if (n == 0)
 *		return (0);
 *
 *	i = 0;
 *	while (s1[i] != '\0' && s2[i] != '\0' && i < (n -1))
 *	{
 *		if (s1[i] != s2[i])
 *			return (((unsigned char) s1[i]) - ((unsigned char) s2[i]));
 *		++i;
 *	}
 *	if (i != n)
 *		return (((unsigned char) s1[i]) - ((unsigned char) s2[i]));
 *	return (0);
 *}
 *
 *
 *int	ft_strncmp(const char *s1, const char *s2, size_t n)
 *{
 *	int	count;
 *
 *	count = 0;
 *	while (n-- && *s1 && *s2)
 *	{
 *		if (*s1 == *s2)
 *			count += (*s1++ - *s2++);
 *		else if (*s1 > *s2)
 *			count += (*s1++ + *s2++);
 *		else if (*s1 < *s2)
 *			count += (*s1++ - *s2++);
 *	}
 *	return (count);
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < (n -1))
	{
		if (s1[i] != s2[i])
			return (((unsigned char) s1[i]) - ((unsigned char) s2[i]));
		++i;
	}
	if (i != n)
		return (((unsigned char) s1[i]) - ((unsigned char) s2[i]));
	return (0);
}
