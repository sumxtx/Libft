/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:55:49 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/14 15:36:16 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks the length of a given string not including the null character */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>
int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
//int	main(void)
//{
//	char iv[10] = "test";
//
//	int	orig = strlen(iv);
//	int	mine = ft_strlen(iv);
//
//	printf("%d, %d", orig, mine);
//	return (0);
//}
