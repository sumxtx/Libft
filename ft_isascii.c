/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:08:08 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/14 15:31:32 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks whether a character is an ascii or not */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
//	int i, j;
//	for (i = j = 0; i <= 256; i++)
//	{
//		printf("%d %c, %d, %d\n", j++, i, isascii(i), ft_isalnum(i));
//	}
//	return 0;
//}
