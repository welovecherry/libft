/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:54:17 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/03 22:22:06 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	s_len;
	char	*ptr_map;

	s_len = ft_strlen(s);
	ptr_map = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!ptr_map)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		ptr_map[i] = f(i, s[i]);
		i++;
	}
	ptr_map[i] = '\0';
	return (ptr_map);
}
/* applies the function ’f’ to each character of the string ’s’, 
and passing its index as first argument to create a new string (with malloc(3))
 resulting from successive applications of ’f’.
*/
/*
char	add_ascii(unsigned int i, char ch)
{
	ch = ch + i;
	return (ch);
}

int	main(void)
{
	char s[10] = "abcde";
	char	*ptr;

	ptr = ft_strmapi(s, add_ascii);
	printf("main res: %s\n", ptr);
	return (0);
}
*/