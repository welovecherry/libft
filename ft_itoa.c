

#include "libft.h"
#include <stdio.h>
#include <string.h>
// negative int

size_t	get_int_len(int n)
{
	size_t	len;

	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}


char	*ft_itoa(int n)
{
	char	*ptr_itoa;
	size_t	len;
	size_t	div;
	size_t	i;
	char	sign;

	i = 0;
	sign = '+';
	if (n < 0)
	{
		n *= -1;
		sign = '-';
		ptr_itoa++;
	}
	len = get_int_len(n);
	printf("len:%zu\n", len);
	ptr_itoa = (char *)malloc(sizeof(char) * (len + 2)); // negative sign, null character
	//div = 1;
	//while (--len && (n != 0))
	//	div *= 10;
	//while (div != 0)
	//{
	//	printf("while i:%zu\n", i);
	//	ptr_itoa[i] = (n / div) + '0';
	//	n %= div;
	//	div /= 10;
	//	i++;
	//}
	ptr_itoa[i] = '\0';
	return (ptr_itoa);
}

int	main(void)
{
	int	n;
	char		*res;

	n = 0;
	res = ft_itoa(n);
	printf("%s\n", res);
	return (0);
}