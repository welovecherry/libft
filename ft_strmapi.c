/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:54:17 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/29 19:41:59 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* applies the function ’f’ to each character of the string ’s’, 
and passing its index as first argument to create a new string (with malloc(3))
 resulting from successive applications of ’f’.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	s_len;
	char	*ptr_return;

	s_len = ft_strlen(s);
	ptr_return = (char *)malloc(sizeof(char) * (s_len + 1));
	i = 0;
	while (i < s_len)
	{
		ptr_return[i] = f(i, s[i]);
		i++;
	}
	ptr_return[i] = '\0';
	return (ptr_return);
}

// deletetetetet // 아스키 코드값을 i만큼 더하게 하는 함수
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