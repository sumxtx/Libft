
/* Checks wheter a character is an alphabet character or not */

#include "libft.h"

int ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z' ))
		return (1);
	return (0);
}
