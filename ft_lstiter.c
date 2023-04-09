/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:57:46 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/09 13:57:05 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
// delete below
void	change_into_hi(void *content)
{
	strncpy(content, "hi", 3);
}

void	print_all_nodes(t_list *ptr)
{
	while (ptr)
	{
		printf("%s\n", ptr->content);
		ptr = ptr->next;
	}
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
	// s1 = (char *)malloc(sizeof(char) * 6);
	// s2 = (char *)malloc(sizeof(char) * 6);
	// s3 = (char *)malloc(sizeof(char) * 6);
	// strncpy(s1, "first", 6);
	// strncpy(s2, "second", 6);
	// strncpy(s3, "third", 6);
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
	ft_lstiter(head, change_into_hi);
	print_all_nodes(head);
	return 0;
}
*/