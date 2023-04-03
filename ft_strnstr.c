/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:00:27 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/03 22:22:33 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strnstr() function locates the first occurrence of the null-terminated
string needle in the string haystack, where not more than len characters are
searched.  
Characters that appear after a `\0' character are not searched.
Since the strnstr() function is a FreeBSD specific API, it should only be
used when portability is not a concern.
*/

int	is_all_same(char *haystack_ptr, size_t h_idx, char *needle_ptr, size_t len)
{
	size_t	n_idx;

	n_idx = 0;
	while (needle_ptr[n_idx] && (n_idx + h_idx <= len))
	{
		if (needle_ptr[n_idx] == haystack_ptr[h_idx])
		{
			h_idx++;
			n_idx++;
		}
		else
			return (0);
	}
	if (needle_ptr[n_idx] == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*needle_ptr;
	char	*haystack_ptr;
	size_t	h_idx;

	haystack_ptr = (char *)haystack;
	needle_ptr = (char *)needle;
	if (needle_ptr[0] == 0)
		return (haystack_ptr);
	if (ft_strlen(needle_ptr) > len)
		return (0);
	h_idx = 0;
	while (haystack_ptr[h_idx] && (h_idx < len))
	{
		if (haystack_ptr[h_idx] == needle_ptr[0])
		{
			if (is_all_same(haystack_ptr, h_idx, needle_ptr, len))
				return (&haystack_ptr[h_idx]);
		}
		h_idx++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	size_t	i;
	char	h1[15] = "abcde11";
	char	n1[10] = "";

	char	h2[15] = "abcde11";
	char	n2[10] = "cd";

	char	h3[15] = "abcde11";
	char	n3[10] = "z";
	
	char	h4[15] = "abcde11ab";
	char	n4[10] = "ab";

	i = 0;
	while (i < 7)
	{
		printf("i = %zu\n", i);
		if (strnstr(h1, n1, i) != ft_strnstr(h1, n1, i))
			printf("1 KO\n");
		if (strnstr(h2, n2, i) != ft_strnstr(h2, n2, i))
			printf("2 KO\n");
		if (strnstr(h3, n3, i) != ft_strnstr(h3, n3, i))
			printf("3 KO\n");
		if (strnstr(h4, n4, i) != ft_strnstr(h4, n4, i))
			printf("4 KO\n");
		i++;
	}
	return (0);
}
*/