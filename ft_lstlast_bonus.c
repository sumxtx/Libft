
#include "libft.h"

/*
   t_list	*ft_lstlast(t_list *lst)
   {
   if (lst == NULL)
   return (NULL);
   while (lst->next)
   lst = lst->next;
   return (lst);
   }
*/
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (lst == NULL)
		return (NULL);
	ptr = lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}
/*
int main (void)
{
	int x0 = 42;
	int x1 = 43;
	int x2 = 44;
	int x3 = 45;
	t_list *node0 = ft_lstnew(&x0);
	t_list *node1 = ft_lstnew(&x1);
	ft_lstadd_back(&node0,node1);
	t_list *node2 = ft_lstnew(&x2);
	ft_lstadd_back(&node1,node2);
	t_list *node3 = ft_lstnew(&x3);
	ft_lstadd_back(&node0, node3);

	t_list *lst_last = ft_lstlast(node0);
	printf("last node content -> %d\n", *(int *)lst_last->content);
	printf("last node next -> %p\n", lst_last->next);

	return (0);
}
*/
