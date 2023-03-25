/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:19:04 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/25 21:17:15 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len > dstsize)
		return (src_len + dstsize);
	else
	{
		i = 0;
		while ((i + 1 < dstsize - dst_len) && (src[i] != '\0'))
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	unsigned int	size;

	size = 0;
	while (size < 10)
	{
		char	dest1[20] = "abcde";
		char	dest2[20] = "abcde";
		char	src[10] = "xyz";
		printf("size = %u-----------------\n", size);
		printf("my func ret:%zu, dest:%s\n", ft_strlcat(dest2, src, size), dest2);
		printf("strlcat ret:%lu, dest:%s\n\n", strlcat(dest1, src, size), dest1);
		size++;
	}
	return 0;
} */

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	unsigned int	size;

//	size = 0;
//	while (size < 10)
//	{
//		char	dest1[20] = "01234";
//		char	dest2[20] = "01234";
//		char	src[10] = "efg";
//		printf("size = %u-----------------\n", size);
//		printf("my func ret:%zu, dest:%s\n", ft_strlcat(dest2, src, size), dest2);
//		printf("strlcat ret:%lu, dest:%s\n\n", strlcat(dest1, src, size), dest1);
//		size++;
//	}
//	return 0;
//}