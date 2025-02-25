/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:52:38 by mowardan          #+#    #+#             */
/*   Updated: 2025/02/25 21:34:48 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	rotate(t_stack **stack)
{
	t_stack	*current;
	t_stack	*first;

	if (!stack || !(*stack) || !(*stack)->next)
		return (0);
	first = *stack;
	*stack = (*stack)->next;
	current = *stack;
	while (current->next)
		current = current->next;
	current->next = first;
	first->next = NULL;
	return (1);
}

int	ra(t_stack **stack_a)
{
	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return (0);
	if (rotate(stack_a))
	{
		write(1, "ra\n", 3);
		return (1);
	}
	return (0);
}
