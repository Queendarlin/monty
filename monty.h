#ifndef MONTY_H
#define MONTY_H

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct faqu_bus_s - variables -args, file, line content
 * @fq_arg: for value
 * @fq_file: Monty file pointer
 * @fq_content: for line content
 * @fq_lifi: for changing stack to queue
 */
typedef struct faqu_bus_s
{
	char *fq_arg;
	FILE *fq_file;
	char *fq_content;
	int fq_lifi;
} faqu_bus_t;

extern faqu_bus_t faqu_bus;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);

void faqu_push(stack_t **faqu_head, unsigned int faqu_counter);
void faqu_pall(stack_t **faqu_head, unsigned int faqu_counter);
void faqu_pint(stack_t **faqu_head, unsigned int faqu_counter);
int faqu_execute(char *faqu_content, stack_t **faqu_stack,
		unsigned int faqu_counter, FILE *faqu_file);
void faqu_free_stack(stack_t *faqu_head);
void faqu_pop(stack_t **faqu_head, unsigned int faqu_counter);
void faqu_swap(stack_t **faqu_head, unsigned int faqu_counter);
void faqu_add(stack_t **faqu_head, unsigned int faqu_counter);
void faqu_nop(stack_t **faqu_head, unsigned int faqu_counter);
void faqu_sub(stack_t **faqu_head, unsigned int faqu_counter);
void faqu_div(stack_t **faqu_head, unsigned int faqu_counter);
void faqu_mul(stack_t **faqu_head, unsigned int faqu_counter);
void faqu_mod(stack_t **faqu_head, unsigned int faqu_counter);
void faqu_pchar(stack_t **faqu_head, unsigned int faqu_counter);
void faqu_pstr(stack_t **faqu_head, unsigned int faqu_counter);
void faqu_rotl(stack_t **faqu_head,
		__attribute__((unused)) unsigned int faqu_counter);
void faqu_rotr(stack_t **faqu_head,
		__attribute__((unused)) unsigned int faqu_counter);
void faqu_addnode(stack_t **faqu_head, int faqu_n);
void faqu_addqueue(stack_t **faqu_head, int faqu_n);
void faqu_queue(stack_t **faqu_head, unsigned int faqu_counter);
void faqu_stack(stack_t **faqu_head, unsigned int faqu_counter);

#endif

