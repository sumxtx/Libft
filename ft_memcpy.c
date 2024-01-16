/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 05:13:01 by smoraes-          #+#    #+#             */
/*   Updated: 2024/01/16 08:35:21 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Copies n bytes from memory area src to memory area dst. */
/* If dst and src overlap, behavior is undefined. */
/* Applications which dst and src might overlap should use ft_memmove instead*/

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char		*dstr;
	const unsigned char	*sstr;

	if (dst == NULL)
		return (NULL);
	dstr = dst;
	sstr = src;
	while (n--)
		*dstr++ = *sstr++;
	return (dst);
}
//typedef struct
//{
//  char name[256];
//  int age;
//  double average;
//} Student;
//
//int main (void)
//{
//  // arrays
//	const char src[] = "copy this";
//	char dest [50];
//
//	printf("src: %s\n", src);
//	printf("Before memcpy dest = %s\n", dest);
//
//  char *dest_ptr = memcpy(dest, src, strlen(src) + 1);
//	printf("After memcpy dest = %s\n", dest);
//	printf("dest_ptr: %p\n", dest_ptr);
//	printf("dest: %p\n", dest);
//
//  // doubles
//  double src_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
//  double dest_array[5];
//
//  memcpy(dest_array, src_array, sizeof(src_array));
//  for (int i = 0; i < 5; i++)
//    printf("dest_array[%d] = %f\n", i, dest_array[i]);
//
//  // structs
//  Student student1;
//  strcpy(student1.name, "Sai");
//  student1.age = 20;
//  student1.average = 90.5;
//
//  Student student2;
//
//  memcpy(&student2, &student1, sizeof(Student));
//
//  printf("student2 Name: %s\n", student2.name);
//  printf("student2 Age: %d\n", student2.age);
//  printf("student2 Average: %f\n", student2.average);
//
//  printf("\n-------------------ft_memcpy--------------------");
//  // arrays
//	const char src2[] = "copy this";
//	char dest2[50];
//
//	printf("src2: %s\n", src2);
//	printf("Before ft_memcpy dest = %s\n", dest2);
//
//  char *dest_ptr2 = ft_memcpy(dest2, src2, strlen(src2) + 1);
//	printf("After ft_memcpy dest = %s\n", dest2);
//	printf("dest_ptr2: %p\n", dest_ptr2);
//	printf("dest2: %p\n", dest2);
//
//  // doubles
//  double src_array2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
//  double dest_array2[5];
//
//  memcpy(dest_array2, src_array2, sizeof(src_array2));
//  for (int i = 0; i < 5; i++)
//    printf("dest_array[%d] = %f\n", i, dest_array2[i]);
//
//  // structs
//  Student student3;
//  strcpy(student3.name, "Sai");
//  student3.age = 20;
//  student3.average = 90.5;
//
//  Student student4;
//
//  memcpy(&student4, &student3, sizeof(Student));
//
//  printf("student4 Name: %s\n", student3.name);
//  printf("student4 Age: %d\n", student3.age);
//  printf("student4 Average: %f\n", student3.average);
//
//  return (0);
//}
//
