/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 21:43:35 by mowardan          #+#    #+#             */
/*   Updated: 2025/03/17 21:43:36 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	small_sort(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	distance;

	if (is_sorted(*stack_a) || size <= 1)
		return ;
	if (size == 2)
		sa(stack_a);
	else
	{
		while (size > 3)
		{
			distance = find_index(find_min(*stack_a), *stack_a);
			move_min_to_top(stack_a, distance, size);
			pb(stack_a, stack_b);
			size--;
		}
		sort_three(stack_a);
		while (*stack_b)
			pa(stack_a, stack_b);
	}
}
