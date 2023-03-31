/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:10:53 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/25 15:09:34 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	char	c;
	int		i;

	c = 'X';
	i = 0;
	while (i < 50)
	{
		printf("%d %d\n", isalpha(c), ft_isalpha(c));
		i++;
		c++;
	}
	return (0);
}
