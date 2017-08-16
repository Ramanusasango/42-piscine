#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*list;
	t_list	*tmp;
	t_list	*tmp2;

	list = begin_list;
	if (!list || !(list->next))
		return ;
	tmp = list->next;
	tmp2 = tmp->next;
	list->next = 0;
	tmp->next = list;
	while (tmp2)
	{
		list = tmp;
		tmp = tmp2;
		tmp2 = tmp2->next;
		tmp->next = list;
	}
	begin_list = tmp;
}