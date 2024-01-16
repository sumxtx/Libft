/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:54:35 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/16 06:00:07 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks whether a character is an alphanumeric or not */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z' )
		|| (c >= '0' && c <= '9'))
	{
		return (c);
	}
	else
	{
		return (0);
	}
}
// int main(void)
// {
// 	char cadena[] = ";000000sddddR(h&R1/";
// 	int i;
// 	for (i = 0; cadena[i]; i++)
// 	{
// 		printf("%c, %d\n", cadena[i], ft_isalnum(cadena[i]));
// 		printf("%c, %d\n", cadena[i], ft_isalnum(cadena[i]));
// 		printf("%c, %d\n", cadena[i], ft_isalnum(cadena[i]));
// 	}
// 	return (0);
// }
