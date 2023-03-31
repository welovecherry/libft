/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:41:57 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/29 20:45:14 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
/*
int	main(void)
{
	char	s[10] = "abcd";
	int		fd;

	fd = 1;
	ft_putstr_fd(s, fd);
	return (0);
} */