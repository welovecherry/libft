
#include "libft.h" // delete it later

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	//new = (t_list *)malloc(sizeof(t_list));

	new->next = *lst;
	*lst = new;
}

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
	t_list	**lst;
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

	// *lst = head;
	ft_lstadd_front(&head, new);
	print_all_nodes(head);

	return (0);
}
