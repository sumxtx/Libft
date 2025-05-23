#include "ft_printf.h"

int	_ft_putchar(int fd, int ch)
{
	return (write(fd, &ch, 1));
}

int	_ft_putstr(char *str)
{
	int	count;
	int	flag;

	flag = 0;
	count = 0;
	if (!str)
	{
		flag = write(1, "(null)", 6);
		if (flag == -1)
			return (-1);
		count = 6;
		return (count);
	}
	while (*str != '\0')
	{
		flag = _ft_putchar(1, *str);
		if (flag == -1)
			return (-1);
		count += flag;
		str++;
	}
	return (count);
}

int	_ft_putnbr(char *subs, long nbr)
{
	int	flag;
	int	count;

	flag = 0;
	count = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		flag = _ft_putchar(1, '-');
		if (flag == -1)
			return (-1);
		count += flag;
	}
	if (nbr >= 10)
	{
		flag = _ft_putnbr(subs, (nbr / 10));
		if (flag == -1)
			return (-1);
		count += flag;
	}
	flag = _ft_putchar(1, subs[(nbr % 10)]);
	if (flag == -1)
		return (-1);
	count += flag;
	return (count);
}

int	_ft_puthex_uint(char *subs, unsigned long nbr, int base, void *ptr)
{
	int	flag;
	int	count;

	flag = 0;
	count = 0;
  if (nbr == 0)
  {
    nbr = (unsigned long)ptr;
	  flag = write(1, "0x", 2);
	  if (flag == -1)
		  return (-1);
	  count += flag;
  }
	if (nbr >= (unsigned long)base)
	{
		flag = _ft_puthex_uint(subs, (nbr / base), base, ptr);
		if (flag == -1)
			return (-1);
		count += flag;
	}
	flag = _ft_putchar(1, subs[(nbr % base)]);
	if (flag == -1)
		return (-1);
	count += flag;
	return (count);
}
