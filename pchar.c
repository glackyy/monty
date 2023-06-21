#include "monty.h"
/**
 * _pchar - Entry Function
 * @s: Pointer
 * @l_num: unsigned int
 */
void _pchar(stack_t **s, unsigned int l_num)
{
if (*s == NULL)
{
	fprintf(stderr, "L%u: can't pchar, stack empty\n", l_num);
	exit(EXIT_FAILURE);
}
if ((*s)->n < 0 || (*s)->n > 127)
{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", l_num);
	exit(EXIT_FAILURE);
}
printf("%c\n", (*s)->n);
}
