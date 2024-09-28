
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		ind;
	char	c;

	ind = 0;
	while (s[ind] != '\0')
	{
		c = s[ind];
		write(fd, &c, 1);
		ind++;
	}
	write(fd, "\n", 1);
}
