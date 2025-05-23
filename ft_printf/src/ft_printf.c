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

