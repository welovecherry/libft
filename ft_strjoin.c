/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:13:53 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/25 21:18:48 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*return_ptr;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	return_ptr = (char *)malloc(sizeof(s1_len + s2_len + 1));
	if (!return_ptr)
		return (0);
	ft_strlcpy(return_ptr, s1, s1_len + 1);
	ft_strlcat(return_ptr, s2, s1_len + s2_len + 1);
	return (return_ptr);
}

int	main(void)
{
	char	s1[30] = "01234";
	char	s2[10] = "efg";
	char	*res;
	int	i;
	
	//printf("main res:%s\n", ft_strjoin(s1, s2));
	res = ft_strjoin(s1, s2);
	i = 0;
	while (res[i])
	{
		printf("%c", res[i]);
		i++;
	}
	return (0);
}