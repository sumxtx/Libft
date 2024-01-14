/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:26:16 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/14 13:21:15 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Check whether a character is printable or not */

#include "libft.h"

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (c);
	}
	else
	{
		return (0);
	}
}
//int main ()
//{
//	//char cadena[] = ";000000sddddR(h&R1/";
//	int i, j;
//	for (i = j = 0; i <= 256; i++)
//	{
//		printf("%d %c, %d, %d\n", j++, i, isprint(i), ft_isprint(i));
//	}
//	return 0;
//}
