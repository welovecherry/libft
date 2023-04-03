/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:16:48 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/03 16:00:29 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <ctype.h> // 123123
#include <stdio.h> // 123123
int	main(void)
{
	char	c;

	c = '0';
	while (c <= 'z')
	{
		printf("c:%c isalnum:%d, myfunc:%d\n", c, isalnum(c), ft_isalnum(c));
		c++;
	}
	return (0);
}
*/