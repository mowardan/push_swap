/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <mowardan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 21:43:25 by mowardan          #+#    #+#             */
/*   Updated: 2025/03/17 22:31:50 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	fill_index(t_stack **stack_a)
{
	t_stack	*current;
	t_stack	*tmp;
	int		rank;

	current = *stack_a;
	while (current)
	{
		current->rank = 0;
		current = current->next;
	}
	current = *stack_a;
	while (current)
	{
		tmp = *stack_a;
		rank = 0;
		while (tmp)
		{
			if (tmp->nb < current->nb)
				rank++;
			tmp = tmp->next;
		}
		current->rank = rank;
		current = current->next;
	}
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b, int size)
{
	int		i;
	int		max_bits;
	int		j;
	t_stack	*head_a;

	i = 0;
	max_bits = get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			head_a = *stack_a;
			if (((head_a->rank >> i) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			j++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		i++;
	}
}
