
/* Converts a string to an integer */

#include "libft.h"

int ft_atoi(const char *s)
{
	int nbr;
	int pos;

	nbr = 0;
	pos = 1;
	while((*s >=9 && *s <= 13) || *s == 32)
		s++;
	if (*s == '-')
		pos = -1;
	if(*s == '-' || *s == '+')
		s++;
	while(*s >= '0' && *s <= '9')
	{
		nbr *= 10;
		nbr += (*s) - '0';
		s++;
	}
	return (nbr * pos);
}
