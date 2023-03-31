/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:27:15 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/29 19:42:21 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Applies the function ’f’ on each character of the string passed as argument, 
passing its index as first argument. 
Each character is passed by address to ’f’ to be modified if necessary.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		f(i, &(s[i]));
		i++;
	}
}

// deletetetetet // 아스키 코드값을 i만큼 더하게 하는 함수
void	add_ascii(unsigned int i, char *c)
{
	*c += i;
	//write(1, c, 1);
}

int	main(void)
{
	char s[10] = "abcde";

	ft_striteri(s, add_ascii);
	printf("main res :%s\n", s);

	return (0);
}