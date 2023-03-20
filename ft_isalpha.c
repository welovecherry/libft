/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:10:53 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/15 20:10:18 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // 121
#include <ctype.h> // 123541981591522231212as1dadfasdfasdfa555555555555552222222222222

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}

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
