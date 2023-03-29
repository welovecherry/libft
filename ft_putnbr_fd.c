/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:48:17 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/29 21:06:35 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_zero_or_minimum(int n)
{
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return (1);
	}
	return (0);
}

int	get_div(int n)
{
	int	div;

	div = 1000000000;
	while ((n / div) == 0)
		div /= 10;
	return (div);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		div;
	char	ch;

	if (is_zero_or_minimum(n))
		return ;
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	div = get_div(n);
	while (div != 0)
	{
		ch = (n / div) + '0';
		ft_putchar_fd(ch, fd);
		n %= div;
		div /= 10;
	}
}

int main(void)
{
	int	num1 = 2147483647;
	int num2 = -2147483648;
	int num3 = 0;
	int num4 = 10;
	int num5 = 12345;
	int fd = 1;

	ft_putnbr_fd(num1, fd);
	write(1, "\n", 1);

	ft_putnbr_fd(num2, fd);
	write(1, "\n", 1);

	ft_putnbr_fd(num3, fd);
	write(1, "\n", 1);

	ft_putnbr_fd(num4, fd);
	write(1, "\n", 1);

	ft_putnbr_fd(num5, fd);
	write(1, "\n", 1);

  	return 0;
}