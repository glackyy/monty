#include "monty.h"
/**
 * pall - Entry Function
 * @s: Pointer stack_t
 * @l_num: unsigned int
 */
void pall(stack_t **s, unsigned int l_num)
{
stack_t *curr = NULL;
(void)l_num;
curr = *s;
while (curr != NULL)
{
	fprintf(stdout, "%d\n", curr->n);
	curr = curr->next;
}
}
