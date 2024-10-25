
/* If an alphabetical character is lowercase switch it to uppercase 
 * By resting 32 to it's value on the ASCII table Ex: A = 97, a = 65 
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_islower(c))
		c -= 32;
	return (c);
}
