/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 22:04:38 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/03 22:15:43 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Allocates (with malloc(3)) and returns a new node. 
The member variable ’content’ is initialized 
with the value of the parameter ’content’. 
The variable ’next’ is initialized to NULL.
return : The new node
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
// delete below
void	print_nodes(t_list *node)
{
	while (node)
	{
		printf("%s\n", node->content);
		node = node->next;
	}
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	head = NULL; //  it doesn't point to any valid memory address.
	node1 = ft_lstnew("first");
	node2 = ft_lstnew("second");
	node3 = ft_lstnew("third");

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	print_nodes(head);
	return (0);
}
*/