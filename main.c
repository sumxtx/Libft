/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 04:57:45 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/16 14:07:49 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	
	(void)argc;
//	char str1[15];
//	char str2[15];

	printf("argv1: %s\n", argv[1]);

	printf("argv2: %s\n", argv[2]);

	int argv3 = atoi(&argv[3][0]);
	printf("argv3: %c\n", argv3);

	int ret;
	int ret2;
	
	//memcpy(str1, "abcdEF", 6);
	//memcpy(str2, "abcdef", 6);
	
	ret = memcmp(argv[1], argv[2], argv3);
	ret2 = ft_memcmp(argv[1], argv[2], argv3);
	if (ret > 0)
	{
		printf("str2 is less than str1\n");
	}
	else if (ret < 0)
	{
		printf("str1 is less than str2\n");
	}
	else
	{
		printf("str1 is equal to str2\n");
	}
	if (ret2 > 0)
	{
		printf("str2 is less than str1\n");
	}
	else if (ret2 < 0)
	{
		printf("str1 is less than str2\n");
	}
	else
	{
		printf("str1 is equal to str2\n");
	}
//	//const char str[] = "aasapdiifpoaidspofiofopaodspfopopop";
//	//const char ch = '.';
//	char *ret;
//	char *ret2;
//
//	int argv2 = ft_isascii(argv[2][0]);
//	printf("argv2: %c\n", argv2);
//
//	int argv3 = ft_isdigit(argv[3][0]);
//	printf("argv3: %c\n", argv3);
//
//	ret = memchr(argv[1], argv2, argv3);
//	ret2 = ft_memchr(argv[1], argv2, argv3);
//
//	printf("String after |%c| is - |%s|\n", argv2, ret);
//	printf("String after |%c| is - |%s|\n", argv2, ret2);
//	(void)argc;
//	char buffer[20] = "123456789012346789";
//	//(void)argv;
//	printf("\nbefore memcpy: %s \n", argv[1]);
//	ft_memcpy(buffer, argv[1], ft_strlen(buffer));
//	printf("\nafter memcpy: %s \n", buffer);
	
//int main(void)
//{
//
	//printf("\n-----------------OG BZERO------------------");
	////char buffer[80] = "adfa9sdf9a9df-a0s9df0-";
	//printf("\nbefore bzero: %s \n", argv[1]);

	//bzero(argv[1], strlen(argv[1]));
	//printf("\nafter bzero: %s \n", argv[1]);

	//printf("\n-----------------MY BZERO------------------");
	////char buffer2[80] = "padfpoiasdpofiaosidfi'-";
	//printf("\nbefore ft_bzero: %s \n", argv[2]);
	//
	//ft_bzero(argv[2], strlen(argv[2]));
	//printf("\nafter ft_bzero: %s \n", argv[2]);
//
//
//
//	return (0);
//}
	//char v[10] = "Testing";
	//char *ret2;

	//ft_memset(v, '0', 7);
	//int del = argv[2][0];
	//printf("c %s\n", v);

	//ret2 = ft_strdup(argv[1]);	

	//printf("%s\n", ret2);
	//printf("%s\n", ret2);
	//free(ret2);
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
