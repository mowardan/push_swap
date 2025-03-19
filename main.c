/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <mowardan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 21:41:05 by mowardan          #+#    #+#             */
/*   Updated: 2025/03/19 15:05:40 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	**nbr;	
	t_stack	*stack_a;
	t_stack	*stack_b;

	int (i), argnum;
	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	while (i < ac)
	{
		nbr = ft_split(av[i++], 32);
		stack_a = check_and_push(stack_a, nbr);
		free_nbr(nbr);
	}
	if (!stack_a)
		return (-1);
	argnum = stack_size(stack_a);
	if (!is_sorted(stack_a))
	{
		if (argnum <= 20)
			small_sort(&stack_a, &stack_b, argnum);
		else
			radix_sort(&stack_a, &stack_b, argnum);
	}
	free_stack(&stack_a);
}
