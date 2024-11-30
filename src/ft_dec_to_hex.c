#include "libft.h"

static int __ft_putchar(char c, int fd)
{
	return(write(fd, &c, 1));
}

int	ft_dec_to_hex(unsigned int nbr, int fd)
{
	int	flag;
	int	count;
    char subs[17] = "0123456789ABCDEF";

	flag = 0;
	count = 0;
	if (nbr >= 16)
	{
		flag = ft_dec_to_hex((nbr / 16), 1);
		if (flag == -1)
			return (-1);
		count += flag;
	}
	flag = __ft_putchar(subs[(nbr % 16)], fd);
	if (flag == -1)
		return (-1);
	count += flag;
	return (count);
}
