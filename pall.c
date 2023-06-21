#include "monty.h"
/**
 * pall - Entry Function
 * @s: Pointer stack_t
 * @l_num: unsigned int
 */
void pall(stack_t **s, unsigned int l_num)
{
stack_t *curr = *s;
(void)l_num;
while (curr != NULL)
{
	printf("%d\n", curr->n);
	curr = curr->next;
}
}
