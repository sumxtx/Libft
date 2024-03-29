/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 02:41:20 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/15 14:23:46 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int	last;
	char	*st;

	st = (char *)s;
	ch = c;
	last = (ft_strlen(st));

	while(last >= 0)
	{
		if (st[last] == ch)
			return (&st[last]);
		last--;
	}

	return(NULL);
}
