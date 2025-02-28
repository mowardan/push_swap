#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		argnum;
	char	**nbr;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	while (i < ac)
	{
		nbr = ft_split(av[i], 32);
		stack_a = check_and_push(stack_a, nbr);
		free_nbr(nbr);
		i++;
	}
	if (!stack_a)
		return (-1);
	argnum = stack_size(stack_a);
	// t_stack *tmp;
	// tmp = stack_a;
	// while(tmp)
	// {
	// 	printf("%d ->", tmp->nb);
	// 	tmp = tmp->next;
	// }
	// puts("\n");
	// if(stack_a == NULL)
	// 	printf("stack_a is NULL");
	// printf("\nsortd %d\n", is_sorted(stack_a));
	if (!is_sorted(stack_a))
	{
		if (argnum <= 20)
		
			small_sort(&stack_a, &stack_b, argnum);
		else
			radix_sort(&stack_a, &stack_b, argnum);
	}
	// puts("here");
	// tmp = stack_a;
	// while(tmp)
	// {
	// 	printf("%d ->", tmp->nb);
	// 	tmp=tmp->next;
	// }
	// puts("");
//	if (is_sorted(stack_a))
//	 	printf("isorted");

	free_stack(&stack_a);
}
