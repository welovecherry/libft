/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:13:53 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/06 00:16:21 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*return_ptr;

	if (s1 == 0)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	return_ptr = (char *)malloc(sizeof(s1_len + s2_len + 1));
	if (!return_ptr)
		return (0);
	ft_strlcpy(return_ptr, s1, s1_len + 1);
	ft_strlcat(return_ptr, s2, s1_len + s2_len + 1);
	return (return_ptr);
}
/*
int	main(void)
{
	char *s1 = "my favorite animal is";
	char *s2 = " ";
	char *s3 = "the nyancat";

	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
	//char *res = ft_strjoin(s1, s2);
	//char *res2 = ft_strjoin(s1, s3);

	//write(1, res, ft_strlen(res));
	write(1, res, ft_strlen(res));
	return (0);
}
*/