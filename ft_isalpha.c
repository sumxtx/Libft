/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:26:38 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/14 11:22:45 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks wheter a character is an alphabet or not */

#include "libft.h"
//#include <stdio.h>
int	ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z' ))
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
// 		printf("%c, %d\n", cadena[i], ft_isalpha(cadena[i]));
// 	}
// 	return (0);
// }
