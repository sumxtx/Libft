/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 05:15:40 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/16 09:23:52 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char ch;
	const unsigned char *str;

	ch = c;
	str = s;

	while (n--)
	{
		if (*str++ == c)
			return ((void *)--str);
	}
	return (NULL);
}

