#include "monty.h"
/**
 * pint - Entry Function
 * @s: Pointer
 * @l_num: unsigned int
 */
void pint(stack_t **s, unsigned int l_num)
{
if (*s == NULL)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", l_num);
	exit(EXIT_FAILURE);
}
printf("%d\n", (*s)->n);
}
