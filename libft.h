/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:25:29 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/25 20:43:20 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h> // 지워라
# include <string.h> // 지워라
# include <unistd.h> // 지워라
# include <ctype.h> // 지워라
# include <stdlib.h>

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
#endif
