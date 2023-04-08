/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:35:25 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/07 23:09:02 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char ch, char const *set)
{
	while (*set != '\0')
	{
		if (*set == ch)
			return (1);
		else
			set++;
	}
	return (0);
}

size_t	get_first_idx(char const *s1, char const *set)
{
	size_t	first_idx;
	size_t	i;

	first_idx = 0;
	i = 0;
	while (s1[i] != '\0' && is_set(s1[i], set))
	{
		i++;
	}
	first_idx = i;
	return (first_idx);
}

size_t	get_last_idx(char const *s1, size_t first_idx, char const *set)
{
	size_t	last_idx;
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (first_idx <= i && is_set(s1[i], set))
	{
		i--;
	}
	last_idx = i;
	return (last_idx);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr_trimmed;
	size_t	first_idx;
	size_t	last_idx;

	if (ft_strlen(s1) == 0)
	{
		ptr_trimmed = (char *)malloc(sizeof(char) * 1);
		*ptr_trimmed = '\0';
		return (ptr_trimmed);
	}
	first_idx = get_first_idx(s1, set);
	last_idx = get_last_idx(s1, first_idx, set);
	ptr_trimmed = (char *)malloc(sizeof(char) * (last_idx - first_idx + 2));
	if (!ptr_trimmed)
		return (0);
	ft_strlcpy(ptr_trimmed, s1 + first_idx, (last_idx - first_idx + 2));
	return (ptr_trimmed);
}
/*
#include <unistd.h>
int main(void)
{
	char	s1[20] = "11a11bc";
	char	set[5] = "";
	char	*ptr;
	int		i;
	
	ptr = ft_strtrim(s1, set);
	i = 0;
	while (ptr[i])
	{
		write(1, &ptr[i], 1);
		i++;
	}
	return 0;
}
*/
