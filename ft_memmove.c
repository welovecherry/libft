/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:57:03 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/03 22:17:48 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			idx;
	unsigned char	ch;

	idx = 0;
	while (idx < len)
	{
		ch = *(unsigned char *)src;
		*(unsigned char *)dst = ch;
		dst += 1;
		src += 1;
		idx++;
	}
	return ((void *)dst);
}

/*The memmove() function copies len bytes from string src to string dst.  
The two strings may overlap;the copy is always done in a non-destructive manner.

#include <stdio.h>
#include <string.h>
#include <unistd.h>
int	main(void)
{
	size_t	len = 10;
	char dst1[20];
	char dst2[20];
	char src1[20] = "123456789";
	char src2[20] = "123456789";

	write(1, "my func :", 9);
	ft_memmove(dst1, src1, len);
	write(1, dst1, len);
	write(1, "\n", 1);
	
	memmove(dst2, src2, len);
	write(1, "memmove :", 9);
	write(1, dst2, len);	
	return (0);
}
*/