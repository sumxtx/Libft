#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int	ft_printf(const char *format, ...);
int	_formatspec(const char *format, va_list params);
int	_ft_putchar(int fd, int ch);
int	_ft_putstr(char *str);
int	_ft_putnbr(char *subs, long d);
int	_ft_puthex_uint(char *subs, unsigned long nbr, int base, void *ptr);

#endif
