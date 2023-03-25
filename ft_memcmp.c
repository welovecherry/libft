/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:09:31 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/25 17:55:47 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memcmp() function returns zero if the two
     strings are identical, otherwise returns the
     difference between the first two differing
     bytes (treated as unsigned char values, so that
     `\200' is greater than `\0', for example).
	 
  The memcmp() function compares byte string s1 against byte string s2.
     Both strings are assumed to be n bytes long.
	  Zero-length strings are always identical.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	else
		return (ptr1[i] - ptr2[i]);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	size_t		n;
	char s1[10] = {200, 127, 210};
	char s2[10] = {200, 127, 0};

	char s3[10] = "abcd";
	char s4[10] = "zabcs";

	int	arr1[5] = {1, 2, 3, 4, 5};
	int	arr2[5] = {1, 22, 3, 4, 5};

	printf("CHAR ARRAY:\n");
	n = 0;
	while (n < 5)
	{
		printf("n = %zu----------------\n", n);
		printf("strcmp  : %d, ", memcmp(s1, s2, n));
		printf("my func : %d\n", ft_memcmp(s1, s2, n));
		printf("strcmp  : %d, ", memcmp(s3, s4, n));
		printf("my func : %d\n\n", ft_memcmp(s3, s4, n));
		n++;
	}
	printf("\n\nINT ARRAY\n");
	printf("strcmp  : %d\n", memcmp(arr1, arr2, sizeof(arr1)));
	printf("my func : %d\n\n", ft_memcmp(arr1, arr2, sizeof(arr1)));
	
	return 0;
}
