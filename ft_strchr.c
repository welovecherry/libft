/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:35:48 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/25 17:56:01 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != '\0')
	{
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char	ch = 'a';
	char	*str1 = "bcdefbc";
	char	*str2 = "bcdefbc";

	while (ch <= 'g')
	{
		printf("strchr : %s\n", strchr(str1, ch));
		printf("my func: %s\n\n", ft_strchr(str2, ch));
		ch++;
	}
	return 0;
}
