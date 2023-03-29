/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:25:29 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/29 22:04:00 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>


# include <stdio.h> // 지워라
# include <string.h> // 지워라
# include <ctype.h> // 지워라

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// 나중에 활용할 수 있게 미리 모든 프로토타입 넣어도 되겠지???
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
t_list	*ft_lstnew(void *content);

#endif
