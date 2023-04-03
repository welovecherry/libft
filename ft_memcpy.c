/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:24:23 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/03 22:17:29 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memcpy() function copies n bytes from memory area src to memory area dst.
If dst and src over-lap, behavior is undefined.  
Applications in which dst and src might overlap should use memmove instead.*/

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	idx;

	idx = 0;
	while (idx < n)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		dst += 1;
		src += 1;
		idx++;
	}
	return ((void *)dst);
}
/*
#include <string.h>
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	int	i;
	int	arr1[5] = {48, 49, 50, 51, 52};
// to use write function with printable value, put ascii value in arr1
//	char	str1[10] = "aaaaaaaa"; 
///	char	str2[10] = "aaaaaaaa"; 

	for (i=0; i<5; i++)
		write(1, &(arr1[i]), 1); // 라이트 함수로 바이트 단위로 출력하는것이 가장 정확하다
		// printf("%d ", arr1[i]);
	// memcpy(arr2, arr1, sizeof(arr2));
	// printf("\n");
	// for (i=0; i<5; i++)
	// 	printf("%d ", arr2[i]);

	
	return (0);
}
*/