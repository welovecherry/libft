/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:43:50 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/29 20:45:35 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(1, "\n", fd);
}

int	main(void)
{
	char	s[10] = "abcd";
	int		fd;

	fd = 1;
	ft_putendl_fd(s, fd);
	return (0);
}