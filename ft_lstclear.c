#include "libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*record;
	t_list	*cur;

	if (!lst || !del)
		return ;
	cur = *lst;
	while (cur)
	{
		record = cur->next;
		ft_lstdelone(cur, del);
		cur = record;
	}
	*lst = NULL;
}