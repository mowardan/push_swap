#include "../push_swap.h"

void	add_back(t_stack **lst, t_stack *new)
{
	t_stack	*ptr;

	if (*lst == NULL && new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ptr = ft_lstlast(*lst);
	ptr->next = new;
}