#include "monty.h"

/**
 * faqu_swap_stack - For swapping the top two elements
 * @faqu_line_num: For command line number
 * @faqu_actual_head: For head address
 */

void faqu_swap_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num)
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
		faqu_temp_val = faqu_temp_node->n;
		faqu_temp_node->n = faqu_temp_node->next->n;
		faqu_temp_node->next->n = faqu_temp_val;
	}
	else
		faqu_error_handler(8, NULL, faqu_line_num);
}
