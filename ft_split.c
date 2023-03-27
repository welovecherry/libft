#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// TODO free // 2번 해야한다
//char	**free(char **drawer, char *box)
//{
	
//}

size_t	get_num_of_drawer(char const *s, char c)
{
	size_t	num_of_drawer;
	size_t	ch_cnt;
	size_t	s_idx;

	num_of_drawer = 0;
	ch_cnt = 0;
	s_idx = 0;
	while (s_idx < (ft_strlen(s) + 1))
	{
		if ((ch_cnt != 0 && s[s_idx] == c) || (ch_cnt != 0 && s[s_idx] == '\0'))
		{
			num_of_drawer++;
			ch_cnt = 0;
		}
		else if (s[s_idx] != c)
			ch_cnt++;
		s_idx++;
	}
	return (num_of_drawer);
}

char	**assign_drawer(char const *s, size_t num_of_drawer)
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
	int		box_idx;

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

	num_of_drawer = get_num_of_drawer(s, c);
	drawer = assign_drawer(s, num_of_drawer);
	ch_cnt = 0;
	d_idx = 0;
	s_idx = 0;
	while (s_idx < (ft_strlen(s) + 1))
	{
		if ((ch_cnt != 0 && s[s_idx] == c) || (ch_cnt != 0 && s[s_idx] == '\0'))
			drawer[d_idx++] = assign_box(&ch_cnt, s, s_idx);
		else if (s[s_idx] != c)
			ch_cnt++;
		s_idx++;
	}
	drawer[d_idx] = 0;
	return (drawer);
}

int	main(void)
{
	char s[20] = "2a";
	char c = '2';
	int	i;
	char	**drawer;

	drawer = ft_split(s, c);
	i = 0;
	while (drawer[i])
	{
		printf("%s\n", drawer[i]);
		i++;
	}
	return (0);
}