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

extern stack_t *faqu_head;

void faqu_read_file(FILE *faqu_file);
int faqu_read_line(char **faqu_lineptr, size_t *n, FILE *faqu_file);
void faqu_error_handler(int faqu_error_num, char *file_name,
		int faqu_line_num);
int faqu_split_string(char *faqu_lineptr, int faqu_line_num,
		int flag);
void faqu_opcode_func(char *faqu_value, char *faqu_opcode,
		int faqu_line_num, int flag);
void faqu_push_stack(stack_t **faqu_new_node, unsigned int faqu_value);
void faqu_print_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num);
void faqu_free_dlistint(stack_t *faqu_head);
void faqu_pint_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num);
void faqu_pop_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num);
void faqu_swap_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num);
void faqu_add_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num);
void faqu_no_operation(stack_t **faqu_actual_head, unsigned int faqu_line_num);
void (*faqu_get_op_func(char *s))(stack_t **, unsigned int);
void faqu_sub_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num);
void faqu_div_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num);
void faqu_error_handler2(int faqu_error_num, int faqu_line_num);
void faqu_mul_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num);
void faqu_mod_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num);
void faqu_print_char_stack(stack_t **faqu_actual_head,
		unsigned int faqu_line_num);
void faqu_print_str_stack(stack_t **faqu_actual_head,
		unsigned int faqu_line_num);
void faqu_rotate_top(stack_t **faqu_actual_head,
		unsigned int faqu_line_num);
void faqu_rotate_bottom(stack_t **faqu_actual_head,
		unsigned int faqu_line_num);
void faqu_push_queue(stack_t **faqu_actual_head,
		unsigned int faqu_value);

#endif
