#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list = NULL;
	t_list	*new_node;
	void	*f_content;

	if (!lst || !f || !del)
		return (NULL);

	while (lst)
	{
		f_content = f(lst->content);
		if (!f_content)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}

		new_node = ft_lstnew(f_content);
		if (!new_node)
		{
			del(f_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}

		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
