/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:40:02 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/08 13:49:52 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last_node = ft_lstlast(*lst);
		last_node->next = new;
	}
}
/*
new may not be a single node
void	print_all_nodes(t_list *node)
{
	while (node)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}
	printf("\n");
}

int main(void) 
{
	t_list *head;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *ptr;
	t_list	*new;
	int	lst_len;

	head = NULL;
	node1 = ft_lstnew("first");
	node2 = ft_lstnew("second");
	node3 = ft_lstnew("third");
	
	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	
	// print_nodes(head);
	lst_len = ft_lstsize(head);
	// printf("lstlen:%d\n", lst_len);
	// printf("%s\n", node1->content);
	
	ptr = ft_lstlast(head);
	// printf("main last node:%s\n", (char *)ptr->content);

	new = ft_lstnew("add back");
	ft_lstadd_back(&head, new);
	print_all_nodes(head);
	
  return 0;
}
*/