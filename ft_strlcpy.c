/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:07:46 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/07 15:30:34 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	if (src_len == 0)
	{
		*dst = '\0';
		return (src_len);
	}
	i = 0;
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/*
#include <stdio.h>
#include <string.h>
int main(void) {
	char			dest1[30] = "abcde";
	char			dest2[30] = "abcde";
	char			dest3[30] = "^@rrrrr^@^@^@^@^@^@^@^@^@";
	char			dest4[30] = "^@rrrrr^@^@^@^@^@^@^@^@^@";
	char			src[10] = "";
	unsigned int	size;
	int i;
	char c;
	//size = 0;
	//while (size < 7)
	//{
	//	printf("size : %u------------------\n", size);
	//	printf("ori:ret:%lu,d:%s\n",strlcpy(dest1, src, size),dest1);
	//	printf("my:ret:%zu,d:%s\n\n",ft_strlcpy(dest2,src,size),dest2);
	//	size++;
	//}
	//printf("ori: ret:%lu, d:%s\n", strlcpy(dest3, src, size), dest3);
	//printf("my:ret:%zu,d:%s\n\n", ft_strlcpy(dest4,src,size), dest4);
	ft_strlcpy(dest3, src, 15);

	i = 0;
	while (i < 15)
	{
		c = dest3[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);


	
	strlcpy(dest4, src, 1);
	i = 0;
	while (i < 15)
	{
		c = dest4[i] + '0';
		write(1, &c, 1);
		i++;
	}
	return 0;
}
*/