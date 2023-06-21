#include "monty.h"
/**
 * exec_bytcode - Entry Function
 * @file: Pointer
 */
void exec_bytcode(FILE *file)
{
stack_t *s = NULL;
char *line, *opcode, *arg;
size_t l_size = 0;
unsigned int l_num = 0;
line = NULL;
while (getline(&line, &l_size, file) != -1)
{
	l_num++;
	opcode = strtok(line, " \t\n");
	arg = strtok(NULL, " \t\n");
	if (opcode != NULL)
	{
		if (strcmp(opcode, "push") == 0)
			push(&s, l_num, arg);
		else if (strcmp(opcode, "pall") == 0)
			pall(&s, l_num);
		else
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", l_num, opcode);
			exit(EXIT_FAILURE);
		}
	}
}
free(line);
}
