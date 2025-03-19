/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <mowardan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 21:42:12 by mowardan          #+#    #+#             */
/*   Updated: 2025/03/18 21:48:27 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max(t_stack *stack)
{
	int		max;
	t_stack	*tmp;

	max = stack->nb;
	tmp = stack->next;
	while (tmp)
	{
		if (tmp->nb > max)
			max = tmp->nb;
		tmp = tmp->next;
	}
	return (max);
}

int	find_min(t_stack *stack)
{
	int		min;
	t_stack	*tmp;

	min = stack->nb;
	tmp = stack->next;
	while (tmp)
	{
		if (tmp->nb < min)
			min = tmp->nb;
		tmp = tmp->next;
	}
	return (min);
}

int	find_index(int target, t_stack *stack)
{
	t_stack	*tmp;
	int		i;

	tmp = stack;
	i = 0;
	while (tmp)
	{
		if (tmp->nb == target)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
