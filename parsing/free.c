/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <mowardan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:15:16 by mowardan          #+#    #+#             */
/*   Updated: 2025/03/18 17:58:50 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_stack **begin)
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
	begin = NULL;
}

void	free_nbr(char **nbr)
{
	int	i;

	i = 0;
	while (nbr[i])
		free(nbr[i++]);
	free(nbr);
}
