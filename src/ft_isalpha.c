
/* Checks wheter a character is an alphabetical character or not */

#include "libft.h"

int ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	return (0);
}
