
#include "libft.h"

/* No bzero */
void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	n;
	size_t	i;
	
	n = count * size;
	ptr = (char *) malloc(n);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (n > 0)
	{
		ptr[i] = '\0';
		i++;
		n--;
	}
	return (ptr);
}
//void	*ft_calloc(size_t count, size_t size)
//{
//	void			*ptr;
//	size_t			n;
//	unsigned int	i;
//	unsigned char	*str;
//
//	n = count * size;
//	ptr = (void *) malloc(n);
//	if (ptr == NULL)
//		return (NULL);
//	i = 0;
//	str = ptr;
//	while (n > 0)
//	{
//		str[i] = '\0';
//		i++;
//		n--;
//	}
//	return (str);
//}
/* With bzero
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *) malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
*/
