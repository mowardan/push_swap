#include "push_swap.h"

void	push_front(t_stack **begin_list, t_stack *new_node)
{
	if (!begin_list)
		return ;
	if (new_node)
	{
		new_node->next = *begin_list;
		*begin_list = new_node;
	}
}
