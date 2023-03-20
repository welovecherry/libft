/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:40:55 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/15 21:27:41 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h> // 123123
#include <stdio.h> // 123123

int	ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}

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
