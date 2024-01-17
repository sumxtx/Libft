/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:01:56 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/17 18:02:24 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int			pind;
	char			*ptr;
	unsigned int		ind;

	ptr = (char *) malloc(len);
	if (ptr == NULL)
		return (0);
	else
	{
		ind = start;
		pind = 0;
		while (*s && len--)
		{
			ptr[pind] = s[ind];
			pind++;
			ind++;
		}
	}
	return (ptr);
}
