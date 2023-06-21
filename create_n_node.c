#include "monty.h"
/**
 * create_n_node - Entry Function
 * @val: int
 * Return: n_node
 */
stack_t *create_n_node(int val)
{
stack_t *n_node = malloc(sizeof(stack_t));
if (n_node == NULL)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
n_node->n = val;
n_node->prev = NULL;
n_node->next = NULL;
return (n_node);
}
