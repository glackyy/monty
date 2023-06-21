#include "monty.h"
/**
 * _div - Entry Function
 * @s: Pointer
 * @l_num: unsigned int
 */
void _div(stack_t **s, unsigned int l_num)
{
int q;
stack_t *t;
if (*s == NULL || (*s)->next == NULL)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", l_num);
	exit(EXIT_FAILURE);
}
if ((*s)->n == 0)
{
	fprintf(stderr, "L%u: division by zero\n", l_num);
	exit(EXIT_FAILURE);
}
q = (*s)->next->n / (*s)->n;
(*s)->next->n = q;
t = *s;
*s = (*s)->next;
(*s)->prev = NULL;
free(t);
}
