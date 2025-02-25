#include "../push_swap.h"

void	move_min_to_top(t_stack **stack, int distance, int size)
{
	if (distance <= size / 2)
	{
		while (distance-- > 0)
			ra(stack);
	}
	else
	{
		distance = size - distance;
		while (distance-- > 0)
			rra(stack);
	}
}
