/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:36:50 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/29 20:41:26 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Outputs the character ’c’ to the given file descriptor.*/

void	ft_putchar_fd(char c, int fd)
{
	write(1, &c, fd);
}
/*
int	main(void)
{
	char	c;
	int		fd;

	c = 'c';
	fd = 1;
	ft_putchar_fd(c, fd);

	return (0);
} */