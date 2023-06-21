#include "monty.h"
/**
 * _isdig - Entry Function
 * @c: Pointer
 * Return: 1 or 0
 */
int _isdig(char *c)
{
char *a = c;
if (c == NULL)
	return (0);
if (*a == '-')
	a++;
for (; *a != '\0'; a++)
{
	if ((*a < '0' || *a > '9'))
		return (0);
}
return (1);
}
