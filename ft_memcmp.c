/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 07:11:19 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/16 10:06:23 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int count = 0;
	
	const char *s1;
	const char *s2;

	s1 = str1;
	s2 = str2;

	while (n--)
	{
		if (*s1 == *s2)
			count += (*s1++ - *s2++);
		else if (*s1 > *s2)
			count += (*s1++ + *s2++);
		else if (*s1 < *s2)
			count += (*s1++ - *s2++);
	}

	return (count);
}
