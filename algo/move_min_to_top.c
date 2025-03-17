/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_min_to_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 21:43:16 by mowardan          #+#    #+#             */
/*   Updated: 2025/03/17 21:43:18 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
