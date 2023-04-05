/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:10:32 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/05 22:48:39 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_s;
	char	*res_substr;
	size_t	len_substr;

	if (s == 0)
		return (0);
	ptr_s = (char *)s;
	if ((unsigned int)ft_strlen(ptr_s) < start || len == 0)
	{	
		res_substr = (char *)malloc(sizeof(char) * 1);
		if (!res_substr)
			return (0);
		res_substr[0] = '\0';
		return (res_substr);
	}
	if (ft_strlen(ptr_s) < len + start)
		len_substr = ft_strlen(ptr_s) - start;
	else
		len_substr = len;
	res_substr = (char *)malloc(sizeof(char) * (len_substr + 1));
	if (!res_substr)
		return (0);
	ft_strlcpy(res_substr, &(ptr_s[start]), len_substr + 1);
	return (res_substr);
}
/*
int	main(void)
{
	size_t	len;
	size_t	start;
	
	 len = 0;
	 while (len <= 10)
	 {
	 	start = 0;
	 	while (start < 5)
	 	{
			char	*s = "abcdefg";
	 		printf("%zu, %zu, %s\n", len, start, ft_substr(s, start, len));
	 		start++;		
	 	}
	 	len++;
		printf("\n");
	}
	return (0);
}
*/