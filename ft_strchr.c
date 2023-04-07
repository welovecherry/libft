/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:35:48 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/07 15:37:04 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // asdfasdfasd

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (unsigned char)c)
			return ((char *)&ptr[i]);
		i++;
	}
	if (ptr[i] == (unsigned char)c)
		return ((char *)&ptr[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	//char	ch = 'a';
	//char	*str1 = "bcdefbc";
	//char	*str2 = "bcdefbc";
	char	str3[] = "bonjour";
	char	str4[] = "bonjour";
	//while (ch <= 'g')
	//{
	//	printf("strchr : %s\n", strchr(str1, ch));
	//	printf("my func: %s\n\n", ft_strchr(str2, ch));
	//	ch++;
	//}
	printf("strchr : %s\n", strchr(str3,'\0'));
	printf("my func:%s\n", ft_strchr(str4, '\0'));

	return 0;
} */