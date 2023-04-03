/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:59:51 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/03 22:12:54 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h> // 12
#include <ctype.h> // 123123123
int main(void)
{
	int	c;

	c = 32;
	printf("%d ", isprint(c));

	return (0);
}
*/