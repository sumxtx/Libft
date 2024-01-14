/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 04:57:45 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/14 11:18:32 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	int	ret;

	if (argc != 2)
	{
		printf("Usage: .out <char>\nExample: .out A");
		return (0);
	}
	else
	{
		ret = ft_isalpha(*argv[1]);
		if (ret != 0)
		{
			printf("%c is alphabetical", *argv[1]);
		}
		else
		{
			printf("%c is not alphabetical", *argv[1]);
		}
	}
	return (0);
}
