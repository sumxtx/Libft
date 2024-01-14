/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:45:18 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/14 12:20:09 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks whether a character is a digit or not */

#include "libft.h"
//#include <stdio.h>
int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
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
// 		printf("%c, %d\n", cadena[i], ft_isdigit(cadena[i]));
// 	}
// 	return (0);
// }
