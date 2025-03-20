/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <mowardan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:14:50 by mowardan          #+#    #+#             */
/*   Updated: 2025/03/20 01:09:57 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	free_all(t_stack **begin, char **nbr)
{
	t_stack	*head;
	t_stack	*temp;

	head = *begin;
	if (!begin)
	{
		return ;
	}
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free_nbr(nbr);
	begin = NULL;
}

static int	check_dublicated(t_stack *head)
{
	t_stack	*next;

	if (!head)
		return (0);
	while (head)
	{
		next = head->next;
		while (next)
		{
			if (head->nb == next->nb)
			{
				write(2, "Error\n", 6);
				return (0);
			}
			next = next->next;
		}
		head = head->next;
	}
	return (1);
}

static t_stack	*push_stack(t_stack *stack, char **nbr)
{
	int		flag;
	long	nb;
	t_stack	*new_node;
	int		i;

	i = 0;
	flag = 1;
	while (nbr[i])
	{
		nb = ft_atoi(nbr[i++], &flag);
		if (flag == 0)
			return (free_all(&stack, nbr), write(2, "Error\n", 6), NULL);
		new_node = create_node(nb);
		if (!new_node)
			return (free_all(&stack, nbr), NULL);
		add_back(&stack, new_node);
	}
	if (check_dublicated(stack) == 0)
		return (free_all(&stack, nbr), NULL);
	return (stack);
}

t_stack	*check_and_push(t_stack *stack, char **nbr)
{
	if (!nbr || !*nbr)
	{
		if (nbr && !*nbr)
			free_nbr(nbr);
		write(2, "Error\n", 6);
		if (stack)
			free_stack(&stack);
		exit(1);
	}
	stack = push_stack(stack, nbr);
	if (stack == NULL)
		exit(1);
	fill_index(&stack);
	return (stack);
}
