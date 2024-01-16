/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:14:57 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/16 12:04:10 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
	int convrtd;
	int ind;

	convrtd = 0;
	ind = 0;
	while(str[ind] != '\0')
	{
		if ((str[ind] == '-') || (str[ind] == '+'))
		{
			ind++;
			if (!((str[ind] >= '0') || (str[ind] <= '9')))
				return (0);
			else
			{
				while(str[ind] >= '0' && str[ind] <= '9')
				{
					convrtd *= 10;
					convrtd += (str[ind++] - 48);
				}
				return(convrtd);
			}
		}
		else if (str[ind] >= '0' && str[ind] <= '9')
		{
			while(str[ind] >= '0' && str[ind] <= '9')
			{
				convrtd *= 10;
				convrtd += (str[ind++] - 48);
			}

		}
		else
		{
			return(0);
		}
	}
	return (convrtd);
}

int main(int argc, char **argv)
{
	(void)argc;
	int ret = atoi(argv[1]);
	int ret2 = ft_atoi(argv[1]);
	printf("%d\n", ret);
	printf("%d\n", ret2);
	return (0);
}
