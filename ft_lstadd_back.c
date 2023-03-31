/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungmiho <jungmiho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 16:40:02 by jungmiho          #+#    #+#             */
/*   Updated: 2023/03/31 23:00:01 by jungmiho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new) // 왜  ** 썼썼나??
{
	t_list	*last_node;

	last_node = ft_lstlast(*lst);
	last_node->next = new;
	//new->next = NULL; ㄴ뉴가 노노드  여여러러개개일  수  있있다다.
	
}
// 만약에 lst가 사이즈가 0일 경우 lst의 값은 뉴의 주소가 된다. *lst의 값을 뉴의 주소로 바꿔야하는데 이중포잍너를 쓸 수밖에 없다.  

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