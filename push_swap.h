#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <limits.h>
# include <stdlib.h>

typedef struct stack
{
	int				nb;
	int				index;
	int				rank;
	struct stack	*next;
}					t_stack;

// parsing
char	**ft_split(char const *s, char c);
t_stack	*check_and_push(t_stack *stack, char **nbr);
void	free_stack(t_stack **begin);
void	free_nbr(char **nbr);
void	handl_sign(long *sign, char c, int *i);
long	ft_atoi(char *nb, int *flag);
void	push_front(t_stack **begin_list, t_stack *new_node);
t_stack	*create_node(int nb);
size_t	ft_strlen(const char *c);
char    *ft_substr(char const *s, unsigned int start, size_t len);

// operations
int                                     sa(t_stack **stack_a);
int                                     sb(t_stack **stack_b);
int                                     ss(t_stack **stack_a, t_stack **stack_b);
int                                     ra(t_stack **stack_a);
int                                     rb(t_stack **stack_b);
int                                     rr(t_stack **stack_a, t_stack **stack_b);
int                                     rra(t_stack **stack_a);
int                                     rrb(t_stack **stack_b);
int                                     rrr(t_stack **stack_a, t_stack **stack_b);
int                                     pa(t_stack **stack_a, t_stack **stack_b);
int                                     pb(t_stack **stack_a, t_stack **stack_b);

// sort


#endif
