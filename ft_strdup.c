/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:31:56 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/15 17:22:26 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *dst;
	int s1l;
	int i;
	
	i = 0;
	s1l = ft_strlen((char *)s1);
	dst = malloc(s1l * sizeof(char));

	if (dst != NULL)
	{
		while(s1l-- > 0)
		{
			dst[i] = s1[i];
			i++;
		}
	}
	else
	{
		printf("Not allocated");
		printf("Not allocated");
		printf("Not allocated");
		printf("Not allocated");
		return (NULL);
	}
	return (dst);
}
