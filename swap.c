#include "monty.h"
/**
 * swap - Entry Function
 * @s: Pointer
 * @l_num: unsigned int
 */
void swap(stack_t **s, unsigned int l_num)
{
stack_t *curr = *s;
int temp = 0;
if (!*s || !(*s)->next)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", l_num);
	free_stack(s);
	free_all();
	exit(EXIT_FAILURE);
}
temp = curr->n;
curr->n = curr->next->n;
curr->next->n = temp;
}
