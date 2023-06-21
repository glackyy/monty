#include "monty.h"
/**
 * pint - Entry Function
 * @s: Pointer
 * @l_num: unsigned int
 */
void pint(stack_t **s, unsigned int l_num)
{
if (!*s || !s)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", l_num);
	free_all();
	exit(EXIT_FAILURE);
}
else
	fprintf(stdout, "%d\n", (*s)->n);
}
