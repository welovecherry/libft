/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:46:15 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/03 22:15:30 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*ptr_return;
	void	*new_content;

	temp = lst;
	ptr_return = temp;
	while (temp != NULL)
	{
		ptr_return = (t_list *)malloc(sizeof(t_list));
		if (!ptr_return)
			ft_lstclear(&ptr_return, del);
		new_content = f(temp->content);
		temp->content = new_content;
		temp = temp->next;
	}
	return (ptr_return);
}
/*
// delete below
void	print_all_nodes(t_list *ptr)
{
	while (ptr)
	{
		printf("%s\n", ptr->content);
		ptr = ptr->next;
	}
}

static void	free_content(void *content)
{
	free(content);
}

void	*create_new_str(void *content)
{
	char	*new;

	new = strdup((char *)content);
	if ('a' <= *new && *new <= 'z')
	*new -= 32;
	return ((void *)new);
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	char	*s1;
	char	*s2;
	char	*s3;

	head = NULL;
	s1 = ft_strdup("first");
	s2 = ft_strdup("second");
	s3 = ft_strdup("third");

	node1 = ft_lstnew(s1);
	node2 = ft_lstnew(s2);
	node3 = ft_lstnew(s3);

	head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	print_all_nodes(head);
	ft_lstmap(head, create_new_str, free_content);
	printf("\n");
	print_all_nodes(head);
	return (0);
}
*/