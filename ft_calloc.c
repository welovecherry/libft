/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:49:09 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/03 22:12:16 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The calloc() function contiguously allocates enough space for count
     objects that are size bytes of memory each 
     and returns a pointer to the allocated memory.  
     The allocated memory is filled with bytes of value zero.*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (char *)malloc(sizeof(size) * count);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count);
	return (ptr);
}
/*
int	main (void)
{
    //calloc(5, sizeof(int));
    ft_calloc(5, sizeof(int));
    return (0);
}
*/