/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:34:19 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/09 13:50:15 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
// delete below
void	print_all_nodes(t_list *node)
{
	while (node)
	{
		printf("%s\n", node->content);
		node = node->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new;

	head = NULL;
	node1 = ft_lstnew("first");
	node2 = ft_lstnew("second");
	node3 = ft_lstnew("third");
	new = ft_lstnew("new");

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	print_all_nodes(head);
	ft_lstadd_front(&head, new);
	print_all_nodes(head);
	return (0);
}
*/