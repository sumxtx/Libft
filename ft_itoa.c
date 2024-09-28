
#include "libft.h"

char	*is_positive(long count, long n);
char	*is_negative(long count, long n);
char	*is_else(long n);

char	*ft_itoa(int n)
{
	long	m;
	long	count;
	char	*strint;

	count = 0;
	m = n;
	while (m)
	{
		m /= 10;
		count++;
	}
	if (n < 0)
		strint = is_negative(count, n);
	else if (n > 0)
		strint = is_positive(count, n);
	else
		strint = is_else(n);
	return (strint);
}

char	*is_positive(long count, long n)
{
	char			*strint;

	strint = (char *) ft_calloc((count + 1), sizeof(char));
	if (strint != NULL)
	{
		strint[count] = '\0';
		while (count > 0)
		{
			count--;
			strint[count] = ((n % 10) + '0');
			n /= 10;
		}
		return (strint);
	}
	return (NULL);
}

char	*is_negative(long count, long n)
{
	char			*strint;

	n *= (-1);
	strint = (char *) ft_calloc((count + 2), sizeof(char));
	if (strint != NULL)
	{
		strint[count + 1] = '\0';
		strint[0] = '-';
		while (count > 0)
		{
			strint[count] = ((n % 10) + '0');
			n /= 10;
			count--;
		}
		return (strint);
	}
	return (NULL);
}

char	*is_else(long n)
{
	char	*strint;

	strint = (char *) ft_calloc((2), sizeof(char));
	if (strint != NULL)
	{
		if (n == 0)
		{
			strint[1] = '\0';
			strint[0] = '0';
			return (strint);
		}
	}
	return (NULL);
}
