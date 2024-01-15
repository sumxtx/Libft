/* *******************************************aa******************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 04:57:45 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/15 06:37:45 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	
	(void)argc;
	char *ret;
	char *ret2;
	//int del = argv[2][0];
	//printf("c %c\n", del);

	ret = strrchr(argv[1], '.');
	ret2 = ft_strrchr(argv[1], '.');	

	printf("String after |%c| is - |%s|\n", '.', ret);
	printf("String after |%c| is - |%s|\n", '.', ret2);
	/*
	//(void)argc;
	//char *ret;
	//char *ret2;

	//ret = strchr(argv[1], ((int)argv[2][0]));
	//ret2 = ft_strchr(argv[1], ((int)argv[2][0]));	

	//printf("String after |%c| is - |%s|\n", ((int)argv[2][0]), ret);
	//printf("String after |%c| is - |%s|\n", ((int)argv[2][0]), ret2);

	//const char str[] = "pfpiaofdioadf.afopaopifd.iadf";
	//const char ch = '.';
	//char *ret;
	//char *ret2;

	//ret = strrchr(str, ch);
	//ret2 = ft_strrchr(str, ch);
	//printf("String after |%c| is - |%s|\n", ch, ret);
	//printf("String after |%c| is - |%s|\n", ch, ret2);

	//int ret;
	//int ret2;
	//(void)argc;

	//ret = strncmp(argv[1], argv[2], atoi(argv[3]));
	//ret2 = ft_strncmp(argv[1], argv[2], atoi(argv[3]));

	//if (ret < 0)
	//{
	//	printf("str1 is less than str2\n");
	//}
	//else if (ret > 0)
	//{
	//	printf("str2 is less than str1\n");
	//}
	//else
	//{
	//	printf("str1 is equal to str2\n");
	//}

	//printf("my strncmp\n");
	//if (ret2 < 0)
	//{
	//	printf("str1 is less than str2\n");
	//}
	//else if (ret2 > 0)
	//{
	//	printf("str2 is less than str1\n");
	//}
	//else
	//{
	//	printf("str1 is equal t str2\n");
	//}
	
	//(void) argc;
	//printf("src: %s\ndst: %s\n", argv[1], argv[2]);
	//ft_strlcat(argv[2], argv[1], atoi(argv[3]));
	//printf("src: %s\ndst: %s\n", argv[1], argv[2]);
	////char dst[10];
	//
	//printf("Def strlcpy:\n");
	//strlcpy(argv[2], argv[1], atoi(argv[3]));
	//printf("%s\n", argv[2]);
	//printf("My strlcpy:\n");
	//ft_strlcpy(argv[2], argv[1], atoi(argv[3]));
	//printf("%s\n", argv[2]);
	//printf("%s\n", argv[2]);
	//return (0);

	//int	ret6;

	//if (argc != 2)
	//{
	//	printf("Usage: ./out <char>\nExample: ./out A");
	//	return (0);
	//}
	//else
	//{
	//	ret6 = ft_strlen(argv[1]);
	//	printf("%d ", ret6);
	//	printf("%c ", ret6);
	//}
	//{
	//
	//	int	ret5;
	//
	//	if (argc != 2)
	//	{
	//		printf("Usage: ./out <char>\nExample: ./out A");
	//		return (0);
	//	}
	//	else
	//	{
	//		ret5 = ft_isprint(*argv[1]);
	//		if (ret5 != 0)
	//	{
	//		printf("%c is printable", *argv[1]);
	//	}
	//	else
	//	{
	//		printf("%c is not printable", *argv[1]);
	//	}
	//}
	//
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
	*/
	return (0);
}
