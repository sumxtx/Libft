/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 04:57:45 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/14 13:23:43 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
int	ret5;

if (argc != 2)
{
	printf("Usage: ./out <char>\nExample: ./out A");
	return (0);
}
else
{
	ret5 = ft_isprint(*argv[1]);
	if (ret5 != 0)
	{
		printf("%c is printable", *argv[1]);
	}
	else
	{
		printf("%c is not printable", *argv[1]);
	}
}

//// int	ret4;
//
// if (argc != 2)
// {
// 	printf("Usage: ./out <char>\nExample: ./out A");
// 	return (0);
// }
// else
// {
// 	ret4 = ft_isascii(*argv[1]);
// 	if (ret4 != 0)
// 	{
// 		printf("%c is ascii", *argv[1]);
// 	}
// 	else
// 	{
// 		printf("%c is not ascii", *argv[1]);
// 	}
// }
////
////is alnum
//   int	ret3;
//
//   if (argc != 2)
//   {
//   	printf("Usage: ./out <char>\nExample: ./out A");
//   	return (0);
//   }
//   else
//   {
//   	ret3 = ft_isalnum(*argv[1]);
//   	if (ret3 != 0)
//   	{
//   		printf("%c is alphanumerical", *argv[1]);
//   	}
//   	else
//   	{
//   		printf("%c is not alphanumerical", *argv[1]);
//   	}
//   }
////
//// is digit
//	int	ret2;
//
//	if (argc != 2)
//	{
//		printf("Usage: ./out <char>\nExample: ./out A");
//		return (0);
//	}
//	else
//	{
//		ret2 = ft_isdigit(*argv[1]);
//		if (ret2 != 0)
//		{
//			printf("%c is digit", *argv[1]);
//		}
//		else
//		{
//			printf("%c is not digit", *argv[1]);
//		}
//	}
////
//// is alpha
//	int	ret;
//
//	if (argc != 2)
//	{
//		printf("Usage: .out <char>\nExample: .out A");
//		return (0);
//	}
//	else
//	{
//		ret = ft_isalpha(*argv[1]);
//		if (ret != 0)
//		{
//			printf("%c is alphabetical", *argv[1]);
//		}
//		else
//		{
//			printf("%c is not alphabetical", *argv[1]);
//		}
//	}
////
	return (0);
}
