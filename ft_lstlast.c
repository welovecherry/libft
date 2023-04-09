/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:37:47 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/09 13:57:26 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (lst == 0)
		return (0);
	temp = lst;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	return (temp);
}
/*
// delete below
void	print_nodes(t_list *node)
{
	while (node != NULL)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}
}

int	main(void) 
{
	t_list *head;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *ptr;
	int	lst_len;

	head = NULL;
	// node1->content = "first";
	// node2->content = "second";
	// node3->content = "third";
	node1 = ft_lstnew("first");
	node2 = ft_lstnew("second");
	node3 = ft_lstnew("third");
	
	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	
	// print_nodes(head);
	lst_len = ft_lstsize(head);
	printf("lstlen:%d\n", lst_len);
	// printf("%s\n", node1->content);

	
	ptr = ft_lstlast(head);
	printf("main res:%s\n", (char *)ptr->content);
  return 0;
}
*/