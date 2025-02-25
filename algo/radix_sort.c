#include "../push_swap.h"

static int	get_max_bits(t_stack **stack)
{
	t_stack	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->rank;
	max_bits = 0;
	while (head)
	{
		if (head->rank > max)
			max = head->rank;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b, int size)
{
	int		i;
	int		max_bits;
	int		j;
	int		count;
	t_stack	*head_a;

	i = 0;
	max_bits = get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		count = 0;  // Track number of elements pushed to stack_b
		while (j < size)
		{
			head_a = *stack_a;
			if (((head_a->rank >> i) & 1) == 0)
			{
				pb(stack_a, stack_b);
				count++;
			}
			else
				ra(stack_a);
			j++;
		}
		while (count-- > 0)
			pa(stack_a, stack_b);
		i++;
	}
}
