/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:24:22 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/14 17:29:39 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	dst[ft_strlen(dst)]= '\0';
	printf("ft_strlen: %d\n", ft_strlen(dst));
	while (*src && --dstsize)
		*dst++ = *src++;
	return (ft_strlen((char *)src));
}

