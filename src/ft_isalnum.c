
/*  Checks whether a character is an alphanumeric or not */

#include "libft.h"

int ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
