#include "monty.h"
/**
 * sub - Entry Function
 * @s: Pointer
 * @l_num: unsigned int
 */
void sub(stack_t **s, unsigned int l_num)
{
stack_t *t;
int sub;
if (*s == NULL || (*s)->next == NULL)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", l_num);
	exit(EXIT_FAILURE);
}
sub = (*s)->next->n - (*s)->n;
(*s)->next->n = sub;
t = *s;
*s = (*s)->next;
(*s)->prev = NULL;
free(t);
}
