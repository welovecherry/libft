/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:21:57 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/31 18:31:45 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*temp;

	temp = lst;
	lst = lst->next;
	del(temp->content);
}

// delete below
void	free_content(void *node)
{
	free(node);
}

int	main(void) 
{
	t_list *head;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	char *str1;
	char *str2;
	char *str3;

    head = NULL;
	// to avoid string literal, strncpy was used.
	// so free function can be used.
    str1 = (char *)malloc(sizeof(char) * 6);
	strncpy(str1, "first", 6);
	str2 = (char *)malloc(sizeof(char) * 6);
	strncpy(str2, "second", 6);
	str3 = (char *)malloc(sizeof(char) * 6);
	strncpy(str3, "third", 6);

    node1 = ft_lstnew(str1);
    node2 = ft_lstnew(str2);
    node3 = ft_lstnew(str3);

    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

	ft_lstdelone(head, free_content);

	return 0;
}