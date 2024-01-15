/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 03:42:04 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/15 06:40:07 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	count;

	count = 0;
	while (n-- && *s1 && *s2)
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
