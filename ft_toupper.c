/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:10:32 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/25 15:31:05 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
	return (c);
}

/*The toupper() function converts a lower-case letter to the corresponding
 upper-case letter.
 The argument must be representable as an unsigned char or the value of EOF.
*/
int main(void)
{
	for (int i=0; i<100; i++)
	{
		if (toupper(i) != ft_toupper(i))
		{
			printf("KO\n");
			return (0);
		}
	}
	printf("SUCCESS\n");
	return (0);
}
