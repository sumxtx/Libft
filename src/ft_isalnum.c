
/*  Checks whether a character is an alphanumeric or not 
 *  It's cleaner to do it with ft_isalpha and ft_isdigit
 *  But i prefer it to be "stand-alone"
 * */

#include "libft.h"

int ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z' ) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
