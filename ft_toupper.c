/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:07:06 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/14 15:15:26 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch -= 32;
	return (ch);
}
//
//int main(void)
//{
//	char cadena[] = "09099-=-esto es una cadena";
//	int i;
//
//	for(i = 0; cadena[i]; i++)
//		cadena[i] = toupper(cadena[i]);
//
//	printf("%s\n", cadena);
//
//	for(i = 0; cadena[i]; i++)
//		cadena[i] = ft_toupper(cadena[i]);
//
//	printf("%s\n", cadena);
//	return (0);
//}
