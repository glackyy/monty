#include "monty.h"
/**
 * push - Entry Function
 * @s: Pointer stack_t
 * @l_num: unsigned int
 */
int val;
void push(stack_t **s, unsigned int l_num)
{
stack_t *new_n = NULL;
(void)l_num;
new_n = malloc(sizeof(stack_t));
if (new_n == NULL)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_all();
	free_stack(s);
	exit(EXIT_FAILURE);
}
new_n->n = val;
new_n->next = *s;
if (*s != NULL)
	(*s)->prev = new_n;
*s = new_n;
}
