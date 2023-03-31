/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:10:32 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/25 20:25:12 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_s;
	char	*ptr_substr;
	size_t	i;

	ptr_s = (char *)s;
	ptr_substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr_substr)
		return (0);
	i = 0;
	while (i < len)
	{
		if (len > strlen(ptr_s) && (start + i == len - 1))
			break ;
		ptr_substr[i] = ptr_s[start + i];
		i++;
	}
	ptr_substr[i] = '\0';
	return (ptr_substr);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int	main(void)
{
	size_t	len;
	size_t	start;
	char	*res;
	
	 len = 0;
	 while (len <= 10)
	 {
	 	start = 0;
	 	while (start < 5)
	 	{
			char	*s = "abcdefg";
	 		printf("len:%zu, start:%zu, %s\n", len, start, ft_substr(s, start, len));
	 		start++;		
	 	}
	 	len++;
		printf("\n");
	 }
	return (0);
}