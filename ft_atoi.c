
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
/*
int	ft_atoi(const char *str)
{
	int	i;
	int	pos;
	int	conv;

	i = 0;
	pos = 1;
	conv = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
			return (0);
		if (str[i] == '-')
			pos *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		conv *= 10;
		conv += (str[i++] - '0');
	}
	return (conv * pos);
}
*/
