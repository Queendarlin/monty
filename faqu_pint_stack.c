#include "monty.h"

/**
 * faqu_pint_stack - Function for printing top element
 * @faqu_actual_head: For head address
 * @faqu_line_num: For command line number
 */

void faqu_pint_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num)
{
	stack_t *faqu_temp_node;

	(void)faqu_line_num;
	faqu_temp_node = *faqu_actual_head;
	if (*faqu_actual_head != NULL)
		printf("%i\n", faqu_temp_node->n);
	else
		faqu_error_handler(6, NULL, faqu_line_num);
}
