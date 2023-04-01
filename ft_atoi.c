/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:08:54 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/01 20:48:10 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "limits.h" // delete??
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;

	while ((9 <= *str && *str <= 13) || (*str == 32))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	result = 0;
	while ('0' <= *str && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	result = sign * result;
	if (result > INT_MAX)
		result = INT_MIN + (result - INT_MAX - 1);
	else if (result < INT_MIN)
		result = INT_MAX + (result + INT_MIN + 1);
	return (result);
}

int main(void)
{
	char *str1 = "   2147483647aa";
	char *str2 = "   2147483647aa";

	printf("longlongMax : %lld\n", LLONG_MAX);
	
	printf("atoi    : %d\n", atoi(str1));
	printf("my func : %d\n", ft_atoi(str2));
	// ft_atoi(str1);
	printf("test : %d\n", INT_MAX + 1);

	return (0);
}