#include "monty.h"

/**
 * faqu_print_char_stack - For printing top element ASCII character value
 * @faqu_actual_head: list head
 * @faqu_line_num: For command line number
 */

void faqu_print_char_stack(stack_t **faqu_actual_head,
		unsigned int faqu_line_num)
{
	stack_t *faqu_temp_node;

	faqu_temp_node = *faqu_actual_head;
	if (*faqu_actual_head != NULL)
		if (faqu_temp_node->n >= 32 && faqu_temp_node->n <= 126)
			printf("%c\n", faqu_temp_node->n);
		else
			faqu_error_handler2(16, faqu_line_num);
	else
		faqu_error_handler2(15, faqu_line_num);
}
