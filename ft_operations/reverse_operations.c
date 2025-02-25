/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:52:23 by mowardan          #+#    #+#             */
/*   Updated: 2025/02/25 21:34:28 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	reverse_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*second_last;

	if (!stack || !(*stack) || !(*stack)->next)
		return (0);
	last = *stack;
	second_last = NULL;
	while (last->next)
	{
		second_last = last;
		last = last->next;
	}
	if (second_last)
		second_last->next = NULL;
	last->next = *stack;
	*stack = last;
	return (1);
}

int	rra(t_stack **stack_a)
{
	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return (0);
	if (reverse_rotate(stack_a))
	{
		write(1, "rra\n", 4);
		return (1);
	}
	return (0);
}
