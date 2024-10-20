
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int i, char *c))
{
	int	ind;

	ind = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[ind] != '\0')
	{
		f((unsigned int)ind, &s[ind]);
		ind++;
	}
}
