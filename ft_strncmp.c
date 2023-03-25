/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:19:28 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/25 18:00:03 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The comparison is done using unsigned characters, 
so that `\200' is greater than `\0'.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*u_s1;
	unsigned char	*u_s2;
	size_t			i;

	u_s1 = (unsigned char *)s1;
	u_s2 = (unsigned char *)s2;
	i = 0;
	while ((u_s1[i] && u_s2[i]) && (i < n))
	{
		if (u_s1[i] != u_s2[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	else
		return (u_s1[i] - u_s2[i]);
}


#include <stdio.h>
#include <string.h>
int	main(void)
{
	// char s1[10] = {200, 127};
	// char s2[10] = {200};

	char s1[10] = "abcd";
	char s2[10] = "zs";
	unsigned int	n;

	n = 0;
	while (n < 5)
	{
		printf("n = %d----------------\n", n);
		printf("my func : %d\n", ft_strncmp(s1, s2, n));
		printf("strcmp  : %d\n\n", strncmp(s1, s2, n));
		n++;
	}
	return 0;
}

