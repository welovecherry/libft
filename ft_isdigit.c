/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:40:12 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/24 22:05:10 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h> // 1231
#include <stdio.h> // 123123

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	c;
	int		i;

	c = '0';
	i = 0;
	while (i < 20)
	{
		printf("%d\n", ft_isdigit(c));
		i++;
		c++;
	}
	return (0);
}
