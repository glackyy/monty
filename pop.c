#include "monty.h"
/**
 * pop - Entry function
 * @s: pointer
 * @l_num: unsigned int
 */
void pop(stack_t **s, unsigned int l_num)
{
stack_t *curr = NULL
if (!*stack || !stack)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", l_num);
	free_all();
	exit(EXIT_FAILURE);
}
curr = *s;
*s = curr->next;
if (curr->next != NULL)
	curr->next->prev = curr->prev;
free(curr);
}
