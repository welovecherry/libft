/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:40:03 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/05 20:07:50 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	*ptr_s;

	if (s == 0)
		return (0);
	ptr_s = (unsigned char *)s;
	len = ft_strlen(s);
	if (ptr_s[len] == (unsigned char)c)
		return ((char *)(ptr_s + len));
	len--;
	while (len >= 0)
	{
		if (*(ptr_s + len) == (unsigned char)c)
			return ((char *)(ptr_s + len));
		len--;
	}
	return (0);
}
/*
int	main(void)
{
	char	ch = 'c';
	char	*str1 = "bcdefbc";
	char	*str2 = "bcdefbc";

	while (ch <= 'g')
	{
		printf("strrchr: %s\n", strrchr(str1, ch));
		printf("my func: %s\n\n", ft_strrchr(str2, ch));
		ch++;
	}
	return 0;
}
*/