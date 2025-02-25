/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:52:56 by mowardan          #+#    #+#             */
/*   Updated: 2025/02/25 21:35:01 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	swap(t_stack **stack)
{
	int		temp_nb;
	int		temp_rank;
	t_stack	*next;
	t_stack	*current;

	if (!stack || !(*stack) || !(*stack)->next)
		return (0);
	current = *stack;
	next = current->next;
	if (next)
	{
		temp_nb = next->nb;
		temp_rank = next->rank;
		next->nb = current->nb;
		next->rank = current->rank;
		current->nb = temp_nb;
		current->rank = temp_rank;
	}
	return (1);
}

int	sa(t_stack **stack_a)
{
	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return (0);
	if (swap(stack_a))
	{
		write(1, "sa\n", 3);
		return (1);
	}
	return (0);
}
