#include "monty.h"

/**
 * faqu_sub_stack - Function for subtracting top from second element
 * @faqu_line_num: For command line number
 * @faqu_actual_head: For head address
 */

void faqu_sub_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num)
{
	stack_t *faqu_temp_node = *faqu_actual_head;
	int faqu_count = 0;
	int faqu_temp_val = 0;

	while (faqu_temp_node)
	{
		faqu_temp_node = faqu_temp_node->next;
		faqu_count++;
	}
	if (faqu_count >= 2)
	{
		faqu_temp_node = *faqu_actual_head;
		faqu_temp_val = faqu_temp_node->next->n - faqu_temp_node->n;
		faqu_temp_node->next->n = faqu_temp_val;
		faqu_pop_stack(faqu_actual_head, faqu_line_num);
	}
	else
		faqu_error_handler(10, NULL, faqu_line_num);
}
