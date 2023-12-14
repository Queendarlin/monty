#include "monty.h"

/**
 * faqu_mul_stack - Function for multiplying second by first element
 * @faqu_line_num: For command line number
 * @faqu_actual_head: The  head's address
 */

void faqu_mul_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num)
{
	stack_t *faqu_temp_node = *faqu_actual_head;
	int faqu_count = 0, faqu_temp_val = 0;

	while (faqu_temp_node)
	{
		faqu_temp_node = faqu_temp_node->next;
		faqu_count++;
	}
	if (faqu_count >= 2)
	{
		faqu_temp_node = *faqu_actual_head;
		faqu_temp_val = faqu_temp_node->next->n * faqu_temp_node->n;
		faqu_temp_node->next->n = faqu_temp_val;
		faqu_pop_stack(faqu_actual_head, faqu_line_num);
	}
	else
		faqu_error_handler2(13, faqu_line_num);
}
