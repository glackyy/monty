#include "monty.h"
/**
 * free_stack - Entry Function
 * @stack: Pointer
 */
void free_stack(stack_t **stack)
{
stack_t *curr = *stack;
for (; curr; curr = *stack)
{
	*stack = (*stack)->next;
	free(curr);
}
}
