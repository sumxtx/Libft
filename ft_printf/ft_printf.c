#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		flag;
	int		count;
	va_list	params;

	flag = 0;
	count = 0;
	va_start(params, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			flag = _formatspec(format, params);
		}
		else
			flag = _ft_putchar(1, (int)*format);
		if (flag == -1)
			return (-1);
		count += flag;
		if (*format != '\0')
			format++;
	}
	va_end(params);
	return (count);
}

int	_formatspec(const char *format, va_list params)
{
	if (*format == 'c')
		return (_ft_putchar(1, va_arg(params, int)));
	else if (*format == 's')
		return (_ft_putstr(va_arg(params, char *)));
	else if ((*format == 'd') || (*format == 'i'))
		return (_ft_putnbr("0123456789", (va_arg(params, int))));
	else if (*format == 'x')
		return (_ft_puthex_uint("0123456789abcdef", va_arg(params, unsigned int),16, NULL));
	else if (*format == 'X')
		return (_ft_puthex_uint("0123456789ABCDEF", va_arg(params, unsigned int),16,NULL));
	else if (*format == 'p')
		return (_ft_puthex_uint("0123456789abcdef", 0, 16,(va_arg(params, void *))));
	else if (*format == 'u')
		return (_ft_puthex_uint("0123456789", va_arg(params, unsigned int),10, NULL));
	else if (*format == '%')
		return (_ft_putchar(1, '%'));
	else if (*format == '\0')
		return (0);
	else
		return (-1);
}

int	_ft_putchar(int fd, int ch)
{
	return (write(1, &ch, 1));
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
	if (nbr >= base)
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
