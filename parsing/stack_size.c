#include "../push_swap.h"

int stack_size(t_stack *stack)
{
    int size = 0;
    while (stack)
    {
        size++;
        stack = stack->next;
    }
    return size;
}
