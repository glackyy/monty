#include "monty.h"
Montydata monty_data = {NULL, NULL, NULL};
/**
 * main - Entry Function
 * @argc: int
 * @argv: Pointer
 * Return: 0 SUCCESS
 */
int main(int argc, char *argv[])
{
size_t size = 0;
ssize_t line_s = 1;
unsigned int l_num = 0;
if (argc != 2)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
monty_data.file = fopen(argv[1], "r");
if (monty_data.file == NULL)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
}
while (line_s > 0)
{
	monty_data.line = NULL;
	line_s = getline(&(monty_data.line), &size, monty_data.file);
	l_num++;
	if (line_s > 0 && monty_data.line[0] != '#')
		exec_cmd(monty_data.line, l_num, &monty_data.h);
	free(monty_data.line);
}
free_stack(&monty_data.h);
fclose(monty_data.file);
return (0);
}
