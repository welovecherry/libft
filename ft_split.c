/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:19:50 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/01 16:27:48 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_all(char **drawer, size_t d_idx)
{
	size_t	i;

	i = 0;
	while (i < d_idx)
	{
		free(drawer[i]);
		i++;
	}
	free(drawer);
}

size_t	get_num_of_drawer(char const *s, char c, size_t *s_idx, size_t *d_idx)
{
	size_t	num_of_drawer;
	size_t	ch_cnt;

	num_of_drawer = 0;
	ch_cnt = 0;
	*s_idx = 0;
	while (*s_idx < (ft_strlen(s) + 1))
	{
		if ((ch_cnt != 0 && s[*s_idx] == c) || \
		(ch_cnt != 0 && s[*s_idx] == '\0'))
		{
			num_of_drawer++;
			ch_cnt = 0;
		}
		else if (s[*s_idx] != c)
			ch_cnt++;
		(*s_idx)++;
	}
	*s_idx = 0;
	*d_idx = 0;
	return (num_of_drawer);
}

char	**assign_drawer(size_t num_of_drawer)
{
	char	**drawer;

	drawer = (char **)malloc(sizeof(char *) * (num_of_drawer + 1));
	if (!drawer)
		return (0);
	return (drawer);
}

char	*assign_box(size_t *ch_cnt, char const *s, int s_idx)
{
	char	*box;
	size_t	box_idx;

	box = (char *)malloc(sizeof(char) * (*ch_cnt + 1));
	if (!box)
		return (0);
	box_idx = 0;
	while (box_idx < *ch_cnt)
	{
		box[box_idx++] = s[s_idx - *ch_cnt];
		s_idx++;
	}
	box[box_idx] = '\0';
	*ch_cnt = 0;
	return (box);
}

char	**ft_split(char const *s, char c)
{
	char	**drawer;
	size_t	d_idx;
	size_t	s_idx;
	size_t	num_of_drawer;
	size_t	ch_cnt;

	num_of_drawer = get_num_of_drawer(s, c, &s_idx, &d_idx);
	drawer = assign_drawer(num_of_drawer);
	ch_cnt = 0;
	while (s_idx < (strlen(s) + 1))
	{
		if ((ch_cnt != 0 && s[s_idx] == c) || (ch_cnt != 0 && s[s_idx] == '\0'))
		{
			drawer[d_idx] = assign_box(&ch_cnt, s, s_idx);
			if (drawer[d_idx] == 0)
				free_all(drawer, d_idx);
			d_idx++;
		}
		else if (s[s_idx] != c && s[s_idx] != '\0')
			ch_cnt++;
		s_idx++;
	}
	drawer[d_idx] = 0;
	return (drawer);
}

int	main(void)
{
	char s[15] = "aa2bb2";
	char c = '2';
	int		i;
	char	**drawer;

	drawer = ft_split(s, c);
	printf("\nmain res :\n");
	i = 0;
	while (drawer[i])
	{
		printf("%s\n", drawer[i]);
		i++;
	}

	return (0);
}