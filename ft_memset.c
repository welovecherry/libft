/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:22:09 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/05 16:27:48 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	idx;
	void	*return_b;

	return_b = b;
	idx = 0;
	while (idx < len)
	{
		*(unsigned char *)b = (unsigned char)c;
		b = (unsigned char *)b + 1;
		idx++;
	}
	return (return_b);
}
/*
#include <string.h>
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	//int	arr1[10] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	//int	arr2[10] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
	//char	str1[10] = "abcde";
	//char	str2[10] = "abced";
	//int	i;
	char	str3[30] = "jjjjjjjjjjjjjjjjjjjj";
	char	str4[30] = "jjjjjjjjjjjjjjjjjjjj";
	
	printf("addr str3:%p\n", str3);
	printf("addr str3:%p\n", memset(str3, 'c', 5));

	printf("addr str4:%p\n", str4);
	printf("my func  :%p\n", ft_memset(str4, 'c', 5));
	
	//memset(arr1, 0, sizeof(arr1));
	//ft_memset(arr1, 0, sizeof(arr1));
	//i = 0;
	//while(i < 10)
	//{
	//	printf("%d ", arr1[i]);
	//	i++;
	//}
	//printf("\n");
	//ft_memset(arr2, 0, sizeof(arr2));
	//i = 0;
	//while(i < 10)
	//{
	//	printf("%d ", arr2[i]);
	//	i++;
	//}

	//printf("\n\n");
	//memset(str1, '*' ,sizeof(str1));
	//ft_memset(str2, '*' ,sizeof(str2));
	//i = 0;
	//while (i < 10)
	//{
	//	write(1, &(str1[i]), 1);
	//	i++;
	//}
	//write(1, "\n", 1);
	//i = 0;
	//while (i < 10)
	//{
	//	write(1, &(str2[i]), 1);
	//	i++;
	//}
	
	return (0);
}
*/