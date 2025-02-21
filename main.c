#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack	*stack_a;
	char	**nbr;
	int		i;

	stack_a = NULL;
	i = 1;
	while (i < ac)
	{
		nbr = ft_split(av[i], 32);
		stack_a = check_and_push(stack_a, nbr);
		free_nbr(nbr);
		i++;
	}
	free_stack(&stack_a);
}
