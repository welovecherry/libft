/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:00:36 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/06 00:11:04 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*pass_whitespace_reach_str_num(char *str, int *sign)
{	
	while ((9 <= *str && *str <= 13) || (*str == 32))
		str++;
	*sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*sign = -1;
		str++;
	}
	//while (*str == '0')
	//	str++;
	return (str);
}

int	ft_atoi(const char *str)
{
	char		*str_num;
	long long	result;
	long long	prev_result;
	int			sign;
	size_t		len;

	str_num = pass_whitespace_reach_str_num((char *)str, &sign);
	if (str_num == NULL)
		return (-1);
	result = 0;
	len = 0;
	prev_result = result;
	while ('0' <= *str_num && *str_num <= '9')
	{
		result = (result * 10) + (*str_num - '0');
		if (result / 10 != prev_result || len > 10)
		{
			return (-1);
		}
		str_num++;
		prev_result = result;
	}
	result = sign * result;
	return ((int)result);
}
/*
int	main(void)
{
	int		idx;
	char	*strs[25];
	
	strs[0] = "2147483647";
	strs[1] = "2147483648";
	strs[2] = "-2147483648";
	strs[3] = "-2147483649";
	strs[4] = "4294967295";
	strs[5] = "4294967296";
	strs[6] = "-4294967295";
	strs[7] = "-4294967296";
	strs[8] = "9223372036854775807";
	strs[9] = "9223372036854775808";
	strs[10] = "-9223372036854775808";
	strs[11] = "-9223372036854775809";
	strs[12] = "18446744073709551615";
	strs[13] = "18446744073709551616";
	strs[14] = "18446744073709551617";
	strs[15] = "18446744073709551618";
	strs[16] = "-18446744073709551615";
	strs[17] = "-18446744073709551616";
	strs[18] = "-18446744073709551617";
	strs[19] = "9999999999";
	strs[20] = "-9999999999";
	strs[21] = "+0000000000000000000000000000000000000000000000000000123";
	strs[22] = 0;

	printf("my func = %15d\t", ft_atoi(strs[21]));

	
	//idx = 0;
	//while (strs[idx])
	//{
	//	printf("strs[%2d] = %20s\t", idx, strs[idx]);
	//	printf("my func = %15d\t", ft_atoi(strs[idx]));
	//	printf("atoi = %15d\n\n", atoi(strs[idx]));
	//	idx++;
	//}
  return 0;
}
*/