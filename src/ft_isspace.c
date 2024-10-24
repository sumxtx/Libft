
/* Check if a character is a space character 
 * ASCII: 
 *      9 = horizontal tab
 *      10 = new line
 *      11 = vertical tab
 *      12 = form feed, new page
 *      13 = carriage return
 *      32 = space
*/

#include "libft.h"

int ft_isspace(int c)
{
        if ((c >= 9 && c <= 13) || c == 32)
                return (1);
        return (0);
} 
