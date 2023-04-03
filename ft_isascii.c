/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:28:02 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/03 16:00:59 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
/*
#include <ctype.h> // 12133
#include <stdio.h> // 123123
#include <limits.h>
int main(void)
{
	int		i;

	i = INT_MIN;
	while (i < INT_MAX)
	{
		if (isascii(i) != ft_isascii(i))
		{
			printf("KO\n");
			return (0);
		}
		i++;
	}
	printf("SUCCESS\n");
	return (0);
}
*/