/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:40:03 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/22 13:42:37 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s); // put ft!!!
	while (len)
	{
		if (*(s + len - 1) == c) // 마지막 인덱스는 렌-1 이다
			return ((char *)(s + len - 1));
		len--;
	}
	return (0);
}

int main(void)
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
