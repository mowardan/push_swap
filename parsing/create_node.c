#include "../push_swap.h"

t_stack	*create_node(int nb)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->nb = nb;
	node->rank = -1;
	node->next = NULL;
	return (node);
}
