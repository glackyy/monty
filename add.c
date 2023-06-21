#include "monty.h"
/**
 * add - Entry Function
 * @s: Pointer
 * @l_num: unsigned int
 */
void add(stack_t **s, unsigned int l_num)
{
stack_t *curr = NULL;
int sum = 0;
if (!*s || !(*s)->next)
{
	fprintf(stderr, "L%d: can't add, stack too short\n", l_num);
	free_stack(s);
	free_all();
	exit(EXIT_FAILURE);
}
curr = *s;
sum = curr->n + curr->next->n;
curr->next->n = sum;
pop(s, l_num);
}
