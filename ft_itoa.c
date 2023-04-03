/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:16:49 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/03 22:13:12 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_int_len(int n)
{
	size_t	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*assign_zero(void)
{
	char	*ptr_zero;

	ptr_zero = (char *)malloc(sizeof(char) * 2);
	if (!ptr_zero)
		return (0);
	ptr_zero[0] = '0';
	ptr_zero[1] = '\0';
	return (ptr_zero);
}

char	*turn_negative_into_positive(char *ptr_itoa, int *n)
{
	int	is_int_min;

	is_int_min = (*n == -2147483648);
	ptr_itoa[0] = '-';
	if (*n == -2147483648)
	{
		ptr_itoa[1] = '2';
		*n = 147483648;
	}
	else
		*n *= -1;
	ptr_itoa += 1 + is_int_min;
	return (ptr_itoa);
}

char	*assign_positive_itoa(int n, char *ptr_itoa, size_t len)
{
	int		div;
	size_t	i;

	div = 1;
	while (--len)
		div *= 10;
	if (n == 147483648)
		div /= 10;
	i = 0;
	while (div != 0)
	{
		ptr_itoa[i++] = (n / div) + '0';
		n %= div;
		div /= 10;
	}
	ptr_itoa[i] = '\0';
	return (ptr_itoa);
}

char	*ft_itoa(int n)
{
	int		is_negative;
	char	*ptr_itoa;
	char	*return_ptr;
	size_t	len;

	if (n == 0)
		return (assign_zero());
	len = get_int_len(n);
	is_negative = (n < 0);
	ptr_itoa = (char *)malloc(sizeof(char) * (len + 1 + is_negative));
	if (!ptr_itoa)
		return (0);
	return_ptr = ptr_itoa;
	if (n < 0)
	{
		ptr_itoa = turn_negative_into_positive(ptr_itoa, &n);
	}
	ptr_itoa = assign_positive_itoa(n, ptr_itoa, len);
	return (return_ptr);
}
/*
int	main(void)
{
	int		n1= -2147483648;
	int		n2= 2147483647;
	int		n3= 0;
	int		n4= 10;
	int		n5= 12345678;
	char	*res;
	
	res = ft_itoa(n1);
	printf("res1 :%s\n", res);
	res = ft_itoa(n2);
	printf("res2 :%s\n", res);
	res = ft_itoa(n3);
	printf("res3 :%s\n", res);
	res = ft_itoa(n4);
	printf("res4 :%s\n", res);
	res = ft_itoa(n5);
	printf("res5 :%s\n", res);
	return (0);
}
*/