/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:37:45 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/15 06:19:48 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	dlen;

	dlen = ft_strlen(dst);
	dst[dlen + dstsize] = '\0';
	while (dstsize--)
		dst[dlen++] = *src++;
	return (ft_strlen(dst));
}
