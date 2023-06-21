#include "monty.h"
/**
 * exec_cmd - Entry Function
 * @h: Pointer
 * @l_num: unsigned int
 * @line: char
 * Return: 0
 */
int exec_cmd(char *line, unsigned int l_num, stack_t **h)
{
int i = 0;
char *f;
instruction_t operate[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{NULL, NULL}
	};
f = strtok(line, " \n\t\r\a\v");
if (f == NULL || f[0] == '#')
	return (0);
while (operate[i].opcode != NULL)
{
	if (strcmp(operate[i].opcode, f) == 0)
	{
		if (strcmp(f, "push") == 0)
		{
			f = strtok(NULL, " \n\t\r\a\v");
			if (_isdig(f) == 1)
				val = atoi(f);
			else
			{
				fprintf(stderr, "L%u: usage: push integer\n", l_num);
				fclose(monty_data.file);
				free(monty_data.line);
				free_stack(h);
				exit(EXIT_FAILURE);
			}
		}
		operate[i].f(h, l_num);
		return (0);
		}
	else
	{
		if (operate[i + 1].opcode == NULL)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", l_num, f);
			fclose(monty_data.file);
			free(monty_data.line);
			free_stack(h);
			exit(EXIT_FAILURE);
		}
	}
	i++;
}
return (0);
}
