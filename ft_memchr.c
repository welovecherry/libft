/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:34:10 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/22 19:57:40 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
/*  The memchr() function locates the first occurrence of c 
(converted to an unsigned char) in string s.
The memchr() function returns a pointer to the byte located, 
or NULL if no such byte exists within n bytes.*/

void *ft_memchr(const void *s, int c, size_t n)
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
