/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:34:10 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/03 22:16:14 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  The memchr() function locates the first occurrence of c 
(converted to an unsigned char) in string s.
The memchr() function returns a pointer to the byte located, 
or NULL if no such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(ptr + i) == c)
			return ((void *)(ptr + i));
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char	ch = 'a';
	char	*str1 = "abcdefg";
	char	*str2 = "abcdefg";
	int		n;

	while (ch <= 'j')
	{
		printf("%c : \n", ch);
		n = 1;
		while (n < 7)
		{
			printf("%s %s\n", ft_memchr(str1, ch, n), memchr(str2, ch, n));
			n++;
		}
		printf("\n\n");
		ch++;
	}
	return (0);
}
*/