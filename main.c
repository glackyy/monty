#include "monty.h"
/**
 * main - Entry Point
 * @argc: int
 * @argv: Pointer
 * Return: 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
FILE *file;
char *filename;
if (argc != 2)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
filename = argv[1];
file = fopen(filename, "r");
if (file == NULL)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}
exec_bytcode(file);
fclose(file);
return (0);
}
