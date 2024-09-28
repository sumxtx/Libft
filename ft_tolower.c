
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
//
//int main(void)
//{
//	char cadena[] = "09099-=-ESTO ES una CADENA";
//	int i;
//
//	for(i = 0; cadena[i]; i++)
//		cadena[i] = tolower(cadena[i]);
//
//	printf("%s\n", cadena);
//
//	for(i = 0; cadena[i]; i++)
//		cadena[i] = ft_tolower(cadena[i]);
//
//	printf("%s\n", cadena);
//	return (0);
//}
