/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:35:29 by jungmiho          #+#    #+#             */
/*   Updated: 2023/04/05 15:59:32 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_temp;
	t_list	*temp;

	temp = *lst;
	while (temp != NULL)
	{
		ft_lstdelone(temp, del);
		next_temp = temp->next;
		free(temp);
		temp = next_temp;
	}
}
/*
// delete below
void	free_content(void *node)
{
	free(node);
}

int main(void) 
{
    t_list *head;
    t_list *node1;
    t_list *node2;
    t_list *node3;
    char *str1;
    char *str2;
    char *str3;

    head = NULL;
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
    // print_all_nodes(head);
    // ft_lstdelone(t_list *lst, void (*del)(void *))
    // ft_lstdelone(head, free_content);
    
    // print_all_nodes(head); // 콘텐츠 부분이 프리되어서 출력 안됨
    ft_lstclear(&head, free_content);
      return 0;
} 
*/