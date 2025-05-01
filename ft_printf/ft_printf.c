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
			flag = formatspec(format, params);
		}
		else
			flag = write(1, format, 1);
		if (flag == -1)
			return (-1);
		count += flag;
		if (*format != '\0')
			format++;
	}
	va_end(params);
	return (count);
}

int	formatspec(const char *format, va_list params)
{
	if (*format == 'c')
		return (ft_putchar(va_arg(params, int)));
	else if (*format == 's')
		return (ft_putstr(va_arg(params, char *)));
	else if ((*format == 'd') || (*format == 'i'))
		return (ft_putnbr("0123456789", (va_arg(params, int))));
	else if (*format == 'x')
		return (ft_puthex("0123456789abcdef", \
					(va_arg(params, unsigned int))));
	else if (*format == 'X')
		return (ft_puthex("0123456789ABCDEF", \
					(va_arg(params, unsigned int))));
	else if (*format == 'p')
		return (ft_putptr(va_arg(params, void *)));
	else if (*format == 'u')
		return (ft_putuint("0123456789", va_arg(params, unsigned int)));
	else if (*format == '%')
		return (ft_putchar('%'));
	else if (*format == '\0')
		return (0);
	else
		return (-1);
}

int	ft_putchar(int ch)
{
	return (write(1, &ch, 1));
}

int	ft_putstr(char *str)
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
		flag = ft_putchar(*str);
		if (flag == -1)
			return (-1);
		count += flag;
		str++;
	}
	return (count);
}
