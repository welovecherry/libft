/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:57:03 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/07 15:35:43 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				idx;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (dst == 0 && src == 0)
		return (dst);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	if (dst < src)
		ft_memcpy(ptr_dst, ptr_src, len);
	else
	{
		idx = len - 1;
		while (idx >= 0)
		{
			ptr_dst[idx] = ptr_src[idx];
			idx--;
		}
	}
	return (dst);
}

/*The memmove() function copies len bytes from string src to string dst.  
The two strings may overlap;
the copy is always done in a non-destructive manner. */
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int	main(void)
{
	size_t	len = 8;
	char dst1[20];
	char dst2[20];
	char src1[20] = "123456789";
	char src2[20] = "123456789";
	char	src3[] = "lorem ipsum dolor sit amet";
	char	src4[] = "lorem ipsum dolor sit amet";
	
	write(1, "my func :", 9);
	ft_memmove(dst1, src1, len);
	write(1, dst1, len);
	write(1, "\n", 1);
	
	memmove(dst2, src2, len);
	write(1, "memmove :", 9);
	write(1, dst2, len);	
}
*/