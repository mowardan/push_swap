#include "../push_swap.h"

void	sort_three(t_stack **stack_a)
{
	if (find_min(*stack_a) == (*stack_a)->nb)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (find_max(*stack_a) == (*stack_a)->nb)
	{
		ra(stack_a);
		if (!is_sorted(*stack_a))
			sa(stack_a);
	}
	else
	{
		if (find_index(find_max(*stack_a), *stack_a) == 1)
			rra(stack_a);
		else
			sa(stack_a);
	}
}
