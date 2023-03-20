/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:28:02 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/15 22:47:49 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h> // 12133
#include <stdio.h> // 123123
#include <limits.h>

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}

int main(void)
{
	int		i;

	i = INT_MIN;
	while (i < INT_MAX)
	{
		//printf("i:%d isascii:%d, myfunc:%d\n",i, isascii(i), ft_isascii(i));
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
