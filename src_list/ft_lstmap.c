#include "libft.h"

void		ft_lstmap(t_list *list, void (*func)(t_list*))
{
	while (list)
	{
		func(list);
		list = list->next;
	}
}
