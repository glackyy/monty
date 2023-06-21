#include "monty.h"
/**
 * free_all - Entry Function
 */
void free_all()
{
fclose(monty_data.file);
free(monty_data.line);
}
