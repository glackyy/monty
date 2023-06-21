#include "monty.h"
/**
 * _mul - Entry Function
 * @s: Pointer
 * @l_num: unsigned int
 */
void _mul(stack_t **s, unsigned int l_num)
{
int res;
if (*s == NULL || (*s)->next == NULL)
{
	fprintf(stderr, "L%d: can't mul, stack too short\n", l_num);
	free_stack(s);
	exit(EXIT_FAILURE);
}
res = ((*s)->next->n) * ((*s)->n);
pop(s, l_num);
(*s)->n = res;
}
