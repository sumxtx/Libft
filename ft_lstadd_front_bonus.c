
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || ! new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main(void)
{

	int x = 41;
	int x0 = 42;
	int x1 = 43;
	t_list *node0 = ft_lstnew(&x0);
	t_list *node1 = ft_lstnew(&x1);
	ft_lstadd_back(&node0, node1);
	t_list *node = ft_lstnew(&x);
	ft_lstadd_front(&node0, node);

	return 0;
}
*/
