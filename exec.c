#include "monty.h"
/**
 * exec_bytcode - Entry Function
 * @inst: Pointer
 * @s: Pointer
 * @l_num: unsigned int
 */
void exec_bytcode(instruction_t *inst, stack_t **s, unsigned int l_num)
{
int val;
char *opcode = inst->opcode;
char *arg;
void (*f)(stack_t **s, unsigned int l_num) = inst->f;
if (f != NULL)
{
	if (strcmp(opcode, "push") == 0)
	{
		arg = strtok(NULL, " \t\n");
		if (arg == NULL || is_numeric(arg))
		{
			fprintf(stderr, "L%u: usage: push integer\n", l_num);
			exit(EXIT_FAILURE);
		}
		val = atoi(arg);
		fn(s, l_num, val);
	}
	else
		f(s, l_num);
	else
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", l_num, opcode);
		exit(EXIT_FAILURE);
	}
}
}
