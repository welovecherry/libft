/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:32:42 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/03 15:59:50 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			idx;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	idx = 0;
	while (idx < n)
	{
		ptr[idx] = 0;
		s++;
		idx++;
	}
}
/*
#include <stdio.h>
#include <strings.h>
int	main(void)
{
	char str1[10] = "abcde";
	char str2[10] = "abcde";

	bzero(str1, sizeof(str1));
	ft_bzero(str2, sizeof(str2));

	return 0;
} */