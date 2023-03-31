/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:35:32 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/31 16:53:37 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	list_len;

	list_len = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		list_len++;
	}
	return (list_len);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	head = NULL;
	node1 = ft_lstnew("first");
	node2 = ft_lstnew("second");
	node3 = ft_lstnew("third");

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	printf("main res:%d\n", ft_lstsize(head));
	
	return 0;
} */