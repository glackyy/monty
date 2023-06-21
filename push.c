#include "monty.h"
/**
 * push - Entry Function
 * @s: Pointer stack_t
 * @l_num: unsigned int
 */
void push(stack_t **s, unsigned int l_num, char *arg)
{
stack_t *n_node;
int val;
if (arg == NULL || strlen(arg) == 0)
{
	fprintf(stderr, "L%d: usage: push integer\n", l_num);
	exit(EXIT_FAILURE);
}
val = atoi(arg);
if (val == 0 && arg[0] != '0')
{
	fprintf(stderr, "L%d: usage: push integer\n", l_num);
	exit(EXIT_FAILURE);
}
n_node = create_n_node(val);
n_node->next = *s;
if (*s != NULL)
	(*s)->prev = n_node;
*s = n_node;
}
