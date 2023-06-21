#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct Monty_data_s - struct
 * @h: stack_t
 * @file: FILE
 * @line: char
 *
 * Description : data usage
 */
typedef struct Monty_data_s
{
	stack_t *h;
	FILE *file;
	char *line;
} Montydata;
extern int val;
extern Montydata monty_data;
ssize_t getline(char **line_n, size_t *n, FILE *str);
int exec_cmd(char *, unsigned int, stack_t**);
int _isdig(char *c);
void push(stack_t **s, unsigned int l_num);
void pall(stack_t **s, unsigned int l_num);
void pint(stack_t **s, unsigned int l_num);
void pop(stack_t **s, unsigned int l_num);
void swap(stack_t **s, unsigned int l_num);
void add(stack_t **s, unsigned int l_num);
void nop(stack_t **s, unsigned int l_num);
void sub(stack_t **s, unsigned int l_num);
void free_stack(stack_t **stack);
void free_all(void);
void _div(stack_t **s, unsigned int l_num);
void _mul(stack_t **s, unsigned int l_num);
void _mod(stack_t **s, unsigned int l_num);
#endif
