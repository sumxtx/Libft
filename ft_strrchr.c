/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:41:20 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/15 10:10:29 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int	last;

	ch = c;

	last = (ft_strlen((char *)s) + 1);
	
	while (last > 0)
	{
		if (s[last] == ch)
		{
			return ((char *) s + last);
		}
		last--;
	}

	return (NULL);
}
