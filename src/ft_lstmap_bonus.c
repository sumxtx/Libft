
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*after;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		after = f(lst->content);
		new_node = ft_lstnew(after);
		if (!new_node)
		{
			del(after);
			ft_lstclear(&new_list, (*del));
			return (new_list);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void free_content(void *content)
{
    free(content);
}

void *lsttop(void *content)
{
    if (content == NULL)
        return NULL;
    char *str = (char *)content;
    //char *result = strdup(str);
    size_t i = 0;
    while (str[i] != '\0')
    {
        str[i] = ft_tolower(str[i]);
        i++;
    }
    return (str);
}
int main(void)
{
    char s[28] = "Listas de La Chinga su mare";
    char t[6] = "World";
    t_list *lst = ft_lstnew(s);
    ft_lstadd_back(&lst, ft_lstnew(t));
    t_list *new_lst = ft_lstmap(lst, lsttop, free_content);
	printf("%s", new_lst->content);
	printf(" %s", new_lst->next->content);
}
*/
