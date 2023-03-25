/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:07:46 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/25 20:44:27 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
int main(void) {
	char			dest1[30] = "abcde";
	char			dest2[30] = "abcde";
	char			src[10] = "xyz";
	unsigned int	size;

	size = 0;
	while (size < 7)
	{
		printf("size : %u------------------\n", size);
		printf("strlcpy: return:%lu, dest:%s\n", strlcpy(dest1, src, size), dest1);
		printf("my func: return:%zu, dest:%s\n\n", ft_strlcpy(dest2, src, size), dest2);
		size++;
	}
	return 0;
}
*/