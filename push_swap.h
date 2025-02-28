#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <limits.h>
# include <stdlib.h>

typedef struct stack
{
	int				nb;
	//int				index;
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
int stack_size(t_stack *stack);
t_stack	*ft_lstlast(t_stack *lst);
void	add_back(t_stack **lst, t_stack *new);

// operations
int                                     sa(t_stack **stack_a);
int                                     ra(t_stack **stack_a);
int                                     rra(t_stack **stack_a);
int                                     pa(t_stack **stack_a, t_stack **stack_b);
int                                     pb(t_stack **stack_a, t_stack **stack_b);

// algo
int                             is_sorted(t_stack *stack);
void                            small_sort(t_stack **stack_a, t_stack **stack_b, int size);
int            	                find_max(t_stack *stack);
int                             find_min(t_stack *stack);
int                             find_index(int target, t_stack *stack);
void                            sort_three(t_stack **stack_a);
void                            move_min_to_top(t_stack **stack, int distance, int size);
void	radix_sort(t_stack **stack_a, t_stack **stack_b, int size);
void    fill_index(t_stack **stack_a);

#endif
