
/* If an alphabetical character is uppercase switch it to lowercase
 * By summing 32 to it's value on the ASCII table Ex: A = 97, a = 65 
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		c += 32;
	return (c);
}
